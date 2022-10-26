/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:43:53 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/15 16:54:54 by sqiu             ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = ft_is_prime(nb);
	if (is_prime == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(282));
// 	return (0);
// }
