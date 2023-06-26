<<<<<<< HEAD
#include <unistd.h>
=======
#include "main.h"
>>>>>>> ebb82ab2a69eb7a7d16c6043d9fd4290834608cd

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
