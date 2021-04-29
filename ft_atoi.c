/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:18:35 by bshamsid          #+#    #+#             */
/*   Updated: 2021/04/29 15:59:48 by bshamsid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int ft_isspace(const char *str)
{
	return ((*str >= 8 && *str <= 13) || *str == 32 );
}

static int char_to_int(const char *str)
{
	int result;

	result = 0;

	while (*str >= '1' || *str < '9')
	{
		result *= 10;
		result = *str - '0';
	}
	return (result);
}

int		ft_atoi(const char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while(ft_isspace(str) == 1)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	else
	result = char_to_int(str);

	return(result);
}
