/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:17:16 by akheired          #+#    #+#             */
/*   Updated: 2023/09/30 12:30:42 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	j;
	int	k;

	k = 0;
	j = 1;
	while (av[j++])
		k++;
	while (ac > 1 && k > 0)
	{
		j = 0;
		while (av[k][j])
			ft_putchar(av[k][j++]);
		ft_putchar('\n');
		k--;
	}
}
