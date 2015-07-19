/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 14:47:01 by ghuot             #+#    #+#             */
/*   Updated: 2015/07/19 14:29:17 by ghuot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	resolve_sudoku(char **tableau)
{
	ft_putstr("champion");
}

void	print_sudoku(char *line)
{
	int i;

	i = -1;
	while (i++, line[i])
	{
		ft_putchar(line[i]);
		if (i < ft_strlen(line) - 1)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

int sudoku_is_ok(int argc, char **argv)
{
	int i;
	int j;
	
	i = 0;
	while (i++, i < argc)
	{
		if (ft_strlen(argv[i]) != 9)
		{
			return (0);
		}
	}
	i = 0;
	while (i++, i < argc)
	{
		j = -1;
		while (j++, j < ft_strlen(argv[i]))
		{
			if ((argv[i][j] < '1' || argv[i][j] > '9') && argv[i][j] != '.')
			{	
				return (0);
			}
		}
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	if (argc == 10)
		if (!sudoku_is_ok(argc, argv))
		{
			ft_putstr("Erreur !");
			return(0);
		}
		else
			resolve_sudoku(argv);
	else
		ft_putstr("Erreur !");
	return (0);
}
