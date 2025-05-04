#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: filename
 * @letters: number of letters
 *
 * Return: the number of letters, 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead > 0)
	{
		write(STDOUT_FILENO, buffer, bytesRead);
	}

	free(buffer);
	close(fd);

	return (bytesRead);
}
