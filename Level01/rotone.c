/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:15:21 by gomandam          #+#    #+#             */
/*   Updated: 2025/04/11 02:47:57 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i = 0;

	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'a' && av[1][i] <='y')		//since (<= 'y') == (< 'z')
				av[1][i] = av[1][i] + 1;
			else if (av[1][i] == 'z')
				av[1][i] = 'a';
			else if (av[1][i] >= 'A' && av[1][i] < 'Z')
				av[1][i] += 1;				//illustrate that (var = var + 1;) == (var += 1;)
			else if (av[1][i] == 'Z')
				av[1][i] = 'A';
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
