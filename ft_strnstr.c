/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:29:54 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/12 12:52:40 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	search;

	x = 0;
	if (!*needle || len <= 0)
		return ((char *)haystack);
	while (len > 1 && *haystack != 0)
	{
		x = 0;
		if (*haystack == needle[x])
		{
			search = len;
			while (needle[++x] != '\0' && needle[x] == haystack[x] && search)
				search--;
			if (needle[x] == '\0')
				return ((char *)haystack);
		}
		len--;
		haystack++;
	}
	return (NULL);
}
