#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1
 * on error, -1 is returned, and errno is et appropriately
 */

int _putchar(char c, *s)

{
        return (write(1, &c, 1));

}
