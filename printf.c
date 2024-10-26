#include <stdio.h>
#include <stdarg.h>
#include "MAIN.H"

/**
 * _printf - A function that produces output according to a format.
 * @format: a character string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	for (const char *p = format; *p != '\0'; p++)

	{
		if (*p == '%')
		{
			switch (*p)
			{
			case 'c':
				{
						 char c = (char) va_arg(args, int);
						putchar(c);
							  count++;
					break;
				}
				case 's' = va_arg(args, char*);
					while (*s)
					{
						putchar(*s);
						s++;
						count++;
					}
					break;
			}
			case '%':
			putchar('%');
			putchar(*p);
			count += 2;
			break;
		}
	}
	else
	{
		putchar(*p);
		count++;
	}
}

va_end(args);
return (count);
}
