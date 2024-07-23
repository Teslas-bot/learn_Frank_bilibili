#include <stdio.h>
#include <float.h>

int main()
{
    float float_num = 1.0f / 3.0f;
    double double_num = 1.0 / 3.0;

    printf("Float precision: %.20f\n", float_num);
    printf("Double precision: %.20lf\n", double_num);

    printf("Defined max precision of float: %d\n", FLT_DIG);
    printf("Defined max precision of double: %d\n", DBL_DIG);
}