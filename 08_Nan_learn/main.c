#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    // 正无穷大
    float positive_infinity = INFINITY;
    printf("Positive infinity: %f\n", positive_infinity);

    // 负无穷大
    float negative_infinity = -INFINITY;
    printf("Negative infinity: %f\n", negative_infinity);

    // 除以零产生的无穷大
    float num_1 = 1.0f;
    float infinity = num_1 / 0.0f;
    printf("1.0 / 0.0: %f\n", infinity);

    //Nan   Not a number    0.0 / 0.0
    // In other word    IND Implementation not define
    float num_0 = 0.0f;
    float nan = num_0 / 0.0f;
    printf("0.0 / 0.0: %f\n", nan);

    float negative_sqrt = sqrt(-1.0f);
    printf("sqrt(-1.0f): %f\n", negative_sqrt);
}