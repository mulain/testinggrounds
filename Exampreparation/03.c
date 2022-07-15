/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmardin <wmardin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:00:26 by wmardin           #+#    #+#             */
/*   Updated: 2022/07/11 22:04:58 by wmardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnumber(int num)
{
	if (num > 9)
		ft_putnumber(num / 10);
	num = num % 10 + 48;
	write(1, &num, 1);
}

int	ft_atoi(char *argv)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (argv[i])
	{
		num = num * 10 + argv[i] - 48;
		i++;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	int		num;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	num = ft_atoi(argv[1]);
	printf("num in main:%i\n", num);
	ft_putnumber(num);
}