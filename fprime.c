* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 11:33:20 by exam              #+#    #+#             */
/*   Updated: 2018/05/01 12:19:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     is_prime(int nbr)
{
    int i;

    i = 2;
    while(i * i <= nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void	fprime(int nbr)
{
	int		i;
	
	i = 2;
	if (nbr == 1)
		printf("1");
	while (nbr > 1)
	{
		while ((is_prime(i)) && nbr % i == 0)
		{
			printf("%d", i);
			nbr = nbr / i;
			if (nbr / i > 0)
				printf("*");
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int num;

	num = 0;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num > 0)
			fprime(num);
	}
	printf("\n");
	return (0);
}
