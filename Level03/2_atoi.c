/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:21:17 by gomandam          #+#    #+#             */
/*   Updated: 2025/05/14 20:29:18 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Short version of ATOI

#include <unistd.h>

int	short_atoi(char *str)
{
	int	idx;
	int	res;

	idx = 0;
	res = 0;
	while (str[idx] != '\0')
	{
		res *= 10;
		res += str[idx] - '0';
		idx++;
	}
	return (res);
}
