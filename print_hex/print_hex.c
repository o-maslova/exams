/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:02:12 by exam              #+#    #+#             */
/*   Updated: 2018/04/13 21:17:21 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = 1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
		nb = nb * 10 + s[i++] - 48;
	return (sign ? -nb : nb);
}

void	print(int nb)
{
	int		i;
	int		res;
	char	ptr;

	i = 0;
	res = nb;
	if (res == 10)
		write(1, "a", 1);
	else if (res == 11)
		write(1, "b", 1);
	else if (res == 12)
		write(1, "c", 1);
	else if (res == 13)
		write(1, "d", 1);
	else if (res == 14)
		write(1, "e", 1);
	else if (res == 15)
		write(1, "f", 1);
	else
	{
		ptr = res + 48;
		write(1, &ptr, 1);
	}
}

int		amount_of_quaters(int nb)
{
	int j;

	j = 1;
	while (nb / 16)
	{
		j++;
		nb = nb / 16;
	}
	return (j);
}

void	abracadabra(int nb)
{
	int		i;
	int		j;

	i = amount_of_quaters(nb);
	int arr[i];
	j = i - 1;
	if (nb == 0)
        arr[j] = 0;
	while (nb > 0)
	{
		arr[j] = nb % 16;
		nb = nb / 16;
		j--;
	}
	j = 0;
    while (j < i)
	{
		print(arr[j]);
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num;

		num = ft_atoi(argv[1]);
		abracadabra(num);
	}
	write (1, "\n", 1);
	return (0);
}
