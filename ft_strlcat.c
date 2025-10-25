/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkraft <fkraft@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:11:56 by fkraft            #+#    #+#             */
/*   Updated: 2025/10/25 20:35:48 by fkraft           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	j;
	int	x;

	i = ft_strlen(dst);
	j = 0;
	x = i + ft_strlen(src);
	if (size > i)
	{
		while (i < size)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '/0';
	return (x);
}
