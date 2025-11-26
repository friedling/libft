/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkraft <fkraft@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:35:30 by fkraft            #+#    #+#             */
/*   Updated: 2025/11/25 22:17:20 by fkraft           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	errorandcount(long m)
{
	int	z;

	z = 0;
	if (m < 0)
		z++;
	if (m < 0)
		m = -m;
	while (m != 0)
	{
		m = m / 10;
		z++;
	}
	return (z);
}

char	*errorandtransform(char *ptr, int z, int n)
{
	size_t	i;
	long	m;

	if (ptr == NULL)
		return (NULL);
	ptr[z] = '\0';
	if (n < 0)
		ptr[0] = '-';
	m = (long)n;
	if (m < 0)
		m = -m;
	i = z - 1;
	while (m != 0)
	{
		ptr[i] = (m % 10) + '0';
		m = m / 10;
		i--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	m;
	int		z;

	m = (long)n;
	if (n == 0)
	{
		ptr = malloc(2);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	z = errorandcount(m);
	ptr = malloc(z + 1);
	ptr = errorandtransform(ptr, z, n);
	return (ptr);
}
