/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:12:12 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 22:13:57 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline __attribute__((always_inline))
void	ft_swap(int *const a, int *const b)
{
	register const int	temp = *b;

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
	int			i;
	int			tmp;
	const int	half_size = size / 2;
	const int	last = size - 1;

	i = -1;
	while (++i < half_size)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[last - i] = tmp;
	}
}
