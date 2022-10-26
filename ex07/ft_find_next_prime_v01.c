/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:53:35 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/15 14:35:45 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 5;
	if (nb <= 1)
		return (2);
	if (nb == 2 || nb == 3)
		return (nb);
	while (nb % 2 == 0 || nb % 3 == 0)
		nb++;
	while (nb % i == 0 || nb % (i + 2) == 0)
	{
		nb++;
		i += 6;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(282));
// 	return (0);
// }
