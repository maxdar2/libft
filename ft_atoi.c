/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgenova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:29:54 by dgenova           #+#    #+#             */
/*   Updated: 2022/01/22 16:29:57 by dgenova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	long_max(int j, int x)
{
	int	y;

	y = 0;
	if (j >= 19 && x == 1)
		y = -1;
	if (j >= 19 && x == -1)
		y = 0;
	return (y);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	y;
	int	j;

	y = 0;
	x = 1;
	j = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			x *= -1;
		str++;
	}
	while (*str <= 57 && *str >= 48)
	{
		y = (y * 10) + ((*str - 48) % 10);
		str++;
		j++;
	}
	y *= x;
	if (j >= 19)
		return (long_max(j, x));
	return (y);
}
