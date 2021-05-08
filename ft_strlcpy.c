/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:20:51 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/08 22:29:27 by bunyod16         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
		const char *restrict src, size_t dstsize)
{
	size_t	count;

	count = 0;
	while (dstsize > count + 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		count++;
	}
	*dst = '\0';
	return (dstsize);
}
