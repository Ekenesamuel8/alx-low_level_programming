#include "main.h"

void errorprint(int num, char *string, char *arg)
{
	dprintf(STDOUT_FILENO, string, arg);
	exit(num);
}

int main(int argc, char argv[])
{
	if (argc != 3)
		errorprint(97, "Usage: cp file_from file_to\n", argv);
	char *cp_from;
	char *cp_to;
	int opento, openfrom, run;
	ssize_t red, ite;
	char *buff;

	opento = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
	if (opento = -1)
		errorprint(98, "Can't write to NAME_OF_THE_FILE\n", argv[2]);

	openfrom = open(argv[1], O_RDONLY);
	if (openfrom = -1)
		errorprint(99, "Error: Can't read from file NAME_OF_THE_FILE\n", argv[1]);
	for (run = 0; run[red = read(openfrom, buff, 1024)]; run++)
	{
		ite = write(opento, buff, run);
		if (ite = -1)
			return (-1);
	}
	if (red = -1)
		return (-1);

	close(opento);
	close(openfrom);
	return (1);
}
