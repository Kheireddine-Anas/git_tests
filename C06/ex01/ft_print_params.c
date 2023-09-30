/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:17:16 by akheired          #+#    #+#             */
/*   Updated: 2023/09/30 12:17:34 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (ac && av[i])
	{
		j = 0;
		while (av[i][j])
			ft_putchar(av[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
