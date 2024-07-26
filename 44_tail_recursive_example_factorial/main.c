#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint32_t factorial(uint32_t n, uint32_t acc);
int main(void)
{
    uint32_t number = 5;
    
    printf("%" PRIu32 "的阶乘是%" PRIu32 "\n", number, factorial(number, 1));
}

uint32_t factorial(uint32_t n, uint32_t acc)
{
    if (n == 1)
    {
        return n * acc;
    }
    else
    {
        return factorial(n - 1, n * acc);
    }
}