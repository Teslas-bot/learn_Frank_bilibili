#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // 指针的算数运算

    /*********数组的首地址 **********/
    // int
    int numbers[] = {10 ,20 ,30, 40, 50, 60, 70, 80, 90};

    int* ptr = numbers;     // &numbers[0]
    // 数组在内存中是连续的
    // 0 -> 0000000000009000
    // 所以只需要一个首地址就可以找到整个数组在哪。

    // 计算数组的大小
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // sizeof(numbers) 这个部分会计算整个数组所占用的内存的大小，单位是字节。
    // sizeof(numbers) 这个部分会返回给我一个整个数组的空间所占的大小。

    printf("size = %d\n", size);

    printf("数组原始数据\nnumbers[] = { ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", numbers[i]);
    }
    printf("}\n\n");

    /**********指针的加减法 **********/

    // 使用指针加法移动指针
    // 由于ptr在声明时是一个指向int类型的指针
    // 而int类型是占4个字节的
    // 所以ptr在 +1 之后会向后跳 4 个字节
    // 也就是说
    // 指针的加法、减法移动的地址的单位取决于指针的类型
   
    // 此时指针将从指向数组下标为0的数据 10 变为指向数组下标为1的数据 20
    ptr += 1;
    
    printf("numbers[ptr += 1] : %d\n\n", *ptr);

    // 使用指针剑法回到第一个元素
    ptr -= 1;

    printf("回到第一个元素numbers[ptr -= 1] : %d\n\n", *ptr);

    // 指针之间的减法，计算距离
    int* start_ptr = &numbers[0];
    int* end_ptr = &numbers[size - 1];

    // 输出数组首位地址之家距离的字节数
    printf("数组首尾之间的距离是: %td\n\n", end_ptr - start_ptr);

    // end_ptr - start_ptr 的类型: ptrdiff_t
    // ptrdiff_t 的类型
    // 在32位操作系统中。这个类型一般是占4个字节: int 类型
    // 在64位操作系统中，这个类型一般是占8个字节: long int 类型

    
    /***********  指针之间的比较 *********/
    puts("比较指针指向的元素: ");
    
    if (start_ptr < end_ptr)
    {
        puts("start_ptr 指向的元素在 end_ptr 所指向的元素之前");
    }

    // 使用指针遍历数组
    printf("使用指针遍历数组\n *p 外部指针遍历 {");
    for (int* p = start_ptr; p <= end_ptr; p++)
    {
        printf("%d ", *p);
    }
    printf(" }\n\n");

    // 使用指针加法逐个访问数组中的每个元素的反向顺序
    printf("使用指针减法逐个访问数组中的每个元素的反向顺序\n*p = {");
    for (int* p = end_ptr; p >= start_ptr; p--)
    {
        printf("%d ", *p);
    }
    printf(" }\n\n");

    /********** 指针加减整数访问特定元素 **********/
    puts("指针加简整数访问特定元素: ");
    int offset = 3;
    printf("第四个元素(使用加法): *（start_ptr + offset) = %d\n\n", (start_ptr + offset));

    // 回退到第三个元素
    printf("回退到第三个元素(从第四个元素开始回退) * (start_ptr + offset - 1) = %d\n\n", *(start_ptr + offset - 1));

    /********** 比较两个指针 *********/
    int* middle_ptr = &numbers[size / 2];   // 指向数组中的元素

    printf("比较两个指针指向的位置:\n");

    if (start_ptr < middle_ptr)
    {
        puts("start_ptr 指向的元素在 end_ptr 所指向的元素之前\n");
    }

    if (end_ptr > middle_ptr)
    {
        puts("end_ptr 指向的元素在 middle_ptr 所指向的元素之后");
    }
    return 0;
}
