/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 19:49:37 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/17 01:10:25 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_strings(const char *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			while (*s && *s  == c)
				s++;
	}
	return (i);
}

static int	find_next(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	if (s[i] == '\0')
		return (ft_strlen(s)-1);
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**list;
	int		x;
	int		a;

	if (!s)
		return (NULL);
	i = count_strings(s,c);
	if (!(list = (char **)malloc(sizeof(char)*(i+1))))
		return (NULL);
	a = 0;
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		x = find_next(s,c);
		list[a] = ft_substr(s,0,x);
		while (*s != c && *s)
			s++;
	}
	list[a] = 0;
	return (&*list);
}
