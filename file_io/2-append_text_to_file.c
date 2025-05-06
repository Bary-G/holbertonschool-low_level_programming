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
	int file;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

	if (file < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		ssize_t bytes_written = write(file, text_content, sizeof(char) * _strlen(text_content));

		if (bytes_written < 0)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
