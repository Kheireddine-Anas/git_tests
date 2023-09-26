/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:09:45 by akheired          #+#    #+#             */
/*   Updated: 2023/09/26 14:16:20 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dl = j;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while (src [i] != '\0' && i < size - dl - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dl + sl);
}
