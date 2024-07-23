#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    uint8_t base_num = 8;
    uint8_t add_num = 2;
    uint8_t sub_num = 3;
    uint8_t mul_num = 4;
    uint8_t div_num = 2;
    uint8_t mod_num = 5;
    uint8_t left_shift_num = 1;
    uint8_t right_shift_num = 2;
    uint8_t and_num = 0b1010;
    uint8_t or_num = 0b0101;
    uint8_t xor_num = 0b1111;

    // In-place Modification 原地修改

    // 原地修改，意味着变量的值将在其原始的储存位置被更新。而不是再另一个位置简单创建一个新的值做出计算然后再将新的值赋值给原先的值。

    // 复合赋值运算符
    base_num += add_num;

    base_num -= sub_num;
    
    base_num *= mul_num;

    base_num /= div_num;

    base_num %= mod_num;

    base_num <<= left_shift_num;

    base_num >>= right_shift_num;

    base_num &= and_num;

    base_num |= or_num;

    base_num ^= xor_num;
}