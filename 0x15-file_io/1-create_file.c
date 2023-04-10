#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a function that creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A NULL pointer terminated string to write to the file
 *
 * Return: If the function fails returns -1
 * otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int lt = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lt = 0; text_content[lt];)
			lt++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lt);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
