/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:36:21 by sde-sa-p          #+#    #+#             */
/*   Updated: 2023/11/26 15:39:11 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void) 
{
    char cadena1[] = "hello";
    char cadena2[] = "hellp";

    int resultado = ft_strcmp(cadena1, cadena2);

    if (resultado == 0) 
        printf("The srings are the same.\n");
	else if (resultado < 0)
	{
        printf("The srings are not the same.\n");
	}
	return 0;
}
*/
