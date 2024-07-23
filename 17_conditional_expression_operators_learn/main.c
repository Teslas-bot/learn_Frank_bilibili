#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main()
{
    // 定义一个表示成绩分数的变量
    uint8_t score = 90;

    printf("Pass: %s\n", score > 60 ? "Yse" : "No");
}