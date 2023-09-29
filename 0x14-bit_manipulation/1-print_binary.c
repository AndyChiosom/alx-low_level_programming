#include "main.h"
/**
* print_binary - this should prints the binary equal to decimal
* @num1: is to print num in binary
*/
void print_binary(unsigned long int num1)
{
int k, count = 0;
unsigned long int current;
for (k = 63; k >= 0; k--)
{
current = num1 >> k;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
