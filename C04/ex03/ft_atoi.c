/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:10:10 by sde-sa-p          #+#    #+#             */
/*   Updated: 2023/11/29 12:49:17 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	contsigns;
	int	numbs;

	contsigns = 1;
	i = 0;
	numbs = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			contsigns *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		numbs = numbs * 10 + (str[i] - 48);
		i++;
	}
	return (contsigns * numbs);
}

/*
int	main(void)
{
	printf("'6232fgf23432'=> %d\n", ft_atoi("6232fgf23432"));
	printf("' +---6232fgf23432'=> %d\n", ft_atoi(" +---6232fgf23432"));
	printf("' h +---6232fgf23432'=> %d\n", ft_atoi(" h +---6232fgf23432"));
	printf("' +---h6232fgf23432'=> %d\n", ft_atoi(" +---h6232fgf23432"));
	return (0);
}
*/
