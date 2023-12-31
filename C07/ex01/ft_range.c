/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:17:53 by akheired          #+#    #+#             */
/*   Updated: 2023/10/02 12:33:38 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	if (max <= min || max == min)
		return (NULL);
	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

// int	main()
// {
// 	int *arr = ft_range(1, 4);
// 	printf("%d", *arr);
// 	free(arr);
// 	return 0;
// }