/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-h <mvidal-h@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:42:07 by mvidal-h          #+#    #+#             */
/*   Updated: 2023/11/12 17:34:31 by mvidal-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int cur_c, int cur_r, int max_c, int max_r)
{
	if ((cur_c == 1 && cur_r == 1) || (cur_c == max_c && cur_r == max_r))
		ft_putchar('/');
	else if ((cur_c == max_c && cur_r == 1) || (cur_c == 1 && cur_r == max_r))
		ft_putchar('\\');
	else if (cur_r != 1 && cur_r != max_r && cur_c != 1 && cur_c != max_c)
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (y > 0 && x > 0)
	{
		row = 1;
		while (row <= y)
		{	
			column = 1;
			while (column <= x)
			{	
				print_char(column, row, x, y);
				column++;
			}
			ft_putchar('\n');
			row++;
		}
	}	
	else
		write(1, "negative numbers or 0 are not allowed.\n", 39);
}
