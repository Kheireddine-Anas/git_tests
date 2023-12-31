/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:17:53 by akheired          #+#    #+#             */
/*   Updated: 2023/10/01 09:18:07 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*chg;
	int		sz;
	int		i;

	i = 0;
	sz = 0;
	while (src[i++])
		sz++;
	chg = (char *)malloc(sz);
	i = 0;
	while (src[i])
	{
		chg[i] = src[i];
		i++;
	}
	chg[i] = '\0';
	return (chg);
}
