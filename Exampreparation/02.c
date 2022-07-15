/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmardin <wmardin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:37:20 by wmardin           #+#    #+#             */
/*   Updated: 2022/07/12 21:02:09 by wmardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	int		table[500];

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	n = 1;
	i = 0;
	while (i < 500)
	{
		table[i] = 0;
		i++;
	}
	write(1, "'", 1);
	while (n < 3)
	{
		i = 0;
		while (argv[n][i])
		{
			if (table[argv[n][i]] == 0)
			{
				write(1, argv[n] + i, 1);
				table[argv[n][i]] = 1;
			}
			i++;
		}
		n++;
	}
	write(1, "'", 1);
	write(1, "\n", 1);
}