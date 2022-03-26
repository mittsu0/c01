/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:09:04 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 09:02:14 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	printf("a:%d", a);
// 	printf("\n");
// 	printf("b:%d", b);
// 	ft_swap(&a, &b);
// 	printf("\n");
// 	printf("a:%d", a);
// 	printf("\n");
// 	printf("b:%d", b);
// 	return (0);
// }