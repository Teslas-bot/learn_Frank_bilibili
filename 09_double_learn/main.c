#include <stdio.h>

int main()
{
    // double 速度慢，精度高
    // float 速度快，精度低
    // 企业中需要根据不同场合来选择使用float还是double


    /************For example***********/
    /************3D  渲染**************/
    // 3D渲染速度比精度更重要，常用float

    // 科学计算，精度比速度更重要，double是不二之选，甚至可能会使用long double
    double num1 = 123.456;
    double num2 = 76.543;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = num1 / num2;

    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", difference);
    printf("Product: %f\n", product);
    printf("Quotient: %f\n", quotient);
}