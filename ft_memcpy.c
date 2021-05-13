/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:46 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/12 15:10:38 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*orig;

	orig = dst;	
	if (!dst && !src)
		return (orig);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (orig);
}
