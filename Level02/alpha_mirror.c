/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:15:08 by gomandam          #+#    #+#             */
/*   Updated: 2025/05/08 13:23:26 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program called alpha_mirror that takes a string as input and shows this string
after replacing each alphabetical character with its opposite alphabetical character,
followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

etc.

The case does not change.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>*/

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	
	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
			av[1][i] = 'z' - (av[1][i] - 'a');
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			av[1][i] = 'Z' - (av[1][i] - 'A');
		write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
