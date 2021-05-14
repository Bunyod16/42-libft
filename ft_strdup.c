/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:57:09 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/13 20:11:15 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *ret;

	if(!(ret = (char *)malloc(sizeof(char)*(ft_strlen(s1)+1))))
		return (NULL);
	ft_memcpy(ret,s1,ft_strlen(s1)+1);
	return (ret);
}
