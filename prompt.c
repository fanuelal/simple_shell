#include "holberton.h"

/**
<<<<<<< HEAD
 * prompt - checks mode and prints prompt if in interactive mode
 * @fd: file stream
 * @buf: buffer
**/
=======
 * prompt - checks mode and prints prompt in interactive mode
 * @fd: file stream
 * @buf: buffer
**/

>>>>>>> a3d9a1b541ac580ffbf25545dd717113e67bc17d
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(PROMPT);
}

/**
 * _puts - prints a string without a \n
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
<<<<<<< HEAD
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
=======
unsigned int length;

length = _strlen(str);

write(STDOUT_FILENO, str, length);
>>>>>>> a3d9a1b541ac580ffbf25545dd717113e67bc17d
}
