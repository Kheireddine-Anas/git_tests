/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:00:53 by akheired          #+#    #+#             */
/*   Updated: 2023/09/30 23:35:21 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	as;

	i = 2;
	as = 1;
	if (nb == 1 || nb == 0)
		return (as);
	if (nb < 0)
		return (0);
	while (i <= nb)
		as = as * i++;
	return (as);
}
