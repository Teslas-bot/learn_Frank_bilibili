#include <stdio.h>
#include <stdint.h>

int main()
{
    int16_t myInt16 = 32767;
    uint16_t myUInt16 = 65535;

    int32_t myInt32 = 2147483647;
    uint32_t myUInt32 = 4294967295U;

    int64_t myInt64 = 9223372036854775807LL;
    uint64_t myUInt64 = 18446744073709551615ULL;

    printf("Size of int16_t is %zu byte(s).\n", sizeof(myInt16));
    printf("Size of uint16_t is %zu byte(s).\n", sizeof(myUInt16));
    printf("Size of int32_t is %zu byte(s).\n", sizeof(myInt32));
    printf("Size of uint32_t is %zu byte(s).\n", sizeof(myUInt32));
    printf("Size of int64_t is %zu byte(s).\n", sizeof(myInt64));
    printf("Size of uint64_t is %zu byte(s).\n", sizeof(myUInt64));

    printf("myInt16 is %hd.\n", myInt16);
    printf("myUInt16 is %hu.\n", myUInt16);
    printf("myInt32 is %d.\n", myInt32);
    printf("myUInt32 is %u.\n", myUInt32);
    printf("myInt32 is %ld.\n", myInt32);
    printf("myUInt32 is %lu.\n", myUInt32);
    printf("myInt64 is %lld.\n", myInt64);
    printf("myUInt64 is %llu.\n", myUInt64);
}