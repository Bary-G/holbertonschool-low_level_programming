#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * _strlen - my function
 * @s: my value
 *
 * Return: my function
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * append_text_to_file - appends a file
 *
 * @filename: filename
 * @text_content: the file content
 *
 * Return: 1 if sucess, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (file_descriptor == -1)
	{
		return (-1);
	}
	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
