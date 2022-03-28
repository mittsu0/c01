/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:09:04 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/28 22:25:52 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_put_tab(int *tab, int size)
// {
// 	int	i;

// 	i = -1;
// 	while (++i < size)
// 		printf("%d", tab[i]);
// 	printf("\n");
// }

// int	main(void)
// {
// 	int	i;
// 	int	tab[10];
// 	int	size;

// 	i = -1;
// 	size = 10;
// 	while (++i < size)
// 		tab[i] = i;
// 	ft_put_tab(tab, size);
// 	ft_rev_int_tab(tab, size);
// 	ft_put_tab(tab, size);
// 	return (0);
// }