#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    // 数据对象  data object
    // 左值  Lvalue
    // 右值  Rvalue
    // 运算符  operater
    uint8_t apple_box = 5;
    uint8_t banana_box = 10;

    printf("There are %" PRId8 " apples in apple box.\n", apple_box);
    printf("There are %" PRId8 " bananas in apple box.\n", banana_box);

    uint16_t total_fruit = apple_box + banana_box;
    printf("There are %" PRId16 " fruits in fruit box.\n", total_fruit);
}