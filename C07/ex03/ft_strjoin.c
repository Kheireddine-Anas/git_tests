/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:10:35 by akheired          #+#    #+#             */
/*   Updated: 2023/10/04 13:40:34 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i + 1);
}

void	cp_str(char *ptr, char **str, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (str && str[i][k])
			ptr[j++] = str[i][k++];
		k = 0;
		while (sep[k] && i < size - 1)
			ptr[j++] = sep[k++];
		k = 0;
		i++;
	}
	ptr[k + j] = 0;
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	int		i;
	int		sep_len;
	int		total_len;
	char	*ptr;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(str[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
		return (NULL);
	cp_str(ptr, str, size, sep);
	return (ptr);
}
