#include "main.h"
/**
 * print_binary - prints a long int into binary
 * @n: the long int
*/
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
    while (mask)
    {
        printf("%c", (n & mask) ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}