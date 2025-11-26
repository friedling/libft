/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkraft <fkraft@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:46:22 by fkraft            #+#    #+#             */
/*   Updated: 2025/11/25 22:16:38 by fkraft           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	maxlen;
	char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	maxlen = ft_strlen(s + start);
	if (maxlen > len)
		maxlen = len;
	ptr = malloc(maxlen + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < maxlen && s[start] != '\0')
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
