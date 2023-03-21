#include "main_h"
#include <unistd.h>
/**
 * _putchar - writes the caracter c to stdout
 * @c: the caracter to print 
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropiately.
 */
int _putchar(char c)
	(
	 return (write(1, &c, 1));
	)

