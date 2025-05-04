#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - print error
 *
 * @message: error message
 * @file_name: the file name
 * @exit_code: exit error code
 *
 */
void print_error_and_exit(const char *message, const char *file_name, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	_exit(exit_code);
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: my argc
 * @argv: my argv
 *
 * Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	int source, dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	source = open(argv[1], O_RDONLY);
	if (source < 0)
	{
		print_error_and_exit("Error: Can't read from file", argv[1], 98);
	}


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		_exit(97);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest < 0)
	{
		close(source);
		print_error_and_exit("Error: Can't write to", argv[2], 99);
	}

	while ((bytesRead = read(source, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(dest, buffer, bytesRead);
		if (bytesWritten != bytesRead)
		{
			close(source);
			close(dest);
			print_error_and_exit("Error: Can't write to", argv[2], 99);
		}
	}
	if (bytesRead < 0)
	{
		close(source);
		close(dest);
		print_error_and_exit("Error: Can't read from file", argv[1], 98);
	}
	if (close(source) < 0)
	{
		print_error_and_exit("Error: Can't close fd", argv[1], 100);
	}
	if (close(dest) < 0)
	{
		print_error_and_exit("Error: Can't close fd", argv[2], 100);
	}

	return (0);
}
