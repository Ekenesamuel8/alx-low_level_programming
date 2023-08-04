#include <stdio.h>

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int w = 0;
//	int g = 0;
	int q;

	for (q = 0; q < argc; q++)
	{
		
		w += q;
		printf ("%d\n", w);
	}

	return (0);


}
