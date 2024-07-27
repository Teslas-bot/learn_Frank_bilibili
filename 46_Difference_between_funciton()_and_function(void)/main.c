#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// void greet();

void greet(void);

int main(void)
{
    uint32_t n = 45;

    greet(n);
}

// void greet()
// {
//     puts("Hello world!");
// }

void greet(void)
{
    puts("Hello world!");
}
