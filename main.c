/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <maegaspa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/09 13:36:54 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/01 14:37:49 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"
#include <stdio.h>

int     main()
{
   // int c;
   // char *str;
   // char p;
   // long long bite;
   // int ptdr;

   // str = "cou lou ksakou kirikou lolilol ";
   // bite = 922337203685477;
   // ptdr = 147483655;
   // c = 21;
 
	//printf("[%d]\n", printf("printf = %04s 12car garage but only got 6 cars \n", str));
	//printf("printf #x = %#lx\n", str);
	//ft_printf("printf = %04s 12car garage but only got 6 cars \n", str);
    //printf("[printf] : %#080x \n", c);
   // printf("[printf] : %+20s \n |", str);
   //printf("2 eme printf : % .20hhx \n", bite);
    //ft_printf("//ft_printf : %#080x  |\n", c);
	//printf("double s = |%s| lol |%d| \n", "aa", 42);
	//ft_printf("s = %080s \n", str);

	//printf("%s, %8.2s, %2+s, %-s, %0s\n", "aaa", "aaa", "aaa", "aaa", "aaa");
    //printf("lol |% s| lol |%02.s| \n", "aa");
    //ft_printf("lol |% s| lol |%02.s| \n", "aa");
    /*ft_printf("elle[%d]\n", ft_printf("ici |%01.s| |%02.s| |%03.s| |%1.s| |%2.s| |%.1s| |%.2s|\n", "aa", "bb", "cc", "dd", "ee", "ff", "dd"));
	printf("lui [%d]\n", printf("la |%01.s| |%02.s| |%03.s| |%1.s| |%2.s| |%.1s| |%.2s|\n", "aa", "bb", "cc", "dd", "ee", "ff", "dd"));

	printf("\n");
*/
	ft_printf("|%%%1s| |%2.s| |%-3.s| |%1.s| |%2.s| |%.1s| |%.2s|\n", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa");
	printf("\n|%%%1.s| |%2.s| |%-3.s| |%1.s| |%2.s| |%.1s| |%.2s|\n", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa");

	printf("\n");
/*
	ft_printf("[%d]\n", ft_printf("|%10.s| |%-10.s| |%10.s| |%10.s| |%-10.s| |%5.s| |%-5.s|\n",NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("[%d]\n", printf("|%10.s| |%-10.s| |%10.s| |%10.s| |%-10.s| |%5.s| |%-5.s|\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));

	printf("\n");
	

	ft_printf("[%d]\n", ft_printf("|%01.s| |%02.s| |%-03.s| |%1.s| |%2.s| |%-.1s| |%-.2s|\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("[%d]\n", printf("|%01.s| |%02.s| |%-03.s| |%1.s| |%2.s| |%-.1s| |%-.2s|\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-1.1s| |%+2.6s| |%-3.s| |%-1.s| |%-2.s| |%-3.1s| |%5.2s|\n","aa", "bb", "cc", "dd", "ee", "ff", "dd"));
	printf("[%d]\n", printf("|%-1.1s| |%+2.6s| |%-3.s| |%-1.s| |%-2.s| |%-3.1s| |%5.2s|\n", "aa", "bb", "cc", "dd", "ee", "ff", "dd"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-9.1s| |%+9.6s| |%-7.s| |%-3.s| |%9.s| |%4.1s| |%10.1s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));
	printf("[%d]\n", printf("|%-9.1s| |%+9.6s| |%-7.s| |%-3.s| |%9.s| |%4.1s| |%10.1s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-9.s| |%9.s| |%1.s| |%1.0s| |%1s| |%.1s| |%.6s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));
	printf("[%d]\n", printf("|%-9.s| |%9.s| |%1.s| |%1.0s| |%1s| |%.1s| |%.6s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-9.s| |%9.s| |%1.s| |%1.0s| |%1s| |%.1s| |%.6s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));
	printf("[%d]\n", printf("|%-9.s| |%9.s| |%1.s| |%1.0s| |%1s| |%.1s| |%.6s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-9.3s| |%9.7s| |%1.1s| |%1.9s| |%2.1s| |%3.7s| |%.6s|\n","aaccrrr", "bbccrrr", "ccccrrr", "ddccrrr", "eeccrr", "ffccrrr", "ddccrrr"));
	printf("[%d]\n", printf("|%-9.3s| |%9.7s| |%1.1s| |%1.9s| |%2.1s| |%3.7s| |%.6s|\n","aaccrrr", "bbccrrr", "ccccrrr", "ddccrrr", "eeccrr", "ffccrrr", "ddccrrr"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%1s| |%.10s| |%10s| |%-10s| |%+10s| |%+10.s| |%-10.s|\n", "a","b", "c","d", "e","f","g"));
	printf("[%d]\n", printf("|%1s| |%.10s| |%10s| |%-10s| |%+10s| |%+10.s| |%-10.s|\n", "a","b", "c","d", "e","f","g"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|% .3s| |%-.2s| |%+.0s| |% .3s| |%- .2s| |%+ .1s| |%+ .10s|\n","aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));
	printf("[%d]\n", printf("|% .3s| |%-.2s| |%+.0s| |% .3s| |%- .2s| |%+ .1s| |%+ .10s|\n", "aacc", "bbcc", "cccc", "ddcc", "eecc", "ffcc", "ddcc"));

	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%10.s| |%-10.s| |%10.s| |%10.s| |%-10.s| |%5.s| |%-5.s|\n", "aaccrrr", "bbccrrr", "ccccrrr", "ddccrrr", "eeccrr", "ffccrrr", "ddccrrr"));
	printf("[%d]\n", printf("|%10.s| |%-10.s| |%10.s| |%10.s| |%-10.s| |%5.s| |%-5.s|\n", "aaccrrr", "bbccrrr", "ccccrrr", "ddccrrr", "eeccrr", "ffccrrr", "ddccrrr"));
*/
    return (0);
}


