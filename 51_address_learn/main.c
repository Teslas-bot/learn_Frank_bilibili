#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    uint32_t building_floors[5] = {101, 102, 103, 104, 105};

    // 快递员需要寻找的目标住户
    int target_floor = 103;

    bool is_found = false;

    printf("快递员开始在大楼中寻找 %" PRIu32 "...\n", target_floor);

    for (uint32_t i = 0; i < 5; i++)
    {
        printf("用户%" PRIu32 "的地址: %p\n", building_floors[i], &building_floors[i]);

        if (building_floors[i] == target_floor)
        {
            printf("快递员找到了住户%" PRIu32 "的地址: %p", target_floor, (void*)&building_floors[i]);

            is_found = true;
            break;
        }
    }

    if (! is_found)
    {
        puts("快递员没有找到该住户");
    }

    return 0;
}
