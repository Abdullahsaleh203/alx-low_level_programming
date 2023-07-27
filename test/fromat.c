#include "main.h"

/**
 * format_print - Prints an argument based on its type.
 * @fmt: Formatted string containing the format specifier.
 * @ind: Pointer to the current index in the format string.
 * @list: List of arguments to be printed.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Width specifier.
 * @precision: Precision specifier.
 * @size: Size specifier.
 *
 * Return: Number of characters printed.
 */
int format_print(const char *fmt, int *ind, va_list list, char buffer[],
int flags, int width, int precision, int size)
{
	int i, printed = 0, printed_chars = 0;
	format_print_t format_types[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (i = 0; format_types[i].c != '\0'; i++)
	{
		if (format_types[i].c == fmt[*ind])
		{
			printed = format_types[i].fn(list, buffer, flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
			break;
		}
	}

	if (format_types[i].c == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-2);

		_putchar(fmt[*ind]);
		printed_chars++;
	}

	return (printed_chars);
}
