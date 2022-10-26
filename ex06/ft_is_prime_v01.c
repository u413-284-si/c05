/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:45:07 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/15 14:06:43 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Primality test
The simplest primality test is trial division: given an input number, n,
check whether it is evenly divisible by any prime number between 2 and √n 
(i.e. that the division leaves no remainder). If so, then n is composite.
Otherwise, it is prime.
**** 6k+-1 optimization ****
Observe that all primes greater than 3 are of the form 6k ± 1,
where k is any integer greater than 0. This is because all integers can be 
expressed as (6k + i), where i = −1, 0, 1, 2, 3, or 4. Note that 2 divides
(6k + 0), (6k + 2), and (6k + 4) and 3 divides (6k + 3). So,a more efficient
method is to test whether n is divisible by 2 or 3, then to check through all 
numbers of the form 6 k ± 1 ≤ √n. This is 3 times faster than testing all 
numbers up to √n.
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i * i < nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
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
