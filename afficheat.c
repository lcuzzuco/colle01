#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void affichage (char **tableau)
{
	for (int i=0; i<9; i++)
	{
		for (int j=0; j<9; j++)
		{
			printf( ((j+1)%3) ? "%c" : "%c|", tableau[i][j]);
		}
		putchar('\n');
		if (!((i+1)%3))
			puts("------------------");
	}
	puts("\n\n");
}
