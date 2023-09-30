/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:51:25 by akheired          #+#    #+#             */
/*   Updated: 2023/09/30 17:35:52 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	isp;

	i = 2;
	isp = 1;
	if (nb <= 1)
		return (0);
	if (nb > 2)
	{
		while (i <= (nb / 2))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (isp);
}
