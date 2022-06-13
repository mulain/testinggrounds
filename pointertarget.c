/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmardin <wmardin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:56:28 by wmardin           #+#    #+#             */
/*   Updated: 2022/06/13 08:04:53 by wmardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_changepointer(int **p2)
{
	**p2 = 2;
}

int	main(void)
{
	int		i;
	int		*p1;
	int		**p2;

	i = 1;
	p1 = &i;
	p2 = &p1;
	ft_changepointer(p2);
	printf("i:%i\n", i);
}