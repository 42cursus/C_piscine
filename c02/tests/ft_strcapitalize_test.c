/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:40:49 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:33:39 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"

int	ft_strcapitalize_test(int argc, char **argv)
{

	char	buf[250] = {0};
	char	*str = "";
	char	*str1 = "";
	if ((argc - 1) >= 1)
		str = argv[1];
	if ((argc - 1) >= 2)
		str1 = argv[2];

	strcpy(buf, str);
	str = ft_strcapitalize(buf);
	printf("arg: \"%s\",\n r: \"%s\",\n t: \"%s\"\n", str, buf, str1);
	printf("======\n");

	return (0);
}
