﻿using System.Threading.Tasks;

using NUnit.Framework;

namespace IL2C
{
    [TestFixture]
    [Parallelizable(ParallelScope.All)]
    public sealed class TypeSystemsTest
    {
        public static readonly TestCaseInformation[] _EnumTypes = TestUtilities.GetTestCaseInformations<IL2C.TypeSystems.EnumTypes>();
        [Test]
        public static Task EnumTypes([ValueSource(nameof(_EnumTypes))] TestCaseInformation caseInfo) =>
            TestFramework.ExecuteTestAsync(caseInfo);
    }
}