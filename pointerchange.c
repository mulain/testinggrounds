/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerchange.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmardin <wmardin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 07:56:28 by wmardin           #+#    #+#             */
/*   Updated: 2022/06/13 08:41:19 by wmardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_changepointer(int *p1, int **p2)
{
	p2 = &p1;
}

int	main(void)
{
	int		i;
	int		*p1;
	int		**p2;

	i = 1;
	p1 = &i;
	p2 = NULL;
	ft_changepointer(p1, p2);
	printf("p2:%p\n", p2);
}