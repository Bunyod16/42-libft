/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 12:53:22 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/16 16:15:37 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*start;

	if (!s1 || !s2)
		return (NULL);
	while (*s1 && ft_strchr(s2,*s1))
		s1++;
	start = (char *)s1;
	len = ft_strlen(s1);
	while (len && ft_strchr(s2,*(s1+len)))
		len--;
	return(ft_substr(start,0,len+1));
}
