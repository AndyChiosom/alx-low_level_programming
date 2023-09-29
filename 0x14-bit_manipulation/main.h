#ifndef MAIN_H
#define MAIN_H

unsigned int flip_bits(unsigned long int num1, unsigned long int num2);
void print_binary(unsigned long int num1);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *num, unsigned int index);
int _atoi(const char *s);
int _putchar(char c);
int clear_bit(unsigned long int *num, unsigned int index);
int get_endianness(void);
unsigned int binary_to_uint(const char *c);

#endif /* MAIN_H */
