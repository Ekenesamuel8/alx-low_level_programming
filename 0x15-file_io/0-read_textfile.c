#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of our file
* @letters: number count of letters
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my;
	ssize_t dear, ite;
	char *buff;

	if (filename == NULL)
		return (0);
	my = open(filename, O_RDONLY);

	if (my == -1)
		return (1);
	/*allocate memory to the buffer*/
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	dear = read(my, buff, letters);
	ite = write(STDOUT_FILENO, buff, dear);

	close(my);
	free(buff);
	return (ite);
}
