/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:49:12 by omaslova          #+#    #+#             */
/*   Updated: 2018/05/02 17:42:06 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print(int nb)
{
	char res;

	if (nb == 10)
		write(1, "a", 1);
	else if (nb == 11)
		write(1, "b", 1);
	else if (nb == 12)
		write(1, "c", 1);
	else if (nb == 13)
		write(1, "d", 1);
	else if (nb == 14)
		write(1, "e", 1);
	else if (nb == 15)
		write(1, "f", 1);
	else
	{
		res = nb + 48;
		write(1, &res, 1);
	}
}

void    print_hex(int nb)
{
    int rem;
	int bits;
	int i;

	i = 0;
	bits = 0;
	while (nb > 15)
	{
		rem = nb % 16;
		print(nb / 16);
		nb = nb / 16;
		if (i == 4)
			write(1, " ", 1);
		i++;
	}
	print(rem);
	i++;
	while (i < 8)
	{
		if (i == 4)
			write(1, " ", 1);
		write(1, "0", 1);
		i++;
	}
}

void	print_memory(const void *addr, size_t size)
{
	int		i;
	int		j;
	int		*num;

	i = (int)size / 4;
	j = 0;
	num = (int *)addr;
	while (j < i)
	{
		print_hex(num[j]);
		write(1, "\n", 1);
		j++;
	}
}

int main(int argc, char **argv)
{
	int num;

	num = 0;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
	return (0);
}
