/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:38:33 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/15 16:53:50 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	prim;

	prim = 2;
	if (nb <= 1)
		return (0);
	while (prim <= nb / prim)
	{
		if (nb % prim == 0)
			return (0);
		prim++;
	}
	return (1);
}

// int	main(void)
// {
// 	if (ft_is_prime(5))
// 		printf("Yes");
// 	else
// 		printf("NOOOOOOOOOOOOO");
// 	return (0);
// }
