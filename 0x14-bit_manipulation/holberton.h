#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
unsigned long _pow(unsigned long a);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int dectobin(unsigned long int *n, int *b);
void bintodec(int *b, unsigned long int *n, int pos);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);

#endif
