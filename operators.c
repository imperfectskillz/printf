#include "holberton.h"

/**
 *print_c - prints characters
 *@valist: arguments
 *Return: 1 since char
 */

int print_c(va_list valist)
{
	_write(va_arg(valist, int));
	return (1);
}

/**
 *print_s - prints string
 *@valist: args
 *Return: number of chars printed
 */

int print_s(va_list valist)
{
	int i;
	char *str;

	str = va_arg(valist, char *);

	if (str == NULL)
	{	//not sure what this should return
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_write(str[i]);
	}
	return (i);
}

/**
 *print_per - prints percent sign
 *@valist: unused
 *Return: returns 1
 */

int print_per(__attribute__((unused))va_list valist)
{
	_write('%');
	return (1);
}

/**
 *print_i - prints d and i
 *@valist: list
 *Return: length
 */

int print_i(va_list valist)
{
