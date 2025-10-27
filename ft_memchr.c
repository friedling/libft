/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkraft <fkraft@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:12:56 by fkraft            #+#    #+#             */
/*   Updated: 2025/10/26 15:44:34 by fkraft           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	x = ((unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (x[i] == ((unsigned char)c))
		{
			return ((void *)&x[i]);
		}
		i++;
	}
	return (NULL);
}
