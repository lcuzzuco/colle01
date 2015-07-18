/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 16:37:30 by ghuot             #+#    #+#             */
/*   Updated: 2015/07/18 16:41:04 by ghuot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_putstr(char *str)
{
	int i;
	
	i = -1;
	while(i++, str[i])
		ft_putchar(str[i]);
	ft_putchar('\n');
}

int		ft_strlen(char *str)
{
	int i;

	i = -1;
	while(i++, str[i])
		;
	return (i);
}
