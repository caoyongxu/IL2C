﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;

using NUnit.Framework;

namespace IL2C.ILConverters
{
    [TestFixture]
    [Parallelizable(ParallelScope.All)]
    public sealed class ILConverterTest
    {
        private static CaseInfo[] GetTargetCases<T>() =>
            (from testCase in typeof(T).GetCustomAttributes<CaseAttribute>(true)
             let method = typeof(T).GetMethod(testCase.MethodName, BindingFlags.Public | BindingFlags.Static | BindingFlags.DeclaredOnly)
             where method != null
             orderby method.DeclaringType.FullName, method.Name
             select new CaseInfo(method, testCase.Expected, testCase.Arguments))
            .ToArray();

        public static readonly CaseInfo[] _Ldnull = GetTargetCases<IL2C.ILConverters.Ldnull>();
        [Test]
        public static Task Ldnull(
            [ValueSource("_Ldnull")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        #region Ldarg
        public static readonly CaseInfo[] _Ldarg_0 = GetTargetCases<IL2C.ILConverters.Ldarg_0>();
        [Test]
        public static Task Ldarg_0(
            [ValueSource("_Ldarg_0")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldarg_1 = GetTargetCases<IL2C.ILConverters.Ldarg_1>();
        [Test]
        public static Task Ldarg_1(
            [ValueSource("_Ldarg_1")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldarg_2 = GetTargetCases<IL2C.ILConverters.Ldarg_2>();
        [Test]
        public static Task Ldarg_2(
            [ValueSource("_Ldarg_2")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldarg_3 = GetTargetCases<IL2C.ILConverters.Ldarg_3>();
        [Test]
        public static Task Ldarg_3(
            [ValueSource("_Ldarg_3")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldarg_s = GetTargetCases<IL2C.ILConverters.Ldarg_s>();
        [Test]
        public static Task Ldarg_s(
            [ValueSource("_Ldarg_s")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldarg = GetTargetCases<IL2C.ILConverters.Ldarg>();
        [Test]
        public static Task Ldarg(
            [ValueSource("_Ldarg")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);
        #endregion

        #region Ldc
        public static readonly CaseInfo[] _Ldc_i4_0 = GetTargetCases<IL2C.ILConverters.Ldc_i4_0>();
        [Test]
        public static Task Ldc_i4_0(
            [ValueSource("_Ldc_i4_0")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_1 = GetTargetCases<IL2C.ILConverters.Ldc_i4_1>();
        [Test]
        public static Task Ldc_i4_1(
            [ValueSource("_Ldc_i4_1")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_2 = GetTargetCases<IL2C.ILConverters.Ldc_i4_2>();
        [Test]
        public static Task Ldc_i4_2(
            [ValueSource("_Ldc_i4_2")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_3 = GetTargetCases<IL2C.ILConverters.Ldc_i4_3>();
        [Test]
        public static Task Ldc_i4_3(
            [ValueSource("_Ldc_i4_3")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_4 = GetTargetCases<IL2C.ILConverters.Ldc_i4_4>();
        [Test]
        public static Task Ldc_i4_4(
            [ValueSource("_Ldc_i4_4")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_5 = GetTargetCases<IL2C.ILConverters.Ldc_i4_5>();
        [Test]
        public static Task Ldc_i4_5(
            [ValueSource("_Ldc_i4_5")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_6 = GetTargetCases<IL2C.ILConverters.Ldc_i4_6>();
        [Test]
        public static Task Ldc_i4_6(
            [ValueSource("_Ldc_i4_6")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_7 = GetTargetCases<IL2C.ILConverters.Ldc_i4_7>();
        [Test]
        public static Task Ldc_i4_7(
            [ValueSource("_Ldc_i4_7")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_8 = GetTargetCases<IL2C.ILConverters.Ldc_i4_8>();
        [Test]
        public static Task Ldc_i4_8(
            [ValueSource("_Ldc_i4_8")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_m1 = GetTargetCases<IL2C.ILConverters.Ldc_i4_m1>();
        [Test]
        public static Task Ldc_i4_m1(
            [ValueSource("_Ldc_i4_m1")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4_s = GetTargetCases<IL2C.ILConverters.Ldc_i4_s>();
        [Test]
        public static Task Ldc_i4_s(
            [ValueSource("_Ldc_i4_s")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i4 = GetTargetCases<IL2C.ILConverters.Ldc_i4>();
        [Test]
        public static Task Ldc_i4(
            [ValueSource("_Ldc_i4")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);

        public static readonly CaseInfo[] _Ldc_i8 = GetTargetCases<IL2C.ILConverters.Ldc_i8>();
        [Test]
        public static Task Ldc_i8(
            [ValueSource("_Ldc_i8")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);
        #endregion

        #region Ldloc
        public static readonly CaseInfo[] _Ldloc_0 = GetTargetCases<IL2C.ILConverters.Ldloc_0>();
        [Test]
        public static Task Ldloc_0(
            [ValueSource("_Ldloc_0")] CaseInfo caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo.Method, caseInfo.Expected, caseInfo.Arguments);
        #endregion
    }
}
