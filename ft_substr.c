/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:46:10 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/14 15:42:56 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	char c;

	sub = (char *)malloc(sizeof(char)*(len+1));
	if (!sub || !s)
		return (NULL);
	if ((start + len) > ft_strlen(s))
		return (sub);
	c = s[start];
	i = 0;
	ft_bzero(sub,len+1);
	while (*s != c)
		s++;
	ft_memcpy(sub,s,len);
	return (sub);
}
