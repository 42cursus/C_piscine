/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:41:50 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 18:41:54 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src[] = " world!";
	char dest[14] = "Hello";
	printf("RES: %s\n", ft_strncat(dest, src, 200));
	printf("DEST: %s\n", dest);
	return (0);
}
