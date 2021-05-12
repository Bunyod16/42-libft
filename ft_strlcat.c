/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:05:33 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/12 13:15:38 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
		size_t dstsize)
{
	size_t	count;

	if (dstsize < 1)
		return (0);
	count = 0;
	while (*dst != '\0' && count < dstsize)
	{
		dst++;
		count++;
	}
	while (*src != '\0' && count < dstsize - 1)
	{
		*dst++ = *src++;
		count++;
	}
	if (count < dstsize)
		*dst = '\0';
	while (*src++ != '\0')
		count++;
	return (count);
}
