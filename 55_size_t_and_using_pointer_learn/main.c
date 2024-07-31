#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    // 指针与数组的关系

    // 数组名作为指针的使用

    uint32_t numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    // &numbers[0]
    // 直接把数组的名字给指针，相当于把数组的首地址(index = 0)给它
    uint32_t* ptr = numbers;

    // size_t 是一个无符号的整数类型, 它是专门用来表示大小、长度、索引。
    // 提高程序在不同平台。。。。跨平台的可移植性和安全性。
    // 在32位系统中它是32位宽
    // 在64位系统中它是64位宽
    size_t numbers_size = sizeof(numbers) / sizeof(numbers[0]);

    puts("输出原始数组");

    for (size_t i = 0; i < numbers_size; ++i)
    {
        printf("%" PRIu32 " ", numbers[i]);
    }
    printf("\n");

    // 通过指针增加数组每个元素的值
    // 迭代器
    for (size_t i = 0; i < numbers_size; ++i)
    {
        // 直接通过指针修改数组中的值
        *(ptr + i) += 5;
    }

    printf("修改后的数组: \n");
    for (size_t i = 0; i < numbers_size; ++i)
    {
        printf("%" PRIu32 " ", *(ptr + i));
    }
    printf("\n");

    return 0;
}