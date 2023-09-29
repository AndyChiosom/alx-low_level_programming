#include "main.h"
/**
* clear_bit - this will sets a bit to 0 at a given index
* @num: direct to the number to be changed
* @index: point to 0 as the index to clear
*
* Return: always will return 1 for success, otherwise -1
*/
int clear_bit(unsigned long int *num, unsigned int index)
{
if (index > 63)
return (-1);
*num = (~(1UL << index) & *num);
return (1);
}
