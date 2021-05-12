/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:20:51 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/12 13:11:30 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
		const char *restrict src, size_t dstsize)
{
	size_t		count;
	const char	*copsrc;

	if (!dst || !src)
		return (0);
	count = dstsize;
	copsrc = src;
	if (dstsize != 0)
	{
		while (--count && *src)
			*dst++ = *src++;
		if (count)
			*dst++ = *src++;
	}
	if (count == 0 && dstsize != 0)
		*dst = '\0';
	return (ft_strlen(copsrc));
}
