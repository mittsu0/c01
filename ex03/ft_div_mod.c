/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:09:04 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 09:02:30 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div;
// 	int	mod;

// 	ft_div_mod(10, 3, &div, &mod);
// 	printf("div:%d mod:%d", div, mod);
// 	printf("\n");
// 	ft_div_mod(1, 10, &div, &mod);
// 	printf("div:%d mod:%d", div, mod);
// 	return (0);
// }