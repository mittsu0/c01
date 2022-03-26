/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:09:04 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/26 09:07:42 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

void	ft_swap(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		flag = 0;
		while (i <= size - 2)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(tab + i, tab + i + 1);
				flag = 1;
			}
			i++;
		}
		i = 0;
	}
}

/*
void	ft_put_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	i;
	int	tab[10];
	int	size;

	i = 0;
	size = 10;
	srand(time(NULL));
	while (i <= size - 1)
	{
		tab[i] = rand() % 10;
		i++;
	}
	ft_put_tab(tab, size);
	ft_sort_int_tab(tab, size);
	ft_put_tab(tab, size);
	return (0);
}
*/