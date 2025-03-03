/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:38:58 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 23:38:59 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "c04_test.h"

int	main(void)
{
	setbuf(stdout, NULL);

	ft_putstr_test();
	ft_putnbr_test();
	ft_atoi_test();
	ft_putnbr_base_test();
	ft_atoi_base_test();
	return (EX_OK);
}
