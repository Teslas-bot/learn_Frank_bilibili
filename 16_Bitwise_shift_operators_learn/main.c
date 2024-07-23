#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    uint8_t num = 22;
    // 00010110
    // num << 2
    printf("Original number: %" PRIu8 " (binary: 00010110)\n", num);

    // 左移
    // 左移两位相当于 * 2^2
    uint8_t left_shifted = num << 2;
    printf("Left shifted by 2: %" PRIu8 " (binary: 01011000)\n", left_shifted);

    // 右移
    // 右移两位相当于 / 2^2
    uint8_t right_shifted = num >> 2;
    printf("Right shifted by 2: %" PRIu8 " (binary: 00000101)\n", right_shifted);
}