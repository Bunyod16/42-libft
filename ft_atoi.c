/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:18:35 by bshamsid          #+#    #+#             */
/*   Updated: 2021/04/28 17:01:35 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int ft_isspace(const char *str)
{
	return ((*str >= 8 && *str <= 13) || *str == 32 );
}

int		ft_atoi(const char *str)
{
	while(ft_isspace(str) == 1)
	{
		str++;
	}
	printf("%c",*str);
	return(0);
}
