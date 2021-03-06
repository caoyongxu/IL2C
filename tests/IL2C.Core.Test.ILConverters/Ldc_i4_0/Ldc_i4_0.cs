using System.Runtime.CompilerServices;

namespace IL2C.ILConverters
{
    [TestCase(0, "RawValue")]
    [TestCase(4, "Add", 4)]
    public sealed class Ldc_i4_0
    {
        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern int RawValue();

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern int Add(int num);
    }
}
