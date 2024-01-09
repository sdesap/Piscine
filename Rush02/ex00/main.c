/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sa-p <sde-sa-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:14:10 by sde-sa-p          #+#    #+#             */
/*   Updated: 2023/11/26 19:05:21 by sde-sa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int	size(char *str)
{
	int		count;
	char	*temp;

	count = 1;
	temp = str;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*clean_spaces(char *str)
{
	char	*ptr;
	char	*temp;

	ptr = malloc(1 * size(str));
	temp = ptr;
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			*ptr = *str;
			ptr++;
		}
		str++;
	}
	*ptr = '\0';
	return (temp);
}

void	ft_rev_char_tab(char *tab, int size)
{
	int		p;
	char	container;

	p = 0;
	size--;
	size--;
	while (p < size)
	{
		container = tab[size];
		tab[size] = tab[p];
		tab[p] = container;
		p++;
		size--;
	}
}

char	*logic(char *str, char *to_find, char *temp_str, char *temp_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			temp_str = str;
			while (*str == *to_find && *str != '\0')
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (str);
			else if (*str == '\0')
				return (0);
			to_find = temp_find;
			str = temp_str;
		}
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_find;
	char	i;

	i = 'a';
	temp_find = to_find;
	temp_str = &i;
	return (logic(str, to_find, temp_str, temp_find));
}

void	print_value(char *dicc, char *str, int n, int i)
{
	char	arr1[3];
	char	arr2[10];
	char	*temp1;
	char	*temp2;
	int		p;
	int		nt;
	int		v;

	v = 0;
	p = 1;
	arr2[0] = '1';
	nt = n;
	if (i == 3)
		i = 0;
	if (nt % 3 != 0)
		nt = nt % 3;
	while (nt != 0)
	{
		arr2[p] = '0';
		p++;
		nt--;
	}
	arr2[p] = '\0';
	if (i == 0 && *(str + 1) != '\0'
		&& ((*str == '0' && *(str + 1) != '0') || *(str + 1) == '1'))
	{
		arr1[0] = *(str + 1);
		arr1[1] = *str;
		n++;
		i++;
		str++;
		v = 1;
	}
	else if (i == 1)
	{
		arr1[0] = *str;
		arr1[1] = '0';
		v = 1;
	}
	else
		arr1[0] = *str;
	n++;
	i++;
	str++;
	if (*str != '\0')
		print_value(dicc, str, n, i);
	if (arr1[0] != '0')
	{
		temp1 = ft_strstr(dicc, arr1);
		temp1++;
		while (*temp1 != '\n' && *temp1 != '\0')
		{
			write(1, temp1, 1);
			temp1++;
		}
		write(1, "\n", 1);
	}
	if (arr2[1] != '\0' && arr1[0] != '0' && v == 0)
	{
		temp2 = ft_strstr(dicc, arr2);
		temp2++;
		while (*temp2 != '\n' && *temp2 != '\0')
		{
			write(1, temp2, 1);
			temp2++;
		}
		write(1, "\n", 1);
	}
}

int	main(int argsc, char *argsv[])
{
	char	buffer[1000];
	int	f1;
	int	nbyte;
	int	i;
	char	*dicc;
	char	*ptr2;
	int	size2;

	i = 0;
	if (argsc != 3)
	{
		write(1, "Error", 5);
	}
	else
	{
		f1 = open(argsv[1], O_RDONLY);
		while ((nbyte = read(f1, &buffer[i], 1)) > 0)
		{
			i++;
		}
		buffer[i] = '\0';
		dicc = clean_spaces(buffer);
		ptr2 = argsv[2];
		size2 = size(ptr2);
		ft_rev_char_tab(ptr2, size2);
		print_value(dicc, ptr2, 0, 0);
		close (f1);
	}
	return (0);
}
