/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-h <mvidal-h@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:20:26 by mvidal-h          #+#    #+#             */
/*   Updated: 2023/11/12 17:39:35 by mvidal-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int curr_c, int curr_r, int max_c, int max_r)
{
	if (curr_r == 1 && (curr_c == 1 || curr_c == max_c))
		ft_putchar('A');
	else if (curr_r == max_r && (curr_c == 1 || curr_c == max_c))
		ft_putchar('C');
	else if (curr_r != 1 && curr_r != max_r && curr_c != 1 && curr_c != max_c)
		ft_putchar(' ');
	else
		ft_putchar('B');
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
