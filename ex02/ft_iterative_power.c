/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:37:15 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/13 20:57:40 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(3, 2));
// 	return (0);
// }
