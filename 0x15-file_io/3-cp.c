#include "main.h"
/**
* errorprint - printint out errors
* @opento: print error from the destinatoion file
* @openfrom: print error from the source file
* @argv: arguments received
*/
void errorprint(int opento, int openfrom, char *argv[])
{
	if (opento == -1)
	{
		dprintf(STDOUT_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	if (openfrom == -1)
	{
		dprintf(STDOUT_FILENO, "Error: cant't read from file %s\n", argv[1]);
		exit(98);
	}
}
/**
* main - copy files
* @argc: argument count
* @argv: argument received
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int opento, openfrom, closefile;
	ssize_t red, ite;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	openfrom = open(argv[1], O_RDONLY);
	opento = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	errorprint(opento, openfrom, argv);
	red = 1024;
	while (red == 1024)
	{
		red = read(openfrom, buff, red);
		if (red == -1)
			errorprint(0, -1, argv);
		ite = write(opento, buff, red);
		if (ite == -1)
			errorprint(-1, 0, argv);
	}
	closefile = close(openfrom);
	if (closefile == -1)
	{
		dprintf(STDOUT_FILENO, "Error: can't close fd %d\n", openfrom);
		exit(100);
	}
	closefile = close(opento);
	if (closefile == -1)
	{
		dprintf(STDOUT_FILENO, "Error: can't close fd %d\n", opento);
		exit(100);
	}
	return (0);
}
