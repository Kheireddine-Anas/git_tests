/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:17:53 by akheired          #+#    #+#             */
/*   Updated: 2023/10/02 12:34:11 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	dif;
	int	*all;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	dif = max - min;
	all = malloc(dif * sizeof(int));
	if (!all)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	*range = all;
	while (i < dif)
	{
		all[i] = min + i;
		i++;
	}
	return (dif);
}

// int	main()
// {
// 	int *gol;
// 	int db;
// 	int i = 0;
// 	db = ft_ultimate_range(&gol, 3, 8);
// 	while(i < db)
// 	{
// 		printf("%d", gol[i]);
// 		if(i != db - 1)
// 			printf(", ");
// 		i++;
// 	}
// 	return 0;
// }