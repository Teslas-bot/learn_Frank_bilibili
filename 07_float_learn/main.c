#include <stdio.h>
#include <float.h>

int main()
{
    // the temperature of human
    float temperature = 36.5F;

    // the humidity today
    float humidity = 32.2f;

    // the speed of sound
    float speed_of_sound = 3.435e4f;

    // the length, width, height of a cuboid
    float length = 12.21f, width = 22.56f, height = 33.25f;

    // the maximum of float
    float max_of_float = FLT_MAX;

    // OverFlow
    float overflow = max_of_float * 1000.0f;

    // the minimum of float
    float min_of_float = FLT_MIN;

    // UnderFlow
    float underflow = min_of_float / 1000.0f;

    // output
    printf("Temperature of human: %f.\n", temperature);
    printf("Humidty today: %f.\n", humidity);
    printf("The speed of sound: %f.\n", speed_of_sound);
    printf("Dimensions(LxWxHx): %f, %f, %f.\n", length, width, height);

    // different output forms using function printf()
    // use %f
    printf("Using %%f: %f\n", temperature);
    // use %e of %E 科学计数法
    printf("Using %%e: %e\n", temperature); 
    printf("Using %%E: %E\n", temperature);
    // use %a of %A 十六进制 p计数法
    printf("Using %%a: %a\n", temperature);
    printf("Using %%A: %A\n", temperature);

    // the example of overflow and underflow
    printf("Maximum float: %e\n", max_of_float);
    printf("Overflow: %e\n", overflow);
    printf("Minimum float: %e\n", min_of_float);
    printf("Underflow: %e\n", underflow);
}