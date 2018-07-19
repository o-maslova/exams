/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:47:13 by exam              #+#    #+#             */
/*   Updated: 2018/03/27 13:00:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nb = nb * 10;
		nb = nb + str[i++];
		nb = nb - 48;
	}
	return (nb);
}

int		is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_pow(int nb, int i)
{
	int n;

	n = nb;
	if (i == 0)
		return (1);
	while (i > 1)
	{
		n *= nb;
		i--;
	}
	return (n);
}

void	ft_putnbr(int num)
{
	int		nb;
	int		p;
	int		i;
	char	c;

	nb = num;
	i = 0;
	while (nb / 10 > 0)
	{
		nb /= 10;
		i++;
	}
	while (i >= 0)
	{
		p = ft_pow(10, i);
		nb = num / p;
		num = num % p;
		c = nb + '0';
		write(1, &c, 1);
		i--;
	}		
}

int		main(int argc, char **argv)
{
	int i;
	int nb;
	int res;

	i = 2;
	res = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb < 0 || nb >= 2147483647)
			return (0);
		while (i <= nb)
		{
			if (is_prime(i) == 1)
				res += i;
			if (res > 2147483647)
				return (0);
			i++;
		}
		ft_putnbr(res);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
