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

int print_c(

#endif
