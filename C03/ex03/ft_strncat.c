/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:51:35 by sde-sa-p          #+#    #+#             */
/*   Updated: 2023/11/26 17:57:18 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "abc";
	char dest[] = "xyz";
	printf("%s", ft_strncat(dest, src, 0));
}
