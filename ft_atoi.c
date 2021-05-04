/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshamsid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:18:35 by bshamsid          #+#    #+#             */
/*   Updated: 2021/05/04 21:39:07 by bunyod16         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char *str)
{
	return ((*str >= 8 && *str <= 13) || *str == 32 );
}

static int	char_to_int(const char *str)
{
	int	res;

	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res = res + (*str - 48);
		str++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(str) != 0)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	result = sign * char_to_int(str);
	return (result);
}
