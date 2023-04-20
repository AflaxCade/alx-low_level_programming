#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          any other char should be ignored.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			{
				char c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			}
			case 'i':
			{
				int num = va_arg(args, int);
				printf("%s%d", sep, num);
				break;
			}
			case 'f':
			{
				double fnum = va_arg(args, double);
				printf("%s%f", sep, fnum);
				break;
			}
			case 's':
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep);
					break;
				}
				printf("%s%s", sep, str);
				break;
			}
		}
		sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
