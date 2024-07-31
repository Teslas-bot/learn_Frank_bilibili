#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t department1[] = {1001, 1002, 1003};
    uint32_t department2[] = {2001, 2002, 2003, 2004};
    uint32_t department3[] = {3001, 3002, 3003, 3004, 3005};

    uint32_t* department_ptrs[3] = {department1, department2, department3};

    size_t department_sizes[3] = {
        sizeof(department1) / sizeof(uint32_t),
        sizeof(department2) / sizeof(uint32_t),
        sizeof(department3) / sizeof(uint32_t)
    };

    for (size_t i = 0; i < 3; ++i)
    {
        printf("Department %zu: ", i + 1);
        for (size_t j = 0; j < department_sizes[i]; ++j)
        {
            printf("%" PRIu32 " ", department_ptrs[i][j]);
        }
        printf("\n");
    }
    
}