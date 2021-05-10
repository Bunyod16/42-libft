/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:05:33 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/08 22:33:16 by bunyod16         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,const char *restrict src,
size_t dstsize)
{
	size_t dstlen;
	size_t count;

	if (!*dst || !*src)
		return (dstsize);
	count = 0;
	free = dstsize - ft_strlen(dst);
	if(free > 1)
	{
		while(*dst)
			dst++;
		while(*src && free > 1)
		{
			*dst++ = *src++;
			count++;
			free--;
		}
	}
	if (free > 0)
		*dst = '\0';
	return (dstsize + count); 
}
