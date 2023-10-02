/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:17:53 by akheired          #+#    #+#             */
/*   Updated: 2023/10/01 12:09:19 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (max <= min || max == min)
		return (NULL);
	while (i < max)
		i++;
	arr = (int *)malloc(i);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	arr[i] = '\0';
	return (arr);
}
