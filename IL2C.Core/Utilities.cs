﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace IL2C
{
    internal static class Utilities
    {
        private static readonly Dictionary<ushort, ILConverter> ilConverters;

        static Utilities()
        {
            ilConverters = typeof(ILConverter)
                .Assembly
                .GetTypes()
                .Where(type => type.IsSealed && typeof(ILConverter).IsAssignableFrom(type))
                .Select(type => (ILConverter) Activator.CreateInstance(type))
                .ToDictionary(ilc => (ushort) ilc.OpCode.Value);
        }

        public static bool TryGetILConverter(ushort opCodeBytes, out ILConverter ilc)
        {
            return ilConverters.TryGetValue(opCodeBytes, out ilc);
        }

        public static string GetCLanguageTypeName(Type type)
        {
            if (type == typeof(void))
            {
                return "void";
            }
            if (type == typeof(Boolean))
            {
                return "bool";
            }
            if (type == typeof(Byte))
            {
                return "uint8_t";
            }
            if (type == typeof(SByte))
            {
                return "int8_t";
            }
            if (type == typeof(Int16))
            {
                return "int16_t";
            }
            if (type == typeof(UInt16))
            {
                return "uint16_t";
            }
            if (type == typeof(Int32))
            {
                return "int32_t";
            }
            if (type == typeof(Int64))
            {
                return "int64_t";
            }

            if (type.IsByRef)
            {
                var dereferencedType = type.GetElementType();
                return GetCLanguageTypeName(dereferencedType) + "*";
            }

            return GetFullMemberName(type).ManglingSymbolName();
        }

        public static bool IsNumericPrimitive(Type type)
        {
            if (type == typeof(Byte))
            {
                return true;
            }
            if (type == typeof(SByte))
            {
                return true;
            }
            if (type == typeof(Int16))
            {
                return true;
            }
            if (type == typeof(UInt16))
            {
                return true;
            }
            if (type == typeof(Int32))
            {
                return true;
            }
            if (type == typeof(Int64))
            {
                return true;
            }

            return false;
        }

        public static string GetRightExpression(Type lhsType, SymbolInformation rhs)
        {
            if (lhsType.IsAssignableFrom(rhs.TargetType))
            {
                return rhs.SymbolName;
            }

            if (IsNumericPrimitive(rhs.TargetType))
            {
                if (IsNumericPrimitive(lhsType))
                {
                    return String.Format(
                        "({0}){1}",
                        GetCLanguageTypeName(lhsType),
                        rhs.SymbolName);
                }
                else if (lhsType == typeof(bool))
                {
                    return String.Format(
                        "{0} ? true : false",
                        rhs.SymbolName);
                }
            }

            return null;
        }

        public static string GetFullMemberName(MemberInfo member)
        {
            if (member.DeclaringType != null)
            {
                var declaringTypes = member.DeclaringType
                    .Traverse(current => current.DeclaringType)
                    .Reverse()
                    .ToArray();

                return string.Format(
                    "{0}.{1}.{2}",
                    declaringTypes.First().Namespace,
                    string.Join(".", declaringTypes.Select(dt => dt.Name)),
                    member.Name);
            }
            else
            {
                var type = member as Type;
                if (type != null)
                {
                    return type.FullName;
                }
                else
                {
                    return member.Name;
                }
            }
        }

        public static string ManglingSymbolName(this string rawSymbolName)
        {
            return rawSymbolName
                .Replace('.', '_')
                .Replace("*", "_reference");
        }

        public static IEnumerable<T> Traverse<T>(this T first, Func<T, T> next)
            where T : class
        {
            T current = first;
            while (current != null)
            {
                yield return current;
                current = next(current);
            }
        }
    }
}