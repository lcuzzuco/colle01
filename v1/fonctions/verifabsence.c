int absentligne(int k, char argv[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
		if(argv[i][j] == k)
		return (0);
	return (1);
}

int absentcolonne(int k, char argv[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
		i++;
		if(argv[i][j] == k)
		return (0);
	return (1);
}
