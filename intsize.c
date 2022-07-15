/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmardin <wmardin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:47:16 by wmardin           #+#    #+#             */
/*   Updated: 2022/06/21 07:59:33 by wmardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap/push_swap.h"
#include "stdio.h"
#include "../push_swap/libft/include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	i = 0;
	u_s1 = (unsigned char *) s1;
	u_s2 = (unsigned char *) s2;
	while (i < n)
	{
		if (u_s1[i] == 0 && u_s2[i] == 0)
			return (0);
		if (u_s1[i] != u_s2[i])
			return (u_s1[i] - u_s2[i]);
		i++;
	}
	return (0);
}

int	main(int num)
{
	char	*str;

	str = "21000";
	if (str[0] == '-')
		printf ("%i\n", ft_strncmp("-2147483648", str, 15));
	else
		printf ("test\n");
		printf ("%i\n", ft_strncmp("2147483647", str, 15));
}