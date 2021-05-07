/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:15:35 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/07 15:21:37 by bunyod16         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	needle;

	needle = c + '0';
	while (*s != '\0')
	{
		if (*s == needle)
			return ((char *)s);
		s++;
	}
	if (needle == '\0')
		return ((char *)s);
	return (NULL);
}
