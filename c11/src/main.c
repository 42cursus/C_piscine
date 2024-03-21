/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:16:26 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:16:27 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "c11_tests.h"

int	main(void)
{
	ft_foreach_test();
	ft_map_test();
	ft_any_test();
	ft_count_if_test();
	return (EX_OK);
}
