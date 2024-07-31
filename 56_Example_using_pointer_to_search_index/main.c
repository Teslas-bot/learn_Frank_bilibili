#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

// 将目标代码写成函数
// 查找特定元素的索引，返回是否找到，以及元素的索引
bool find_index_of_value(const uint32_t* array, size_t size, uint32_t target_value, size_t* target_index);

int main(void)
{
    uint32_t values[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    uint32_t target_value = 40; 

    uint32_t* start_ptr = values;

    size_t values_size = sizeof(values) / sizeof(values[0]);

    size_t target_index = 0;

    bool is_found = find_index_of_value(values, values_size, target_value, &target_index);

    // bool is_found = false;

    // for (size_t i = 0; i < values_size; ++i)
    // {
    //     if (*(start_ptr + i) == target_value)
    //     {
    //         // 找到目标的下标
    //         target_index = i;
    //         is_found = true;
    //         break;
    //     }
    // }

    if (is_found)
    {
        printf("找到了%" PRIu32 " 的索引值为: %zu", target_value, target_index);
    }
    else
    {
        printf("没有找到%" PRIu32 "的索引值", target_value);
    }
}

bool find_index_of_value(const uint32_t* array, size_t size, uint32_t target_value, size_t* target_index)
{
    for (size_t i = 0; i < size; ++i)
    {
        if (*(array + i) == target_value)
        {
            *target_index = i;
            return true;
        }
    }

    return false;
}