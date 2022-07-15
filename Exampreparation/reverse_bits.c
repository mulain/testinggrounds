/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitwise.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmardin <wmardin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:13:27 by wmardin           #+#    #+#             */
/*   Updated: 2022/07/12 10:52:17 by wmardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	unsigned char	input;
	unsigned char	output;

	input = 0;
	output = 0;
	output = output | ((input & 128) >> 7);
	output = output | ((input & 64) >> 5);
	output = output | ((input & 32) >> 3);
	output = output | ((input & 16) >> 1);
	output = output | ((input & 8) << 1);
	output = output | ((input & 4) << 3);
	output = output | ((input & 2) << 5);
	output = output | ((input & 1) << 7);
	printf("out:%i\n", output);
}