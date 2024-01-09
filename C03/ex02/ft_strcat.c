/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:42:58 by sde-sa-p          #+#    #+#             */
/*   Updated: 2023/11/26 15:39:49 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "nnuisnoii ";
	char dest[] = "4562 ";
	printf("%s", ft_strcat(dest, src));
}
*/
