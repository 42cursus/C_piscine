/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:12 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 22:13:57 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*head;
	int	*tail;

	head = tab;
	tail = tab + size - 1;
	while (head <= tail)
		ft_swap(head++, tail--);
}

void	ft_rev_int_tab2(int *tab, int size)
{
	int	i;
	int	tmp;
	int half_size;

	half_size = size / 2;
	i = 0;
	while (i < half_size)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
