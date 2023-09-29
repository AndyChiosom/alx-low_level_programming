#include "main.h"
/**
* get_bit - created to return values of bit at an index of a whole num
* @n: is to find the num
* @index: for bit index
*
* Return: should return the bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_num;
if (index > 63)
return (-1);
bit_num = (n >> index) & 1;
return (bit_num);
}
