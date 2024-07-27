#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// 递归求解斐波那契数列的第n项
uint32_t fibonacci_recusion(uint32_t n);

// 尾递归求解斐波那契数列的第n项
uint32_t fibonacci_tail_recusive(uint32_t n, uint32_t fib_n_minus_2, uint32_t fib_n_minus_1);

// 迭代求解斐波那契数列的第n项
uint32_t fibonacci_loop(uint32_t n);

int main(void)
{
    uint32_t n = 45;

    printf("尾递归实现的斐波那契数列第%" PRIu32 "的值为 %" PRIu32 "\n", n, fibonacci_tail_recusive(n, 1, 1));

    printf("递归实现的斐波那契数列第%" PRIu32 "的值为 %" PRIu32 "\n", n, fibonacci_recusion(n));

    printf("循环迭代实现的斐波那契数列第%" PRIu32 "的值为 %" PRIu32 "\n", n, fibonacci_loop(n));
}

uint32_t fibonacci_recusion(uint32_t n)
{
    switch (n)
    {
    case 0:
        return 0;
        break;

    case 1:
        return 1;
        break;

    default:
        return fibonacci_recusion(n - 1) + fibonacci_recusion(n - 2);
    }
}

uint32_t fibonacci_tail_recusive(uint32_t n, uint32_t fib_n_minus_2, uint32_t fib_n_minus_1)
{
    switch (n)
    {
        case 1: 
            return 1;
            break;
        case 2:
            return 2;
            break;
        case 3:
            return fib_n_minus_2 + fib_n_minus_1;
            break;
        default:
            return fibonacci_tail_recusive(n - 1, fib_n_minus_1, fib_n_minus_2 + fib_n_minus_1);
            break;
    }
}

uint32_t fibonacci_loop(uint32_t n)
{
    uint32_t first = 1;
    uint32_t second = 1;
    uint32_t third;

    for (uint32_t i = 2; i < n; i++)
    {
        third = first + second;
        first = second;
        second = third;
    }

    return third;
}
