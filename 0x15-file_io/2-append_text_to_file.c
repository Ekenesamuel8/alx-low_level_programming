#include "main.h"
/**
* append_text_to_file - write a text at the end in a file
* @filename: the name of the filename
* @text_content: the content of what we want to add
* Return: 1 for success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, ite, run;

	if (filename == NULL)
		return (-1);
	opn = open(filename, O_APPEND | O_WRONLY);
	if (opn == -1)
		return (-1);
	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		for (run = 0; run[text_content]; run++)
			;
		ite = write(opn, text_content, run);
		if (ite == -1)
			return (-1);
	}
	close(opn);
	return (1);
}
