/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:51:25 by akheired          #+#    #+#             */
/*   Updated: 2023/09/30 21:58:49 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nbr)
{
	int	i;
	int	isp;

	i = 2;
	isp = 1;
	if (nbr <= 1)
		return (0);
	if (nbr > 2)
	{
		while (i <= (nbr / 2))
		{
			if (nbr % i == 0)
				return (0);
			i++;
		}
	}
	return (isp);
}

int	ft_find_next_prime(int nb)
{
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
