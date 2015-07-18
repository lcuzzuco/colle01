/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 14:47:01 by ghuot             #+#    #+#             */
/*   Updated: 2015/07/18 18:24:16 by ghuot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	resolve_sudoku()
{

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

int		main(int argc, char *argv[])
{
	int i;
	int j;
		
	if (argc == 10)
	{
		i = 0;
		while (i++, i < argc)
		{
			if (ft_strlen(argv[i]) != 9)
			{
				ft_putstr("Erreur !\n");
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
					return (0);
			}
		}
		i = 0;
		while (i++, i < argc)
			print_sudoku(argv[i]);
	}
	else
		ft_putstr("Erreur !\n");
	return (0);
}
