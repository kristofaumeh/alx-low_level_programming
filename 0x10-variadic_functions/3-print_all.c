#include "variadic_functions.h"
/**
* print_all - prints all args passed
* @format: arguement specifier
* Return: any arguement given
*/
void print_all(const char * const format, ...)
{
	int i, check_stat; /* declare variables and va_arg datatype */
	char *str;
	va_list spc;

	va_start(spc, format); /* initialize var arguments */

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0; /* check if condition has been met*/
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
			check_stat = 1;
			break;
		}
		if (format[i + 1] != '\0' && check_stat == 0) /* if NOT NULL */
			printf(", ");
		i++; /* upate step of iter */
	}
	printf("\n");
	va_end(spc); /* end traversal */
}
