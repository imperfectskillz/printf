#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <uninstd.h>

int _write(char c);

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int print_c(va_list, valist);
int print_s(va_list, valist);
int print_per(__attribute__((unused))va_list valist);
int print_i(va_list, valist);


#endif
