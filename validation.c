int absentblock(int k, char **tableau, int i, int j);
int absentcolonne(int k, char **tableau, int j);
int absentligne(int k, char **tableau, int i);

int valide(char **tableau, int position)
{
	int j;
	int i;
	int k;

	if (position >= 9 * 9)
		return(1);
	j = position % 9;
	i = position / 9;
	if (tableau[i][j] != 0)
		return(valide(tableau, position + 1));
	k = 1;
	while(k <= 9)
	{
		if (absentligne(k, tableau, i) && absentcolonne(k, tableau, j)
				&& absentblock(k, tableau, i, j))
		{
			tableau[i][j] = k;
			if (valide (tableau, position + 1))
				return (1);
		}
		k++;
	}
	tableau[i][j] = 0;
	return (0);
}
