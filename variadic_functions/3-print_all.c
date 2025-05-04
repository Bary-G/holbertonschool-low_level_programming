#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on format specifier
 * @format: A string containing format specifiers ('c', 'i', 'f', 's')
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		printf("%s", separator);
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", (str ? str : "(nil)"));
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
