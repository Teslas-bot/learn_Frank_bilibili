#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    // 跑步的总圈数
    const uint32_t TOTAL_LAPS = 10;

    // 当前跑的圈数
    // 初始值为0
    uint32_t current_laps = 0;

    // while循环模拟跑步
    // 先检查圈数是否足够，不够再跑
    while (current_laps < TOTAL_LAPS)
    {
        current_laps++;
        printf("当前圈数: %" PRIu32 "\n", current_laps);
    }

    // 为do-while循环模拟，将圈数清零
    current_laps = 0;

    // do-while循环模拟跑步
    // 先跑一圈再说
    do
    {
        current_laps++;
        printf("当前圈数: %" PRIu32 "\n", current_laps);
    } while (false);
    // 发现即使条件是false也会先跑一圈

    return 0;
}