#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void print_binary(uint8_t num);

int main()
{
    // 初始状态
    // 第0位代表电源是否连接
    // 第1位代表wifi是否出错
    // 第2位代表电池是否低电量
    // 第3位代表系统是否有错误
    uint8_t status = 0b00001100;

    printf("Initial status: 0b");
    print_binary(status);
    printf("\t(Binary)\n");

    // 更换电池后，电池灯熄灭
    // 采用置零的方式
    // 这里的0b11111011是计算出来的掩码
    status &= 0b11111011;

    printf("After closing low power light: 0b");
    print_binary(status);
    printf("\t(Binary)\n");

    // 解决所有问题后，所有错误灯熄灭，电源指示灯亮起
    // 采用翻转的方式
    // 这里的0b00001001是计算出的掩码
    status ^= 0b00001001;

    printf("After sovling all problems: 0b");
    print_binary(status);
    printf("\t(Binary)\n");

    return 0;
}

void print_binary(uint8_t num)
{
    for (int index = 7; index >= 0; index--)
    {
        printf("%d", (num >> index) & 1);
    }
}