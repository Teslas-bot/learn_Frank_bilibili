#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void check_car_rent(uint8_t age, uint8_t driving_exp_years);

int main(void)
{
    // 租车案例
    // age >= 21, 驾驶经验一年或一年以上

    uint8_t age = 23;
    uint8_t driving_exp_years = 2;

    check_car_rent(age, driving_exp_years);

    return 0;
}

void check_car_rent(uint8_t age, uint8_t driving_exp_years)
{
    // 卫语句
    if (age < 21)
    {
        puts("You are too young.");

        return;
    }

    if (driving_exp_years < 1)
    {
        puts("You don't have enough experience.");

        return;
    }

    puts("Satisfy all contions.You can rent the car.");
}