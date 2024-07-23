#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    /*
        用户输入一个数
        
        判断是否是素数并返回结果
    */

    // 用户输入的数
    uint32_t num;
    
    // 是否为素数的bool值，默认为true
    bool is_prime = true;

    // 用户输入提示
    puts("请输入一个大于等于二的正整数，我们将判断它是否为素数，并返回结果");

    // 用户输入，结果存入num
    scanf("%" SCNu32, &num);

    // 输入检查 TODO


    if (num <= 1)
    {
        // 因为没有做输入检查
        // 用户输入小于1的数，默认不是素数
        is_prime = false;
        
        // 提示用户输入的数不合规
        puts("This number is not a legal number.");
        return 0;
    }

    // 素数判断
    // 将一个数分成两个数的乘积
    // 其中一个一定 >= 原数的平方根，另一个一定 <= 原数的平方根
    // 所以只需要循环到sqrt(num)即可
    // 即 index <= sqrt(num)
    // sqrt(num) 是一个double类型的数据
    // 在C语言中，开平方是一个比较费时的操作
    // 为了提高效率，可将开平方操作改写成乘方操作
    // 即 index * index <= num
    // 在循环中，不要使用sqrt()操作
    for(uint32_t index = 2; index * index <= num; index++)
    {
        if (num % index == 0)
        {
            is_prime = false;
            break;
        }
    }
    
    // 输出判断结果
    if (is_prime)
    {
        puts("This number is a prime number.");
    }
    else
    {
        puts("This number is not a prime number.");
    }
}