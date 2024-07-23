#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main()
{
    // ? :
    uint8_t score = 85;

    char grade;

    grade = (score >= 90) ? 'A' :
            (score>= 80) ? 'B' :
            (score >= 70) ? 'C' : 'D';

    printf("Score: %" PRIu8 ", Grade: %c\n", score, grade);

    // the same as:
    // if (score >= 90)
    // {
    //     grade = 'A';
    // }
    // else
    // {
    //     if (score >= 80)
    //     {
    //         grade = 'B';
    //     }
    //     else
    //     {
    //         if (score >= 70)
    //         {
    //             grade = 'C';
    //         }
    //         else
    //         {
    //             grade = 'D';
    //         }
    //     }
    // }
}