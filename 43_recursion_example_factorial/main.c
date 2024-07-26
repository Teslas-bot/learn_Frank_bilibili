#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint32_t factorial(uint32_t n);

int main(void)
{
    uint32_t number = 5;
    
    printf("%" PRIu32 "的阶乘是%" PRIu32 "\n", number, factorial(number));
}

uint32_t factorial(uint32_t n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}