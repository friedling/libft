/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkraft <fkraft@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:36:57 by fkraft            #+#    #+#             */
/*   Updated: 2025/11/25 20:18:50 by fkraft           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strrchr(set, s1[i]) != NULL)
		i++;
	while (len > i && ft_strrchr(set, s1[len - 1]) != NULL)
		len--;
	return (ft_substr(s1, i, len - i));
}
