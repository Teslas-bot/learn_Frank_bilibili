#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    uint8_t myuint8 = 0;
    size_t uint8_size = sizeof(uint8_t);

    printf("myuint8 = %" PRIu8 ", myuint8 has %zd bytes, all myuint8 has %zd bytes.\n", myuint8, uint8_size, uint8_size);
}