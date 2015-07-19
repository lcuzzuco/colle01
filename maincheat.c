#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void affichage(char **tableau);
int valide(char **tableau, int position);

int main(int argc, char **argv)
{
	printf("Grille avant\n");
	affichage(argv);

	valide(argv, 0);

	printf("Grille apres\n");
	affichage(argv);
}
