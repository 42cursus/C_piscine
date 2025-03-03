/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:56:00 by abelov            #+#    #+#             */
/*   Updated: 2023/10/14 19:42:12 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_putstr_non_printable_test(void)
{
	const char	*str1;
	const char	*str2;

	ft_print_title("ft_putstr_non_printable_test");
	str1 = "Coucou\ntu vas bien ?";
	str2 = "\nCoucou\\0atu vas bien ?";
	ft_putstr_non_printable((char *)str1);
	puts(str2);
	puts("\n======");

	puts("\nasdf\\x7f\\x1fhi\\x01\\xfflol");
	str1 = "asdf\x7f\x1fhi\x01\xfflol";
	str2 = "\nasdf\\7f\\1fhi\\01\\fflol";
	ft_putstr_non_printable((char *)str1);
	puts(str2);
	puts("\n======");

	str1 = "\xe9z\xea""F\xbc,\xe0""E\xbb\xce\xd1\x1f\xb2\xa9-\xfb\xcd\xdd[\x9aN\xa9\x9b\xedm\xba~#\xc0\xd5\xa0\xbem\xd5\xf1\xa7\x0a\xaf\xc7\xeb""8\x8d\x05\xdd[\x88\xaf\xbf\x15R\x8d\xdb/\xb2\xff\x95""F\xb9\xfc\xf6\xeeSv\x1a\xd0\xd7\xd2\xff|\x08~\xa5\xb6G\x1b\xf2\xed\x1c\x1d\xa7h\x1f\xa6\xcd\xd0\xa5\x1a\xcc\xf7\xedK\xac~\xc2\xea""6\xa5\x9e\x17\x8a\x9fo|\xd6\x17\x9e\xdf\x7f\xdd\xae""0\x01\xef\xfb\x9d\xbb\xff\xdc\xd5<t\xf3\xa5\xa3\xbd[\xbb\xef\x81\x93""1\xf8\xbf\x1e\x87\xb3\xcd\xdc\xe8\xf1\xdb\xd9\x0f\xce\xbe\xa6""B\x01y\xb1\xee\x95]/6\x1b[1;5;31mTROCK YOU42\x08\"";
	str2 = "\n\\e9z\\eaF\\bc,\\e0E\\bb\\ce\\d1\\1f\\b2\\a9-\\fb\\cd\\dd[\\9aN\\a9\\9b\\edm\\ba~#\\c0\\d5\\a0\\bem\\d5\\f1\\a7\\0a\\af\\c7\\eb8\\8d\\05\\dd[\\88\\af\\bf\\15R\\8d\\db/\\b2\\ff\\95F\\b9\\fc\\f6\\eeSv\\1a\\d0\\d7\\d2\\ff|\\08~\\a5\\b6G\\1b\\f2\\ed\\1c\\1d\\a7h\\1f\\a6\\cd\\d0\\a5\\1a\\cc\\f7\\edK\\ac~\\c2\\ea6\\a5\\9e\\17\\8a\\9fo|\\d6\\17\\9e\\df\\7f\\dd\\ae0\\01\\ef\\fb\\9d\\bb\\ff\\dc\\d5<t\\f3\\a5\\a3\\bd[\\bb\\ef\\81\\931\\f8\\bf\\1e\\87\\b3\\cd\\dc\\e8\\f1\\db\\d9\\0f\\ce\\be\\a6B\\01y\\b1\\ee\\95]/6\\1b[1;5;31mTROCK YOU42\\08\"\n";
	ft_putstr_non_printable((char *)str1);
	puts(str2);
	puts("\n======");

	str1 = "uif\x7fhes\nfuieseufhi";
	str2 = "\nuif\\7fhes\\0afuieseufhi";
	ft_putstr_non_printable((char *)str1);
	puts(str2);
	printf("\n======\n");

	return (0);
}
