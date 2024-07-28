#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "helper.h"

uint32_t g_static_var = 10;

void access_g (void);

int main(void)
{
    printf("Main before: %" PRId32 "\n", g_static_var);
    access_g();
    try_access_g();
}

void access_g (void)
{
    g_static_var += 5;
    printf("Inside access_g: %" PRId32 "\n", g_static_var);
}