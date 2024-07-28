#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    uint32_t building_floors[5] = {101, 102, 103, 104, 105};

    // 快递员需要寻找的目标住户
    uint32_t target_floor = 103;

    // ptr_floor_103 -> (指向) &building_floors[2]
    uint32_t *ptr_floor_103 = &building_floors[2];
    printf("ptr_floor_103指针变量保存的是: %p\n", ptr_floor_103);
    printf("ptr_floor_103指针变量指向的值是: %" PRIu32 "\n", *ptr_floor_103);
    printf("快递员通过*(指针相当于一个地图工具), 他带着ptr_floor_103这个指针变量去寻找....\n");
    printf("于是他找到了业主的门牌号%" PRIu32 "\n", *ptr_floor_103);

    // 快递员找到你了。。。你要求快递员: 我们这边门牌号发生变化了，我现在的门牌号是106
    int* ptr_new_106 = ptr_floor_103;

    *ptr_new_106 = 106;

    // 门牌号发生改变
    printf("building_floors[2] = %" PRIu32 "\n", building_floors[2]);

    // 尝试使用错误类型的指针去指向uint32_t的数据
    char *ptr_floor_103_char = &building_floors[2];
    
    // 尝试读取错误指针类型中存放的地址
    printf("ptr_floor_103_char指针变量保存的是: %p\n", ptr_floor_103);
    
    // 尝试用错误的输出类型输出错误指针中存储地址中存放的值。
    printf("ptr_floor_103_char指针变量指向的值是: %c\n", *ptr_floor_103);

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
