/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:44:52 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/15 10:44:42 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* 
Just considering int within range of 2147483647.
Square root of that int_max is 46340
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	(void)argc;

// 	printf("%d\n", ft_sqrt(*argv[1] - '0'));
// }