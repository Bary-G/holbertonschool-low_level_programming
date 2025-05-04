#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - create a file
 *
 * @filename: filename
 * @text_content: file content to write
 *
 * Return: 0 if sucess, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len = 0;

	asm volatile (
		"mov $2, %%eax\n\t"
		"mov %1, %%rdi\n\t"
		"mov $0101, %%esi\n\t"
		"mov $0600, %%edx\n\t"
		"syscall"
		: "=a" (fd)
		: "r" (filename)
		: "rdi", "rsi", "rdx"
	);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len]) len++;
		{
			asm volatile (
				"mov $1, %%eax\n\t"
				"mov %1, %%edi\n\t"
				"mov %2, %%rsi\n\t"
				"mov %3, %%rdx\n\t"
				"syscall"
				: "=a" (bytes_written)
				: "r" (fd), "r" (text_content), "r" (len)
				: "rdi", "rsi", "rdx"
			);
		}
		if (bytes_written < 0)
		{
			return (-1);
		}
	}
	asm volatile (
		"mov $3, %%eax\n\t"
		"mov %0, %%edi\n\t"
		"syscall"
		:
		: "r" (fd)
		: "edi"
	);
	return (0);
}
