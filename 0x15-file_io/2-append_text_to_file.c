#include "main.h"
/**



*/
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, ite, run;

	if (filename == NULL)
		return (-1);
	opn = open(filename, O_APPEND | O_RDWR);
	if (opn == -1)
		return (-1);
	for (run = 0; run[text_content] != '\0'; run++)
	if (text_content == NULL)
		return (-1);
	ite = write(opn, text_content, run);
	if (ite == -1)
		return (-1);

	close(opn);
	return (1);
}
