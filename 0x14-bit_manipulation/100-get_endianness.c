#include "main.h"

/**
 * get_endianness - check the endianess
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *s = (char *) &m;

	return (*s);
}
