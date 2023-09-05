#include "main.h"
/**
* create_file - function that create a new file and add a text
* @filename: the filename
* @text_content: the content we want to stored in the file
* Return: 1 for success
*/
int create_file(const char *filename, char *text_content)
{
	int my, wite, run;

	if (!filename)
		return (-1);
	my = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (my == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (run = 0; run[text_content] != '\0'; run++)
	wite = write(my, text_content, run);
	if (wite == -1)
		return (-1);
	close(my);
	return (1);

}
