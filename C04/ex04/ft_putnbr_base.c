/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:55:08 by akheired          #+#    #+#             */
/*   Updated: 2023/09/29 11:20:43 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checker(char *bs, int b)
{
	int	f;
	int	k;

	f = 0;
	if (b < 2 || !(bs[f]))
		return (0);
	while (bs[f])
	{
		if (bs[f] <= 32 || bs[f] == 45 || bs[f] == 43)
			return (0);
		k = f + 1;
		while (bs[k])
		{
			if (bs[k] == bs[f])
				return (0);
			k++;
		}
		f++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		b;
	int		f;
	int		e;

	num = (long)nbr;
	b = 0;
	f = 0;
	b = ft_strlen(base);
	e = checker(base, b);
	if (e == 1)
	{
		if (num < 0)
		{
			num *= -1;
			ft_putchar('-');
		}
		if (num >= b)
		{
			ft_putnbr_base(num / b, base);
			ft_putnbr_base(num % b, base);
		}
		else
			ft_putchar(base[num]);
	}
}
