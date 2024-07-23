#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

// 此处宏定义用于printf数的二进制形式，参考stackoverflow
// 此处宏定义中同样采用Bitwise operators处理二进制数每一位的读取
// 将读取到的二进制结果逐个输出，从而实现printf二进制数
/*********Hacky but works for me:**********/
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0') 
/*********You need all extra quotes, unfortuately**********/
/*********This approach has the efficiency risks of macors**********/
/*********(don't pass a function as the artument to BYTE_TO_BINARY)**********/
/*********but avoids the memory issues and multiple invocations of strcat in some of other proposals here**********/

int main()
{
    /*********按位与、按位或、按位非等Bitwise operators运用实例********/
    /*********Bitwise operators常用在底层嵌入式开发中**************/
    /*********用于操作寄存器中某些位（置零或置一）**************/
    /*********或用于读取寄存器中某些位**************/


    // 变量类型和名称定义不规范， 仅用作测试
    const uint8_t INITIAL_VALUE = 0b00101110;
    uint8_t byte = INITIAL_VALUE;

    // 输出byte的值
    printf("The value of byte: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(byte));

    // 读取byte值的第二位
    // 计算结果为4(0b00000100)
    // 取bool类型从而保证取当前位(bit)的值
    bool second_digit_of_byte = byte & (1 << 2);

    // 输出byte值的第二位
    printf("The second digit of byte: %" PRIu8 "\n", second_digit_of_byte);

    // 读取byte值的第四位
    // 计算结果为16(0b00000100)
    // 取bool类型从而保证取当前位(bit)的值
    bool forth_digit_of_byte = byte & (1 << 4);

    // 输出byte值的第四位
    printf("The forth digit of byte: %" PRIu8 "\n", forth_digit_of_byte);

    // 读取byte值的第五位
    // 计算结果为32(0b00100000)
    // 取bool类型从而保证取当前位(bit)的值
    bool fifth_digit_of_byte = byte & (1 << 5);

    // 输出byte值的第五位
    printf("The fifth digit of byte: %" PRIu8 "\n", fifth_digit_of_byte);

    // 将byte的第三位置零（原本为一）
    byte &= ~(1 << 3);

    // 输出byte的值
    printf("Ater setting the third digit to zero, the value of byte: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(byte));

    // 将byte的第七位置一（原本为零）
    byte |= (1 << 7);

    // 输出byte的值
    printf("After setting the seventh digit to one, the value of byte: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(byte));

    // 将byte的第零位和第一位翻转
    byte ^= (0b00000011);

    // 输出byte的值
    printf("After flipping the first and second digit, the value of byte: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(byte));

    // 检测现在的byte与初始值哪几位不一致
    byte ^= INITIAL_VALUE;

    // 输出检测结果(每位为0的表示与初始值相同，为1的表示与初始值不同)
    printf("The result of checking: "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(byte));
    
    return 0;
}