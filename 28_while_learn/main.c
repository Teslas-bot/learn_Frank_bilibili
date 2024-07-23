#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    // 定义结束的目标
    const uint8_t TOTAL_LAPS = 10;

    // 定义初始条件
    uint8_t current_lap = 0;

    puts("Start running.");

    while (current_lap < TOTAL_LAPS)
    {
        current_lap++;

        // 报告跑完的圈数
        printf("The man has finished %" PRIu8 " laps.\n", current_lap);
    }
}