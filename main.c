/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neodyme <neodyme@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 21:37:09 by neodyme           #+#    #+#             */
/*   Updated: 2020/06/16 01:22:28 by neodyme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>
#include <wchar.h>
#include <locale.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#ifdef PRINTF_ON
# define ft_printf printf
#endif

int main(void)
{
#ifdef SIGNED_BASIC
	
/*
** Tests for %d and %i (without bonus)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%6d|\n", 123));
	ft_printf("Count: %d\n", ft_printf("2.|%6.4d|\n", 123));
	ft_printf("Count: %d\n", ft_printf("3.|%06.4i|\n", 123));
	ft_printf("Count: %d\n", ft_printf("4.|%-6d|\n", 123));
	ft_printf("Count: %i\n", ft_printf("5.|%.d|\n", 0));
	ft_printf("Count: %i\n", ft_printf("6.|%*.*i|\n", 6, 4, 123));
	ft_printf("Count: %d\n", ft_printf("7.|%08.5i|\n", 123));
	ft_printf("Count: %d\n", ft_printf("8.|%d|\n", 0));
	ft_printf("Count: %d\n", ft_printf("9.|%05.*d|\n", 0, 0));
	ft_printf("Count: %d\n", ft_printf("10.|%*.*i|\n", 6, -4, 123));
	ft_printf("Count: %d\n", ft_printf("11.|%*.*i|\n", -6, 4, 123));
	ft_printf("Count: %d\n", ft_printf("12.|%6.*d|\n", -4, 0));
	ft_printf("Count: %d\n", ft_printf("13.|%d|\n", INT_MAX));

#endif

#ifdef SIGNED_BONUS_FLAGS
	
/*
** Tests for %d and %i (bonus - flags)
*/
	
	ft_printf("Count: %d\n", ft_printf("1.|%+-6.5d|\n", 123));
	ft_printf("Count: %i\n", ft_printf("2.|%+6d|\n", 123));
	ft_printf("Count: %d\n", ft_printf("3.|%+-6i|\n", 123));
	ft_printf("Count: %i\n", ft_printf("4.|% 6d|\n", 123));
	ft_printf("Count: %d\n", ft_printf("5.|%+6.4d|\n", 123));
	ft_printf("Count: %d\n", ft_printf("6.|% 6.0d|\n", 123));
	
#endif

#ifdef SIGNED_BONUS_LENGTH
	
/*
** Tests for %d and %i (bonus - length)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%hhd|\n", (signed char)200));
	ft_printf("Count: %d\n", ft_printf("2.|%hd|\n", (signed short)200000000));
	ft_printf("Count: %d\n", ft_printf("3.|%ld|\n", LONG_MIN));
	ft_printf("Count: %d\n", ft_printf("4.|%lld|\n", LLONG_MAX));
	
#endif

#ifdef UNSIGNED_BASIC
	
/*
** Tests for %u, %x, %X, %o (without bonus)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%x|\n", 255));
	ft_printf("Count: %d\n", ft_printf("2.|%o|\n", 255));
	ft_printf("Count: %d\n", ft_printf("3.|%X|\n", 255));
	ft_printf("Count: %d\n", ft_printf("4.|%u|\n", UINT_MAX));
	ft_printf("Count: %d\n", ft_printf("5.|%02x|\n", 255));
	ft_printf("Count: %d\n", ft_printf("6.|%10x|\n", 255));
	ft_printf("Count: %d\n", ft_printf("7.|%10.5x|\n", 255));
	ft_printf("Count: %d\n", ft_printf("8.|%-8.2x|\n", 255));
	ft_printf("Count: %d\n", ft_printf("8.|%-8.2x|\n", 0));
	
#endif

#ifdef UNSIGNED_BONUS_FLAGS

/*
** Tests for %u, %x, %Xm %o (bonus - flags)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%#x|\n", 255));
	ft_printf("Count: %d\n", ft_printf("2.|%#X|\n", 255));
	ft_printf("Count: %d\n", ft_printf("3.|%#010X|\n", 255));
	ft_printf("Count: %d\n", ft_printf("4.|%#10X|\n", 255));
	ft_printf("Count: %d\n", ft_printf("5.|%-#10X|\n", 255));
	ft_printf("Count: %d\n", ft_printf("6.|%#20.10X|\n", 255));
	ft_printf("Count: %d\n", ft_printf("7.|%#x|\n", 0));
	ft_printf("Count: %d\n", ft_printf("8.|%#-3x|\n", 0));

#endif

#ifdef UNSIGNED_BONUS_LENGTH

/*
** Tests for %u, %x, %X (bonus - length)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%lx|\n", ULONG_MAX));
	ft_printf("Count: %d\n", ft_printf("2.|%llx|\n", ULLONG_MAX));
	ft_printf("Count: %d\n", ft_printf("3.|%hhu|\n", (unsigned char)1000));

#endif
	
#ifdef POINTER_BASIC
	
/*
** Tests for %p (without bonus)
*/
	int *a;
	a = (int *)0x7ffee5771ad8;
	ft_printf("Count: %d\n", ft_printf("1.|%p|\n", NULL));
	ft_printf("Count: %d\n", ft_printf("2.|%p|\n", a));
	ft_printf("Count: %d\n", ft_printf("3.|%-20p|\n", a));
	ft_printf("Count: %d\n", ft_printf("4.|%20p|\n", a));
	ft_printf("Count: %d\n", ft_printf("5.|%*p|\n", 0, a));

#endif

#ifdef STRING_BASIC

/*
** Tests for %s (without bonus)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("2.|%5s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("3.|%.5s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("4.|%20s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("5.|%20.5s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("6.|%-30s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("7.|%.0s|\n", "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("8.|%*.*s|\n", -30, 10, "Hello, world!"));
    ft_printf("Count: %d\n", ft_printf("9.|%*.*s|\n", 30, -10, "Hello, world!"));
	ft_printf("Count: %d\n", ft_printf("10.|%*.*s|\n", 0, 0, "Hello, world!"));

#endif
	
#ifdef STRING_BONUS_LENGTH

/*
** Tests for %s (bonus - length)
*/
	setlocale(LC_ALL, "");
	ft_printf("Count: %d\n", ft_printf("1.|%ls|\n", L"😂😂😂"));
	ft_printf("Count: %d\n", ft_printf("2.|%10ls|\n", L"😂😂😂"));
	ft_printf("Count: %d\n", ft_printf("3.|%.5ls|\n", L"😂😂😂"));

#endif
	
#ifdef CHAR_BASIC
	
/*
** Tests for %c (without bonus)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%c|\n", 'a'));
	ft_printf("Count: %d\n", ft_printf("2.|%c|\n", '\0'));
	ft_printf("Count: %d\n", ft_printf("3.|%-5c|\n", 'a'));
	ft_printf("Count: %d\n", ft_printf("4.|%10c|\n", 'a'));
	ft_printf("Count: %d\n", ft_printf("5.|%5c|\n", '\0'));

#endif
	
#ifdef CHAR_BONUS_LENGTH
		
/*
** Tests for %c (bonus - length)
*/
	
	setlocale(LC_ALL, "");
	wchar_t ch;
	ch = 60;
	ft_printf("Count: %d\n", ft_printf("1.|%lc|\n", ch));
	ch = 0xFE;
	ft_printf("Count: %d\n", ft_printf("2.|%lc|\n", ch));
	ch = 0x8FE;
	ft_printf("Count: %d\n", ft_printf("3.|%10lc|\n", ch));
	ch = 0x1F602;
	ft_printf("Count: %d\n", ft_printf("4.|%-10lc|\n", ch));

#endif
	
#ifdef PERCENT_BASIC
		
/*
** Tests for %% (basic)
*/
	
	ft_printf("Count: %d\n", ft_printf("%%\n"));
	ft_printf("Count: %d\n", ft_printf("%5%\n"));
	ft_printf("Count: %d\n", ft_printf("%10.1%\n"));
	ft_printf("Count: %d\n", ft_printf("%010%\n"));
	ft_printf("Count: %d\n", ft_printf("%-010%\n"));

#endif
	
#ifdef N_BASIC
		
/*
** Tests for %n (basic)
*/
	int n = 0;
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%n\n", &n));
	ft_printf("N is: %d\n", n);
	ft_printf("Count: %d\n", ft_printf("%n\n", (int*)0));
	ft_printf("Count: %d\n", ft_printf("pft%.*ntest%d", 5, &n, 123));

#endif
	
#ifdef N_BONUS_LENGTH
		
/*
** Tests for %n (bonus - length)
*/
	signed char n1 = 0;
	short n2 = 0;
	long n3 = 0;
	long long n4 = 0;
	ssize_t n5 = 0;
	intmax_t n6 = 0;
	ptrdiff_t n7 = 0;
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%hhn\n", &n1));
	ft_printf("N is: %hhd\n", n1);
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%hn\n", &n2));
	ft_printf("N is: %hd\n", n2);
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%ln\n", &n3));
	ft_printf("N is: %ld\n", n3);
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%lln\n", &n4));
	ft_printf("N is: %lld\n", n4);
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%zn\n", &n5));
	ft_printf("N is: %zd\n", n5);
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%jn\n", &n6));
	ft_printf("N is: %jd\n", n6);
	ft_printf("Count: %d\n", ft_printf("TeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststringTeststring%tn\n", &n7));
	ft_printf("N is: %td\n", n7);

#endif

#ifdef FLOAT_BASIC

/*
** Tests for %f, e, g (without bonus)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%f|\n", 0.0));
	ft_printf("Count: %d\n", ft_printf("2.|%e|\n", -0.0));
	ft_printf("Count: %d\n", ft_printf("3.|%g|\n", 0.0/0.0));
	ft_printf("Count: %d\n", ft_printf("4.|%-20.5f|\n", 0.0/0.0));
	ft_printf("Count: %d\n", ft_printf("5.|%e|\n", 0.0/0.0));
	ft_printf("Count: %d\n", ft_printf("6.|%020e|\n", -1.0/0.0));
	ft_printf("Count: %d\n", ft_printf("7.|%.10f|\n", 2.384e15));
	ft_printf("Count: %d\n", ft_printf("8.|%.10e|\n", -2.384e300));
	ft_printf("Count: %d\n", ft_printf("9.|%.10g|\n", -2.384e300));
	ft_printf("Count: %d\n", ft_printf("10.|%.1f|\n", -3.85));
	ft_printf("Count: %d\n", ft_printf("11.|%.1e|\n", 9.999));
	ft_printf("Count: %d\n", ft_printf("12.|%.1g|\n", 9.99));
	ft_printf("Count: %d\n", ft_printf("13.|%.14e|\n", 0.000000000000010000));
	ft_printf("Count: %d\n", ft_printf("14.|%.10f|\n", -56.47852012685));
	ft_printf("Count: %d\n", ft_printf("15.|%*.5e|\n", 10, 9.999429));
	ft_printf("Count: %d\n", ft_printf("16.|%*.*f|\n", 10, 15, 9.999429));
	ft_printf("Count: %d\n", ft_printf("17.|%*.*g|\n", 0, 0, 9.998229));

#endif
	
#ifdef FLOAT_BONUS_FLAGS
		
/*
** Tests for %f, e, g (bonus - length)
*/

	ft_printf("Count: %d\n", ft_printf("1.|%+10g|\n", 0.0/0.0));
	ft_printf("Count: %d\n", ft_printf("2.|% 10.5f|\n", 1.0/0.0));
	ft_printf("Count: %d\n", ft_printf("3.|%+10.5f|\n", 41984198.2122));
	ft_printf("Count: %d\n", ft_printf("4.|%#10.0f|\n", 4.0));
	ft_printf("Count: %d\n", ft_printf("5.|%+10.0e|\n", 41984198.2122));
	ft_printf("Count: %d\n", ft_printf("6.|%+10.0f|\n", 0.0));
	ft_printf("Count: %d\n", ft_printf("7.|%+10.3g|\n", 419.2000000));

#endif

#ifdef LEAKS
	
/*
**	Tests for leaks
*/

	ft_printf("\n");
	ft_printf("%%\n");
	ft_printf("%d\n", 42);
	ft_printf("%d%d\n", 42, 41);
	ft_printf("%d%d%d\n", 42, 43, 44);
	ft_printf("%ld\n", 2147483647);
	ft_printf("%lld\n", 9223372036854775807);
	ft_printf("%x\n", 505);
	ft_printf("%X\n", 505);
	ft_printf("%p\n", &ft_printf);
	ft_printf("%20.15d\n", 54321);
	ft_printf("%-10d\n", 3);
	ft_printf("% d\n", 3);
	ft_printf("%+d\n", 3);
	ft_printf("%010d\n", 1);
	ft_printf("%hhd\n", 0);
	ft_printf("%jd\n", 9223372036854775807);
	ft_printf("%zd\n", 4294967295);
	ft_printf("%\n");
	ft_printf("%U\n", 4294967295);
	ft_printf("%u\n", 4294967295);
	ft_printf("%o\n", 40);
	ft_printf("%%#08x\n", 42);
	ft_printf("%x\n", 1000);
	ft_printf("%#X\n", 1000);
	ft_printf("%s\n", NULL);
	ft_printf("%S\n", L"ݗݜशব");
	ft_printf("%s%s\n", "test", "test");
	ft_printf("%s%s%s\n", "test", "test", "test");
	ft_printf("%C\n", 15000);
	system("leaks test.out");
	
#endif
	
	return (0);
}
