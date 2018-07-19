/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:06:47 by exam              #+#    #+#             */
/*   Updated: 2018/06/09 16:24:46 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	print(char *str, int num)
{
	int i;

	i = 0;
	while (i <= num)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		check(char *begin, int end_len)
{
	int i;
	int j;
	int check;

	check = 0;
	i = 0;
	j = end_len;
	while (i < j)
	{
		if (begin[i] == begin[j])
		{
			check = 1;
			i++;
			j--;
		}
		else
		{
			check = 0;
			break ;
		}
	}
	return (check);
}

void	biggest_pal(char *str)
{
	int i;
	int j;
	int len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		j = len;
		while (i < j)
		{
			if (str[i] != str[j])
				j--;
			else
			{
				if ((check(&str[i], j - i) == 1))
				{
					print(&str[i], j - i);
					return ;
				}
				break ;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		biggest_pal(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
