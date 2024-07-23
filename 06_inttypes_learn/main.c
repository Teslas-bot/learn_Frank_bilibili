#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    int8_t myInt8 = INT8_MAX;
    int16_t myInt16 = INT16_MAX;
    int32_t myInt32 = INT32_MAX;
    int64_t myInt64 = INT64_MAX;
    uint8_t myUInt8 = UINT8_MAX;
    uint16_t myUInt16 = UINT16_MAX;
    uint32_t myUInt32 = UINT32_MAX;
    uint64_t myUInt64 = UINT64_MAX;

    // The output of fixed-width integer in the use of functiong printf()
    printf("The maximum of int8 is %" PRId8 ".\n", myInt8);
    printf("The maximum of int16 is %" PRId16 ".\n", myInt16);
    printf("The maximum of int32 is %" PRId32 ".\n", myInt32);
    printf("The maximum of int64 is %" PRId64 ".\n", myInt64);
    printf("The maximum of uint8 is %" PRIu8 ".\n", myUInt8);
    printf("The maximum of uint16 is %" PRIu16 ".\n", myUInt16);
    printf("The maximum of uint32 is %" PRIu32 ".\n", myUInt32);
    printf("The maximum of uint64 is %" PRIu64 ".\n", myUInt64);

    /******The difference of int_leastX_t, int_fastX_t and intX_t******/
    // int_leastX_t number;
    // 至少有X位，可能更多，适用于需要保证最小储存容量的可移植代码。
    // int_fastX_t 特效 8bit 16bit
    // 至少有X位，但是选择运行速度最快的类型(bit)，适用于需要性能敏感的场景。
    // 标准整数类型 -> 固定宽度整数类型
    // 固定的位数，不可以越界，适用于需要精确数据大小的场景。

    /******The example of the use of int_leastX_t, int_fastX_t and intX_t******/

    // 玩家分数初始分
    int_least32_t playerScore = 5000;

    // 初始化像素值
    int_fast32_t pixelValue = 128;
    
    // output of playeerScore
    printf("The score of this player is %" PRIdLEAST32 ".\n", playerScore);

    // output of pixel value
    printf("The value of pixel is %" PRIdFAST32 ".\n", pixelValue);

    myInt8 = myInt8 + 1;
    printf("The overflow value is %" PRId8 ".\n", myInt8);
}