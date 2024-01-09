/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:54:10 by sde-sa-p          #+#    #+#             */
/*   Updated: 2023/11/21 10:00:06 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	r1;

	i = 0;
	r1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (r1 == 1)
					str[i] -= 32;
				r1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
				r1 = 0;
		else
				r1 = 1;
		i++;
	}
	return (str);
}
