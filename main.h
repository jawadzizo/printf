#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include "functions1.c"
#include "functions2.c"
#include "functions3.c"
#include "printf.c"

#define BUFFER_SIZE 1024


int _putchar(char c);
int _printf(const char * const format, ...);
int to_binary(unsigned int x);
int rev_str(char *str);
int to_octal(unsigned int x);
int rot13(char *str);
int print_string(char *str);
int int_to_string(int x);
int to_HEXA(unsigned int x);
int to_hexa(unsigned int x);
int u_to_string(unsigned int x);
int print_null();


#endif
