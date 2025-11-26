/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkraft <fkraft@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:35:41 by fkraft            #+#    #+#             */
/*   Updated: 2025/11/26 02:25:40 by fkraft           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(const char *s, char c)
{
	int	i;
	int	wcount;
	int	cindex;

	i = 0;
	wcount = 0;
	cindex = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			cindex = 0;
		else if (!cindex)
		{
			cindex = 1;
			wcount++;
		}
		i++;
	}
	return (wcount);
}

static char	**ft_freemem(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free (split);
	return (NULL);
}

static char	**ft_makesubstr(char **split, char const *s, char c, int i)
{
	int	z;
	int	start;
	int	len;

	z = 0;
	while (s[z] != '\0')
	{
		while (s[z] == c)
			z++;
		start = z;
		len = 0;
		while (s[z] != c && s[z] != '\0')
		{
			z++;
			len++;
		}
		if (len > 0)
		{
			split[i] = ft_substr(s, start, len);
			if (split[i] == NULL)
				return (ft_freemem(split, i), NULL);
			i++;
		}
	}
	return (split[i] = NULL, split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	int		wcount;

	i = 0;
	if (s == NULL)
		return (NULL);
	wcount = ft_wordcounter(s, c);
	split = malloc(sizeof(char *) * (wcount + 1));
	if (split == NULL)
		return (NULL);
	split = ft_makesubstr(split, s, c, i);
	if (split == NULL)
		return (NULL);
	return (split);
}
