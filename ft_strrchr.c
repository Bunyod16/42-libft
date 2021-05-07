/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:15:35 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/08 03:44:18 by bunyod16         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char *last;
	char rep;

	rep = (char)c;
	last = NULL;
	while (*s != '\0')
	{
		if (*s == rep)
			last = (char *)s;
		s++;
	}
	if (c == rep)
		last = (char *)s;
	return (last);
}
