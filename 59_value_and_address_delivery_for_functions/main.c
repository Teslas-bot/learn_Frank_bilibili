#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

void add_ten_by_value(int32_t* value);

int main(void)
{
    int32_t my_value = 5;
    printf("原本的值: %" PRId32 "\n", my_value);

    // 指针作为函数参数的使用
    add_ten_by_value(&my_value);

    printf("已经调用add_ten_by_value之后的值: %" PRId32 "\n", my_value);
}

void add_ten_by_value(int32_t* value)
{
    *value += 10;
}