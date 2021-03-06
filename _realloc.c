#include "header.h"

/**
 * _realloc - a function to double the size of the buffer
 * if the original buffer runs out of room.
 * @buffer: a buffer allocated in shelly to be filled with
 * @count: a count of how many bytes have been read thus
 * far so we know the current buffsize.
 * outin put from stdin
 * Return: a pointer with a filed buffer.
 */

char *_realloc(char *buffer, size_t count)
{
	size_t size = count, i = 0;
	char *newbuff = malloc((2 * size) * sizeof(char));

	if (newbuff == NULL)
	{
		free(buffer);
		malloc_error2();
	}
	for (i = 0; i < size; i++)
		newbuff[i] = buffer[i];
	free(buffer);
	buffer = newbuff;

	return (buffer);
}
