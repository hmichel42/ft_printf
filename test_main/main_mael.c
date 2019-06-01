/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <maegaspa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/09 13:36:54 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/22 15:08:47 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"
#include <stdio.h>

int     main()
{
    int c;
    char *str;
   // char p;
   // long long bite;
   // int ptdr;

    str = "cgarrot la ptite mouille qui va se faire sucer par chatte soon";
   // bite = 922337203685477;
   // ptdr = 147483655;
    c = 42;
	
	printf("d : short = |%hd| long = |%ld| sshort = |%hhd| llong = |%lld|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	ft_printf("d : short = |%hd| long = |%ld| sshort = |%hhd| llong = |%lld|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	printf("\n");
	printf("x : short = |%hx| long = |%lx| sshort = |%hhx| llong = |%llx|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	ft_printf("x : short = |%hx| long = |%lx| sshort = |%hhx| llong = |%llx|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	printf("\n");
	printf("o : short = |%ho| long = |%lo| sshort = |%hho| llong = |%llo|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	ft_printf("o : short = |%ho| long = |%lo| sshort = |%hho| llong = |%llo|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	printf("\n");
	printf("u : short = |%hu| long = |%lu| sshort = |%hhu| llong = |%llu|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	ft_printf("u : short = |%hu| long = |%lu| sshort = |%hhu| llong = |%llu|\n", 200000000000, 200000000000, 200000000000, 200000000000);
	printf("-----------\n");
	printf("d : short = |%hd| long = |%ld| sshort = |%hhd| llong = |%lld|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	ft_printf("d : short = |%hd| long = |%ld| sshort = |%hhd| llong = |%lld|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	printf("\n");
	printf("x : short = |%hx| long = |%lx| sshort = |%hhx| llong = |%llx|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	ft_printf("x : short = |%hx| long = |%lx| sshort = |%hhx| llong = |%llx|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	printf("\n");
	printf("o : short = |%ho| long = |%lo| sshort = |%hho| llong = |%llo|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	ft_printf("o : short = |%ho| long = |%lo| sshort = |%hho| llong = |%llo|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	printf("\n");
	printf("u : short = |%hu| long = |%lu| sshort = |%hhu| llong = |%llu|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	ft_printf("u : short = |%hu| long = |%lu| sshort = |%hhu| llong = |%llu|\n", -200000000000, -200000000000, -200000000000, -200000000000);
	//printf("[%d]\n", printf("printf = %04s 12car garage but only got 6 cars \n", str));
	//printf("printf #x = %#lx\n", str);
	//ft_printf("printf = %04s 12car garage but only got 6 cars \n", str);
    //printf("[printf] : %#080x \n", c);
   // printf("[printf] : %+20s \n |", str);
   //printf("2 eme printf : % .20hhx \n", bite);
    //ft_printf("//ft_printf : %#080x  |\n", c);
	//printf("vrai s = |%#10.30x| lol |%#30.40o| \n", c, c);
	//ft_printf("nous s = |%#10.30x| lol |%#30.40o| \n", c, c);
	//ft_printf("cc = %x \n", c);
	//printf("cc = %x \n", c);
	//ft_printf("OIM = |%#11x| |%#3.11x| avec # |%#10.10x| |%#10.x| ou zero |%#03.10x| |%#10.0x| \n", 5, 5, 5, 5, 5, 5);
	//printf("LUI = |%#11x| |%#3.11x| avec # |%#10.10x| |%#10.x| ou zero |%#03.10x| |%#10.0x| \n", 5, 5, 5, 5, 5, 5);

	//printf("coucou = |%2.0d| |%2.0d| |%2.0d| |%2.0d|\n", 12, 2, 3, 4);
/*
printf("---- Digit ----\n\n");
	ft_printf("[%d]\n", ft_printf("|%01.d| |%02.d| |%03.d| |%1.d| |%2.d| |%.1d| |%.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%01.d| |%02.d| |%03.d| |%1.d| |%2.d| |%.1d| |%.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%01.d| |%02.d| |%03.d| |%1.d| |%2.d| |%.1d| |%.2d|\n", -40, -20, -4, -120, -578, -9, -8));
	printf("[%d]\n", printf("|%01.d| |%02.d| |%03.d| |%1.d| |%2.d| |%.1d| |%.2d|\n", -40, -20, -4, -120, -578, -9, -8));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%1.5d| |%1.d| |%-5.d| |%-5.3d| |%+3.d| |%-.5d| |%.d|\n", -4, -2, -4, -1, -5, -9, -8));
	printf("[%d]\n", printf("|%1.5d| |%1.d| |%-5.d| |%-5.3d| |%+3.d| |%-.5d| |%.d|\n", -4, -2, -4, -1, -5, -9, -8));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%01.d| |%02.d| |%03.d| |%1.d| |%2.d| |%.1d| |%.d|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%01.d| |%02.d| |%03.d| |%1.d| |%2.d| |%.1d| |%.d|\n", 0, 0, 0, 0, 0, 0, 0));
	
	printf("\n");
	
	ft_printf("[%d]\n", ft_printf("|%10.d| |%-10.d| |%10.d| |%10.d| |%-10.d| |%5.d| |%-5.d|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%10.d| |%-10.d| |%10.d| |%10.d| |%-10.d| |%5.d| |%-5.d|\n", 0, 0, 0, 0, 0, 0, 0));
	
	printf("\n");

	ft_printf(" ]\n", ft_printf("|%1.d| |%2.d| |%3.d| |%1.d| |%2.d| |%.1d| |%.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%1.d| |%2.d| |%3.d| |%1.d| |%2.d| |%.1d| |%.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-1.5d| |%+2.4d| |%-3.d| |%-1.d| |%-2.d| |%-3.1d| |%5.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%-1.5d| |%+2.4d| |%-3.d| |%-1.d| |%-2.d| |%-3.1d| |%5.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%1.0d| |%2.1d| |%3.0d| |%1.1d| |%2.0d| |%1.1d| |%1.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%1.0d| |%2.1d| |%3.0d| |%1.1d| |%2.0d| |%1.1d| |%1.2d|\n", 5, 5, 5, 5, 5, 5, 5));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%1.1d| |%2.0d| |%3.1d| |%1.0d| |%2.1d| |%1.0d| |%0.2d|\n", 15, 300, 140, 9, 7, 15488, 203));
	printf("[%d]\n", printf("|%1.1d| |%2.0d| |%3.1d| |%1.0d| |%2.1d| |%1.0d| |%0.2d|\n", 15, 300, 140, 9, 7, 15488, 203));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%+1.1d| |%+2.0d| |%+3.1d| |%+1.0d| |%+2.1d| |%+1.0d| |%+0.2d|\n", 15, 300, 140, 9, 7, 15488, 203));
	printf("[%d]\n", printf("|%+1.1d| |%+2.0d| |%+3.1d| |%+1.0d| |%+2.1d| |%+1.0d| |%+0.2d|\n", 15, 300, 140, 9, 7, 15488, 203));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|% 1.1d| |% 2.0d| |% 3.1d| |% 1.0d| |% 2.1d| |% 1.0d| |% 0.2d|\n", 15, 4, 3, 9, 7, 1, 0));
	printf("[%d]\n", printf("|% 1.1d| |% 2.0d| |% 3.1d| |% 1.0d| |% 2.1d| |% 1.0d| |% 0.2d|\n", 15, 4, 3, 9, 7, 1, 0));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%+1.1d| |%+2.0d| |%+3.1d| |%+1.0d| |%+2.1d| |%+1.0d| |%+0.2d|\n", 15, 300, 140, 9, 7, 15488, 203));
	printf("[%d]\n", printf("|%+1.1d| |%+2.0d| |%+3.1d| |%+1.0d| |%+2.1d| |%+1.0d| |%+0.2d|\n", 15, 300, 140, 9, 7, 15488, 203));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%1d| |%.10d| |%10d| |%-10d| |%+10d| |%+10.d| |%-10.d|\n", -4, -2, -4, -1, -5, -9, -8));
	printf("[%d]\n", printf("|%1d| |%.10d| |%10d| |%-10d| |%+10d| |%+10.d| |%-10.d|\n", -4, -2, -4, -1, -5, -9, -8));
	
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%-.10d| |%+.10d| |% .10d| |%- .5d| |%+ .5d| |%+ .10d|\n", 2, 4, 1, 5, 9, 8));
	printf("[%d]\n", printf("|%-.10d| |%+.10d| |% .10d| |%- .5d| |%+ .5d| |%+ .10d|\n", 2, 4, 1, 5, 9, 8));
	
	//printf( "ALORS = |%.1d|\n", 0);
	//ft_printf("QLORS = |%.1d|\n", 0);
	/*printf("\n");
	ft_printf("[%d]\n", ft_printf("|%-.10ld| |%+.10ld| |% .10d| |%- .5d| |%+ .5d| |%+ .10d|\n", 0, 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%-.10ld| |%+.10ld| |% .10d| |%- .5d| |%+ .5d| |%+ .10d|\n", 0, 0, 0, 0, 0, 0));
	
	//printf("\n");
	 // --- U 
	printf("---- Unsigned --- \n\n");
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", -40, -20, -4, -120, -578, -9, -8));
	printf("[%d]\n", printf("|%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", -40, -20, -4, -120, -578, -9, -8));
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%1.5u| |%1.u| |%-5.u| |%-5.3u| |%+3.u| |%-.5u| |%8.3u|\n", -4, -2, -4, -1, -5, -9, -8));
	printf("[%d]\n", printf("|%1.5u| |%1.u| |%-5.u| |%-5.3u| |%+3.u| |%-.5u| |%8.3u|\n", -4, -2, -4, -1, -5, -9, -8));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("\n");
	
	ft_printf("[%d]\n", ft_printf("|%10.u| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%10.u| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 0, 0, 0, 0, 0, 0, 0));
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%1.u| |%2.u| |%3.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%1.u| |%2.u| |%3.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%-1.5u| |%+2.4u| |%-3.u| |%-1.u| |%-2.u| |%-3.1u| |%5.2u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%-1.5u| |%+2.4u| |%-3.u| |%-1.u| |%-2.u| |%-3.1u| |%5.2u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%1.0u| |%2.1u| |%3.0u| |%1.1u| |%2.0u| |%1.1u| |%1.2u|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%1.0u| |%2.1u| |%3.0u| |%1.1u| |%2.0u| |%1.1u| |%1.2u|\n", 5, 5, 5, 5, 5, 5, 5));
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%1.1u| |%2.0u| |%3.1u| |%1.0u| |%2.1u| |%1.0u| |%0.2u|\n", 15, 300, 140, 9, 7, 15488, 203));
	printf("[%d]\n", printf("|%1.1u| |%2.0u| |%3.1u| |%1.0u| |%2.1u| |%1.0u| |%0.2u|\n", 15, 300, 140, 9, 7, 15488, 203));
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%1u| |%.10u| |%10u| |%-10u| |%+10u| |%+10.u| |%-10.u|\n", -4, -2, -4, -1, -5, -9, -8));
	printf("[%d]\n",printf("|%1u| |%.10u| |%10u| |%-10u| |%+10u| |%+10.u| |%-10.u|\n", -4, -2, -4, -1, -5, -9, -8));
	printf("\n");
	/*ft_printf("[%d]\n", ft_printf("|% .10lu| |%-.10u| |%+.10u| |% .10u| |%- .5u| |%+ .5u| |%+ .10u|\n", 4, 2, 4, 1, 5, 9, 8));
	printf("[%d]\n", printf("|% .10lu| |%-.10u| |%+.10u| |% .10u| |%- .5u| |%+ .5u| |%+ .10u|\n", 4, 2, 4, 1, 5, 9, 8));
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%.10lu| |%-.10u| |%+.10u| |%.10u| |%-.5u| |%+.5u| |%+.10u|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%.10lu| |%-.10u| |%+.10u| |%.10u| |%-.5u| |%+.5u| |%+.10u|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%10.lu| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 4, 2, 4, 1, 5, 9, 8));
	printf("[%d]\n", printf("|%10.lu| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 4, 2, 4, 1, 5, 9, 8));
	/*
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.x|\n", 5, 5, 5, 5, 5));
	printf("%d\n", printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%01.o| |%02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("%d\n", printf("|%01.o| |%02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("\n");
    ft_printf("%d\n", ft_printf("|%#01.o| |%#02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
    printf("%d\n", printf("|%#01.o| |%#02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("\n");
    ft_printf("[%d]\n", ft_printf("|%-.1o| |%-.2o|\n", 5, 5));
	printf("[%d]\n", printf("|%-.1o| |%-.2o|\n", 5, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%5.o| |%-.2o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0));
	printf("[%d]\n", printf("|%5.o| |%-.2o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#0-10o| |%#0+10o| |%#0+10.o| |%#0-10.o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#0-10o| |%#0+10o| |%#0+10.o| |%#0-10.o|\n", 0, 0, 0, 0, 0));
	//ft_printf("%d\n", ft_printf("|%#0-10x| |%#0+10x| |%#0+10.x| |%#0-10.x|\n", 0, 0, 0, 0, 0));
	//printf("%d\n", printf("|%#0-10x| |%#0+10x| |%#0+10.x| |%#0-10.x|\n", 0, 0, 0, 0, 0));
	ft_printf("%d\n", ft_printf("|%-.2o| |%5.o| |%-5.o|\n", 5, 0, 0));
	printf("%d\n", printf("|%-.2o| |%5.o| |%-5.o|\n", 5, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 300, 140, 9, 7));
	printf("%d\n", printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 300, 140, 9, 7));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o|\n", 125, -78, 58, 8, 48));
	printf("%d\n", printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o|\n",  125, -78, 58, 8, 48));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%-3.1o| |%5.2o| |%+1.0o| |%+0.2o|\n", 1, 0, 15488, 203));
	printf("%d\n", printf("|%-3.1o| |%5.2o| |%+1.0o| |%+0.2o|\n", 1, 0, 15488, 203));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 3, 1, 9, 7));
	printf("%d\n", printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 3, 1, 9, 7));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o| \n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#0+10.o| |%#0-10.o| |%+1.0o| |%+0.2o|\n", 9, 8, 15, 9));
	printf("%dn", printf("|%#0+10.o| |%#0-10.o| |%+1.0o| |%+0.2o|\n", 9, 8, 15, 9));
	printf("\n");
	ft_printf("%d\n", ft_printf("|% .10lo| |%-.10o| |%+.10o| |% .10o| |%- .5o|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|% .10lo| |%-.10o| |%+.10o| |% .10o| |%- .5o|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.lo| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|%10.lo| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%5.o| |%-5.o| |%+ .5o| |%+ .10o|\n", 9, 8, 15, 15));
	printf("[%d]\n", printf("|%5.o| |%-5.o| |%+ .5o| |%+ .10o|\n", 9, 8, 15, 15));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 5, 5, 5, 5, 5));
	printf("[%d]\n", printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("2|%#01.o| |%#02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("[%d]\n", printf("2|%#01.o| |%#02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	ft_printf("[%d]\n", ft_printf("|%.1o| |%.2o| |%-.1o| |%-.2o|\n", 60, -47, 5, 5));
	printf("[%d]\n", printf("|%.1o| |%.2o| |%-.1o| |%-.2o|\n", 60, -47, 5, 5));
	printf("\n\n\n\n\n\n"); 
    ft_printf("[%d]\n", ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 0, 0, 0, 0, 0));
    printf("[%d]\n", printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o|\n", 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o|\n", 0, 0, 0, 0, 0));
	printf("\n");

	ft_printf("[%d]\n", ft_printf("|%5.o| |%-.2o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0));
	printf("[%d]\n", printf("|%5.o| |%-.2o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 0, 0, 0, 0, 0));
	printf("[%d]\n", printf("|%#01x| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 0, 0, 0, 0, 0));
	ft_printf("[%d]\n", ft_printf("|%#0+10.o| |%#0-10.o| |%5.o| |%-5.o|\n", 0, 0, 0, 0));
	printf("[%d]\n", printf("|%#0+10.o| |%#0-10.o| |%5.o| |%-5.o|\n", 0, 0, 0, 0));
	ft_printf("[%d]\n", ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 300, 140, 9, 7));
	printf("[%d]\n", printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 300, 140, 9, 7));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o|\n", 125, -78, 58, 8, 48));
	printf("[%d]\n", printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o|\n",  125, -78, 58, 8, 48));
	ft_printf("[%d]\n", ft_printf("|%-3.1o| |%5.2o| |%+1.0o| |%+0.2o|\n", 1, 0,  15488, 203));
	printf("[%d]\n", printf("|%-3.1o| |%5.2o| |%+1.0o| |%+0.2o|\n", 1, 0,  15488, 203));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 3, 1, 9, 7));
	printf("[%d]\n", printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 3, 1, 9, 7));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("3|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 4, 2, 4, 1, 5));
	printf("[%d]\n", printf("3|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 4, 2, 4, 1, 5));
	ft_printf("[%d]\n", ft_printf("|%#0+10.o| |%#0-10.o| |%+1.0o| |%+0.2o|\n", 9, 8, 15, 9));
	printf("[%d]\n", printf("|%#0+10.o| |%#0-10.o| |%+1.0o| |%+0.2o|\n", 9, 8, 15, 9));
	printf("\n");
	/*ft_printf("[%d]\n", ft_printf("|% .10lo| |%-.10o| |%+.10o| |% .10o| |%- .5o|\n", 4, 2, 4, 1, 5));
	printf("[%d]\n", printf("|% .10lo| |%-.10o| |%+.10o| |% .10o| |%- .5o|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%10.lo| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 4, 2, 4, 1, 5));
	printf("[%d]\n", printf("|%10.lo| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 4, 2, 4, 1, 5));
	ft_printf("[%d]\n", ft_printf("|%5.o| |%-5.o| |%+ .5o| |%+ .10o|\n", 9, 8, 9, 8));
	printf("[%d]\n", printf("|%5.o| |%-5.o| |%+ .5o| |%+ .10o|\n", 9, 8, 9, 8));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%#0-10o| |%-.1o| |%-.2o|\n", 0, 5, 5));
	printf("[%d]\n", printf("|%#0-10o| |%-.1o| |%-.2o|\n", 0, 5, 5));
	ft_printf("[%d]\n", ft_printf("|% .o|\n", 0));
	printf("[%d]\n", printf("|% .o|\n", 0));
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%.o|\n", 0));
	printf("[%d]\n", printf("|%.o|\n", 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.x|\n", 5, 5, 5, 5, 5));
	printf("%d\n", printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%01.o| |%02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("%d\n", printf("|%01.o| |%02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%.1o| |%.2o| |%#.1o| |%#.2o|\n", 60, -47, 60, -47));
	printf("%d\n", printf("|%.1o| |%.2o| |%#.1o| |%#.2o|\n", 60, -47, 60, -47));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.o| |%#02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("%d\n", printf("|%#01.o| |%#02.o| |%03.o| |%1.o| |%2.o|\n", -45, 20, 96000, 2, -1));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%5.o| |%-.2o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0));
	printf("%d\n", printf("|%5.o| |%-.2o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("-----|%#0+10.o| |%#0-10.o| |%5.o| |%-5.o|\n", 0, 0, 0, 0));
	printf("%d\n", printf("-----|%#0+10.o| |%#0-10.o| |%5.o| |%-5.o|\n", 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#01x| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 0, 0, 0, 0, 0));
	printf("\n\n\n\n\n\n\n");
	ft_printf("%d\n", ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 300, 140, 9, 7));
	printf("%d\n", printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 300, 140, 9, 7));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o|\n", 125, -78, 58, 8, 48));
	printf("%d\n", printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o|\n",  125, -78, 58, 8, 48));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%-3.1o| |%5.2o| |%+1.0o| |%+0.2o|\n", 1, 0, 15488, 203));
	printf("%d\n", printf("|%-3.1o| |%5.2o| |%+1.0o| |%+0.2o|\n", 1, 0, 15488, 203));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 3, 1, 9, 7));
	printf("%d\n", printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o|\n", 15, 3, 1, 9, 7));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#0+10.o| |%#0-10.o| |%+1.0o| |%+0.2o|\n", 9, 8, 15, 9));
	printf("%d\n", printf("|%#0+10.o| |%#0-10.o| |%+1.0o| |%+0.2o|\n", 9, 8, 15, 9));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#0+10.o|\n", 9));
	printf("%d\n", printf("|%#0+10.o|\n", 9));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.o|\n", -45));
	printf("%d\n", printf("|%#01.o|\n", -45));
	printf("\n");
	
	// --- X
	/*printf("---- Hexa ----\n\n");	
	ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 5, 5, 5, 5, 5, 5, 5);
	printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 5, 5, 5, 5, 5, 5, 5);
	
	printf("\n");
	ft_printf("|%#01.x| |%#02.x| |%03.x| |%1.x| |%2.x| |%.1x| |%.2x|\n", -45, 20, 96000, 2, -1, 60, -47);
	printf("|%#01.x| |%#02.x| |%03.x| |%1.x| |%2.x| |%.1x| |%.2x|\n", -45, 20, 96000, 2, -1, 60, -47);
	
	printf("\n");
	ft_printf("|%#01.X| |%#02.X| |%03.X| |%1.X| |%2.X| |%.1X| |%.2X|\n", -45, 20, 96000, 2, -1, 60, -47);
	printf("|%#01.X| |%#02.X| |%03.X| |%1.X| |%2.X| |%.1X| |%.2X|\n", -45, 20, 96000, 2, -1, 60, -47);
	
	printf("\n");
	ft_printf("|%#01.x| |%#02.x| |%-#03.x| |%#1.x| |%#2.x| |%#-.1x| |%#-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%#01.x| |%#02.x| |%-#03.x| |%#1.x| |%#2.x| |%#-.1x| |%#-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("\n");
	ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	
	printf("\n");
	
	ft_printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("\n");
	ft_printf("|%#01x| |%#0.10x| |%#010x| |%#0-10x| |%#0+10x| |%#0+10.x| |%#0-10.x|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("|%#01x| |%#0.10x| |%#010x| |%#0-10x| |%#0+10x| |%#0+10.x| |%#0-10.x|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("\n");
	
	
	ft_printf("|%+1.1x| |%+2.0x| |%+3.1x| |%+1.0x| |%+2.1x| |%+1.0x| |%+0.2x|\n", 15, 300, 140, 9, 7, 15488, 203);
	printf("|%+1.1x| |%+2.0x| |%+3.1x| |%+1.0x| |%+2.1x| |%+1.0x| |%+0.2x|\n", 15, 300, 140, 9, 7, 15488, 203);
	
	printf("\n");
	
	ft_printf("|% .10lx| |%-.10x| |%+.10x| |% .10x| |%- .5x| |%+ .5x| |%+ .10x|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("|% .10lx| |%-.10x| |%+.10x| |% .10x| |%- .5x| |%+ .5x| |%+ .10x|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("\n");
	
	ft_printf("|%10.lx| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("|%10.lx| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 4, 2, 4, 1, 5, 9, 8);

	printf("\n"); 
	 // --- O*/
	/*printf("---- Octal ----\n\n");		
	
	ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.x| |%-.1o| |%-.2o|\n", 5, 5, 5, 5, 5, 5, 5);
	printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o| |%-.1o| |%-.2o|\n", 5, 5, 5, 5, 5, 5, 5);
			
	printf("\n");
	ft_printf("|%01.o| |%02.o| |%03.o| |%1.o| |%2.o| |%.1o| |%.2o|\n", -45, 20, 96000, 2, -1, 60, -47);
	printf("|%01.o| |%02.o| |%03.o| |%1.o| |%2.o| |%.1o| |%.2o|\n", -45, 20, 96000, 2, -1, 60, -47);
	
	printf("\n");
	ft_printf("|%#01.O| |%#02.O| |%03.O| |%1.O| |%2.O| |%.1O| |%.2O|\n", -45, 20, 96000, 2, -1, 60, -47);
	printf("|%#01.O| |%#02.O| |%03.O| |%1.O| |%2.O| |%.1O| |%.2O|\n", -45, 20, 96000, 2, -1, 60, -47);
	
	printf("\n");
	ft_printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%#01.o| |%02.o| |%-03.o| |%1.o| |%2.o| |%-.1o| |%-.2o|\n", 0, 0, 0, 0, 0, 0, 0);
	
	printf("\n");
	ft_printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o| |%5.o| |%-.2o|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%1.o| |%.1o| |%-1.o| |%-.1o| |%.3o| |%5.o| |%-.2o|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("\n");
	
	
	ft_printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o| |%5.o| |%-5.o|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%10.o| |%-10.o| |%10.o| |%10.o| |%-10.o| |%5.o| |%-5.o|\n", 0, 0, 0, 0, 0, 0, 0);
	
	printf("\n");
	
	ft_printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o| |%#0+10.o| |%#0-10.o|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%#01x| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o| |%#0+10.o| |%#0-10.o|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("\n");
	ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o| |%+1.0o| |%+0.2o|\n", 15, 300, 140, 9, 7, 15488, 203);
	printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o| |%+1.0o| |%+0.2o|\n", 15, 300, 140, 9, 7, 15488, 203);
	printf("\n");
	
	ft_printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o| |%-3.1o| |%5.2o|\n", 125, -78, 58, 8, 48, 1, 0);
	printf("|%-1.5o| |%+2.4o| |%-3.o| |%-1.o| |%-2.o| |%-3.1o| |%5.2o|\n",  125, -78, 58, 8, 48, 1, 0);
	
	printf("\n");
	
	ft_printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o| |%+1.0o| |%+0.2o|\n", 15, 3, 1, 9, 7, 15, 9);
	printf("|%+1.1o| |%+2.0o| |%+3.1o| |%+1.0o| |%+2.1o| |%+1.0o| |%+0.2o|\n", 15, 3, 1, 9, 7, 15, 9);
	
	printf("\n");
	ft_printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o| |%#0+10.o| |%#0-10.o|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("|%#01o| |%#0.10o| |%#010o| |%#0-10o| |%#0+10o| |%#0+10.o| |%#0-10.o|\n", 4, 2, 4, 1, 5, 9, 8);
	
	printf("\n");
	
	ft_printf("|% .10lo| |%-.10o| |%+.10o| |% .10o| |%- .5o| |%+ .5o| |%+ .10o|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("|% .10lo| |%-.10o| |%+.10o| |% .10o| |%- .5o| |%+ .5o| |%+ .10o|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("\n");
	
	ft_printf("|%10.lo| |%-10.o| |%10.o| |%10.o| |%-10.o| |%5.o| |%-5.o|\n", 4, 2, 4, 1, 5, 9, 8);
	printf("|%10.lo| |%-10.o| |%10.o| |%10.o| |%-10.o| |%5.o| |%-5.o|\n", 4, 2, 4, 1, 5, 9, 8);
	
	printf("\n");
	
	ft_printf("%d\n", ft_printf("|%x|\n", (unsigned long long)-1248759650));
	printf("%d\n", printf("|%x|\n", (unsigned long long)-1248759650));
	printf("\n");
	//ft_printf("%d\n", ft_printf("|%9hhx|\n", (unsigned long)-1248759650));
	//printf("%d\n", printf("|%9hhx|\n", (unsigned long)-1248759650));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%.0x|\n", 0));
	printf("%d\n", printf("|%.0x|\n", 0));
	printf("\n");
	//ft_printf("%d\n", ft_printf("|%01hhX|\n", (unsigned char)0));
	//printf("%d\n", printf("|%01hhX|\n", (unsigned char)0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|t %#7.5X|\n", 0xab));
	printf("%d\n", printf("|t %#7.5X|\n", 0xab));
	ft_printf("%d\n", ft_printf("|%0006.2x|\n", 0x876));
	printf("%d\n", printf("|%0006.2x|\n", 0x876));
	printf("\n");
	//ft_printf("%d\n", ft_printf("|%lX|\n", 0xff11ff11ff1));
	//printf("%d\n", printf("|%lX|\n", 0xff11ff11ff1));
	printf("\n");
	ft_printf("%d\n", ft_printf("|toto %0##0.4X%#4.2xet c'est fini|\n", 0x037a, 0x9e));
	printf("%d\n", printf("|toto %0##0.4X%#4.2xet c'est fini|\n", 0x037a, 0x9e));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#.X|  \n", 0, 0));
	printf("%d\n", printf("|%#.X|  \n", 0, 0));
	ft_printf("%d\n", ft_printf("|%x|\n", 0));
	printf("%d\n", printf("|%x|\n", 0));
	ft_printf("%d\n", ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("%d\n", printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 5, 5, 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.x| |%#02.x| |%03.x|\n", -45, 20, 96000));
	printf("%d\n", printf("|%#01.x| |%#02.x| |%03.x|\n", -45, 20, 96000));
	printf("\n");
	ft_printf("%d\n" ,ft_printf("|%1.X| |%2.X| |%.1X| |%.2X|\n", 2, -1, 60, -47));
	printf("%d\n", printf("|%1.X| |%2.X| |%.1X| |%.2X|\n", 2, -1, 60, -47));
	printf("\n");
	//ft_printf("%d\n", ft_printf("|%llX|\n", (unsigned long long)0xaaffee11996677));
	//printf("%d\n", printf("|%llX|\n", (unsigned long long)0xaaffee11996677));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 0, 0, 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#0+10.x| |%#0-10.x|\n", 9, 8));
	printf("%d\n", printf("|%#0+10.x| |%#0-10.x|\n", 9, 8));
	printf("\n");
	//ft_printf("%d\n", ft_printf("|%+1.1x| |%+2.0lx| |%+3.1x| |%+1.0x| |%+2.1x| |%+1.0x| |%+0.2x|\n", 300, 922337203685477, 140, 9, 7, 15488, 20345));
//	printf("%d\n", printf("|%+1.1x| |%+2.0lx| |%+3.1x| |%+1.0x| |%+2.1x| |%+1.0x| |%+0.2x|\n", 300, 922337203685477, 140, 9, 7, 15488, 20345));
	printf("\n");
//	ft_printf("%d\n", ft_printf("|% .20lx| |%-.10x| |%+.10x| |% .10x| |%- .5x| |%+ .5x| |%+ .10x|\n", 922337203685477, 2, 4, 1, 5, 9, 8));
//	printf("%d\n", printf("|% .20lx| |%-.10x| |%+.10x| |% .10x| |%- .5x| |%+ .5x| |%+ .10x|\n", 922337203685477, 2, 4, 1, 5, 9, 8));
//	ft_printf("%d\n", ft_printf("|%10.lx| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 922337203685477, 2, 4, 1, 5, 9, 8));
//	printf("%d\n", printf("|%10.lx| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 922337203685477, 2, 4, 1, 5, 9, 8));
	printf("\n");
	ft_printf("%d\n", ft_printf("1hexa 1 %x hexa 2 %x\n", 42, -42));
	printf("%d\n", printf("1hexa 1 %x hexa 2 %x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("2hexa 1 |%   x| hexa 2 % x\n", 42, -42));
	printf("%d\n", printf("2hexa 1 |%   x| hexa 2 % x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa 1 %12x hexa 2 %12x\n", 42, -42));
	printf("%d\n", printf("4hexa 1 %12x hexa 2 %12x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa 1 |%-12x| hexa 2 |%-12x|\n", 42, -42));
	printf("%d\n", printf("4hexa 1 |%-12x| hexa 2 |%-12x|\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("5hexa 1 %0x hexa 2 %0x\n", 42, -42));
	printf("%d\n", printf("5hexa 1 %0x hexa 2 %0x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("6hexa 1 %012x hexa 2 %012x\n", 42, -42));
	printf("%d\n", printf("6hexa 1 %012x hexa 2 %012x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("7hexa 1 %-012x hexa 2 %012x\n", 42, -42));
	printf("%d\n", printf("7hexa 1 %-012x hexa 2 %012x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("9hexa 1 %+x hexa 2 %+x\n", 42, 6, -42, 6));
	printf("%d\n", printf("9hexa 1 %+x hexa 2 %+x\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("10hexa 1 %+12x hexa 2 %+12x\n", 42, 6, -42, 6));
	printf("%d\n", printf("10hexa 1 %+12x hexa 2 %+12x\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("12hexa 1 %-+5x hexa 2 %-+5x\n", 42, -42));
	printf("%d\n", printf("12hexa 1 %-+5x hexa 2 %-+5x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("13hexa 1 %-+05x hexa 2 %-+05x\n", 42, -42));
	printf("%d\n", printf("13hexa 1 %-+05x hexa 2 %-+05x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 42, -42));
	printf("%d\n", printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("15hexa 1 %.x hexa 2 %.x\n", 42, -42));
	printf("%d\n", printf("15hexa 1 %.x hexa 2 %.x\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42));
	printf("%d\n", printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42));
	ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("2hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	printf("%d\n", printf("3hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	printf("%d\n", printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	printf("%d\n", printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	printf("%d\n", printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	printf("%d\n", printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	printf("%d\n", printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	printf("%d\n", printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));
	printf("%d\n", printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));
	/*ft_printf("%d\n", ft_printf("|%#015.lx| |%025.lx| |%-035.lx| |%15.lx| |%25.lx| |%-.15lx| |%-.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#015.lx| |%025.lx| |%-035.lx| |%15.lx| |%25.lx| |%-.15lx| |%-.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#016.lx| |%#025.lx| |%035.lx| |%15.lx| |%25.lx| |%.15lx| |%.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#016.lx| |%#025.lx| |%035.lx| |%15.lx| |%25.lx| |%.15lx| |%.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018.lX| |%#028.lX| |%038.lX| |%18.lX| |%2.58lX| |%#28.5lX| |%.28lX|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018.lX| |%#028.lX| |%038.lX| |%18.lX| |%2.58lX| |%#28.5lX| |%.28lX|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018.lx| |%#028.lx| |%-#038.lx| |%#18.lx| |%#28.lx| |%#-.18lx| |%#-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018.lx| |%#028.lx| |%-#038.lx| |%#18.lx| |%#28.lx| |%#-.18lx| |%#-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018.lx| |%028.lx| |%-038.lx| |%18.lx| |%28.lx| |%-.18lx| |%-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018.lx| |%028.lx| |%-038.lx| |%18.lx| |%28.lx| |%-.18lx| |%-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%18.lx| |%-18.lx| |%15.lx sku| |%18.lx| |%-18.lx| |%28.lx| |%-28.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%18.lx| |%-18.lx| |%15.lx sku| |%18.lx| |%-18.lx| |%28.lx| |%-28.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018lx| |%#0.18lx| |%#018lx| |%#0-18lx| |%#0+18lx| |%#0+18.lx| |%#0-18.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018lx| |%#0.18lx| |%#018lx| |%#0-18lx| |%#0+18lx| |%#0+18.lx| |%#0-18.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#0+18.lx|\n", 922337203685477));
	printf("%d\n", printf("|%#0+18.lx|\n", 922337203685477));
	printf("\n");

	ft_printf("%d\n", ft_printf("|%+16.1lx| |%+26.0lx| |%+36.1lx| |%+16.0lx| |%+26.1lx| |%+16.0lx| |%+0.26lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%+16.1lx| |%+26.0lx| |%+36.1lx| |%+16.0lx| |%+26.1lx| |%+16.0lx| |%+0.26lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|% .20lx| |%-.16lx| |%+.16lx| |% .16lx| |%- .15lx| |%+ .16lx| |%+ .0lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|% .20lx| |%-.16lx| |%+.16lx| |% .16lx| |%- .15lx| |%+ .16lx| |%+ .0lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%16.lx| |%-16.lx| |%8.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%16.lx| |%-16.lx| |%8.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("1hexa 1 %lx hexa 2 %lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("1hexa 1 %lx hexa 2 %lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("2hexa 1 %   lx hexa 2 % lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("3hexa 1 %   lx hexa 2 % lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa 1 %18lx hexa 2 %18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("4hexa 1 %18lx hexa 2 %18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa 1 %-18lx hexa 2 %-18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("4hexa 1 %-18lx hexa 2 %-18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("5hexa 1 %0lx hexa 2 %0lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("5hexa 1 %0lx hexa 2 %0lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("6hexa 1 %018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("6hexa 1 %018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("7hexa 1 %-018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("7hexa 1 %-018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("9hexa 1 %+lx hexa 2 %+lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n\n", printf("9hexa 1 %+lx hexa 2 %+lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("10hexa 1 %+18lx hexa 2 %+18lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n\n", printf("10hexa 1 %+18lx hexa 2 %+18lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("12hexa 1 %-+18lx hexa 2 %-+18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("12hexa 1 %-+18lx hexa 2 %-+18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("13hexa 1 %-+018lx hexa 2 %-+018lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("13hexa 1 %-+018lx hexa 2 %-+018lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("14hexa 1 %+-18lx hexa 2 %+-18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("14hexa 1 %+-18lx hexa 2 %+-18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("15hexa 1 %.lx hexa 2 %.lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("15hexa 1 %.lx hexa 2 %.lx\n", 922337203685477, 922337203685477)); 
	printf("\n");
	ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("2hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	printf("%d\n", printf("3hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	printf("%d\n", printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	printf("%d\n", printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	printf("%d\n", printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	printf("%d\n", printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	printf("%d\n", printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	printf("%d\n", printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));
	printf("%d\n", printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42)); 
	/*ft_printf("%d\n", ft_printf("16hexa 1 %.16lx hexa 2 %.16lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("16hexa 1 %.16lx hexa 2 %.16lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.lx| |%02.lx| |%-03.lx| |%1.lx| |%2.lx| |%-.1lx| |%-.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#01.lx| |%02.lx| |%-03.lx| |%1.lx| |%2.lx| |%-.1lx| |%-.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01lx| |%#0.10lx| |%#010lx| |%#0-10lx| |%#0+10lx| |%#0+10.lx| |%#0-10.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#01lx| |%#0.10lx| |%#010lx| |%#0-10lx| |%#0+10lx| |%#0+10.lx| |%#0-10.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%+1.1lx| |%+2.0lx| |%+3.1lx| |%+1.0lx| |%+2.1lx| |%+1.0lx| |%+0.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%+1.1lx| |%+2.0lx| |%+3.1lx| |%+1.0lx| |%+2.1lx| |%+1.0lx| |%+0.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|% .10lx| |%-.10lx| |%+.10lx| |% .10lx| |%- .5lx| |%+ .5lx| |%+ .10lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|% .10lx| |%-.10lx| |%+.10lx| |% .10lx| |%- .5lx| |%+ .5lx| |%+ .10lx|\n", 922337203685477, 922337203685477 , 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.lx| |%-10.lx| |%10.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%10.lx| |%-10.lx| |%10.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	ft_printf("%d\n", ft_printf("|%#015.lx| |%025.lx| |%-035.lx| |%15.lx| |%25.lx| |%-.15lx| |%-.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#015.lx| |%025.lx| |%-035.lx| |%15.lx| |%25.lx| |%-.15lx| |%-.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#016.lx| |%#025.lx| |%035.lx| |%15.lx| |%25.lx| |%.15lx| |%.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#016.lx| |%#025.lx| |%035.lx| |%15.lx| |%25.lx| |%.15lx| |%.25lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018.lX| |%#028.lX| |%038.lX| |%18.lX| |%2.58lX| |%#28.5lX| |%.28lX|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018.lX| |%#028.lX| |%038.lX| |%18.lX| |%2.58lX| |%#28.5lX| |%.28lX|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018.lx| |%#028.lx| |%-#038.lx| |%#18.lx| |%#28.lx| |%#-.18lx| |%#-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018.lx| |%#028.lx| |%-#038.lx| |%#18.lx| |%#28.lx| |%#-.18lx| |%#-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018.lx| |%028.lx| |%-038.lx| |%18.lx| |%28.lx| |%-.18lx| |%-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018.lx| |%028.lx| |%-038.lx| |%18.lx| |%28.lx| |%-.18lx| |%-.28lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%18.lx| |%-18.lx| |%15.lx| |%18.lx| |%-18.lx| |%28.lx| |%-28.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%18.lx| |%-18.lx| |%15.lx| |%18.lx| |%-18.lx| |%28.lx| |%-28.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#018lx| |%#0.18lx| |%#018lx| |%#0-18lx| |%#0+18lx| |%#0+18.lx| |%#0-18.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#018lx| |%#0.18lx| |%#018lx| |%#0-18lx| |%#0+18lx| |%#0+18.lx| |%#0-18.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%+16.1lx| |%+26.0lx| |%+36.1lx| |%+16.0lx| |%+26.1lx| |%+16.0lx| |%+0.26lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%+16.1lx| |%+26.0lx| |%+36.1lx| |%+16.0lx| |%+26.1lx| |%+16.0lx| |%+0.26lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|% .20lx| |%-.16lx| |%+.16lx| |% .16lx| |%- .15lx| |%+ .16lx| |%+ .0lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|% .20lx| |%-.16lx| |%+.16lx| |% .16lx| |%- .15lx| |%+ .16lx| |%+ .0lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%16.lx| |%-16.lx| |%8.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%16.lx| |%-16.lx| |%8.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("1hexa 1 %lx hexa 2 %lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("1hexa 1 %lx hexa 2 %lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("2hexa 1 %   lx hexa 2 % lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("3hexa 1 %   lx hexa 2 % lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa 1 %18lx hexa 2 %18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("4hexa 1 %18lx hexa 2 %18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa 1 %-18lx hexa 2 %-18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("4hexa 1 %-18lx hexa 2 %-18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("5hexa 1 %0lx hexa 2 %0lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("5hexa 1 %0lx hexa 2 %0lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("6hexa 1 %018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("6hexa 1 %018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("7hexa 1 %-018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("7hexa 1 %-018lx hexa 2 %018lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("9hexa 1 %+lx hexa 2 %+lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n\n", printf("9hexa 1 %+lx hexa 2 %+lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("10hexa 1 %+18lx hexa 2 %+18lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n\n", printf("10hexa 1 %+18lx hexa 2 %+18lx\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("12hexa 1 %-+18lx hexa 2 %-+18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("12hexa 1 %-+18lx hexa 2 %-+18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("13hexa 1 %-+018lx hexa 2 %-+018lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("13hexa 1 %-+018lx hexa 2 %-+018lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("14hexa 1 %+-18lx hexa 2 %+-18lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("14hexa 1 %+-18lx hexa 2 %+-18lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("15hexa 1 %.lx hexa 2 %.lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("15hexa 1 %.lx hexa 2 %.lx\n", 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("16hexa 1 %.16lx hexa 2 %.16lx\n", 922337203685477, 922337203685477));
	printf("%d\n\n", printf("16hexa 1 %.16lx hexa 2 %.16lx\n", 922337203685477, 922337203685477));
	printf("\n"); 
	ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("2hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	printf("%d\n", printf("3hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	printf("%d\n", printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	printf("%d\n", printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	printf("%d\n", printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	printf("\n");
	ft_printf("%d\n", ft_printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	printf("%d\n", printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	printf("%d\n", printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	printf("%d\n", printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	printf("%d\n", printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	printf("\n");
	ft_printf("%d\n", ft_printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));
	printf("%d\n", printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42)); /*
	ft_printf("%d\n", ft_printf("|%#01.lx| |%02.lx| |%-03.lx| |%1.lx| |%2.lx| |%-.1lx| |%-.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#01.lx| |%02.lx| |%-03.lx| |%1.lx| |%2.lx| |%-.1lx| |%-.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01lx| |%#0.10lx| |%#010lx| |%#0-10lx| |%#0+10lx| |%#0+10.lx| |%#0-10.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%#01lx| |%#0.10lx| |%#010lx| |%#0-10lx| |%#0+10lx| |%#0+10.lx| |%#0-10.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	ft_printf("%d\n", ft_printf("|%+1.1lx| |%+2.0lx| |%+3.1lx| |%+1.0lx| |%+2.1lx| |%+1.0lx| |%+0.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%+1.1lx| |%+2.0lx| |%+3.1lx| |%+1.0lx| |%+2.1lx| |%+1.0lx| |%+0.2lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|% .10lx| |%-.10lx| |%+.10lx| |% .10lx| |%- .5lx| |%+ .5lx| |%+ .10lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|% .10lx| |%-.10lx| |%+.10lx| |% .10lx| |%- .5lx| |%+ .5lx| |%+ .10lx|\n", 922337203685477, 922337203685477 , 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.lx| |%-10.lx| |%10.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("%d\n", printf("|%10.lx| |%-10.lx| |%10.lx| |%10.lx| |%-10.lx| |%5.lx| |%-5.lx|\n", 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477, 922337203685477));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.lx|\n", 922337203685477));
	printf("%d\n", printf("|%10.lx|\n", 922337203685477));
	ft_printf("%d\n", ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x|\n", 5, 5, 5, 5, 5));
	printf("%d\n", printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x|\n", 5, 5, 5, 5, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%.1x| |%.2x| |%-.1x| |%-.2x|\n", -60, -47, 5, 5));
	printf("%d\n", printf("|%.1x| |%.2x| |%-.1x| |%-.2x|\n", -60, -47, 5, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.x| |%#02.x| |%03.x| |%1.x| |%2.x|\n", -45, 20, 96000, 2, -1));
	printf("%d\n", printf("|%#01.x| |%#02.x| |%03.x| |%1.x| |%2.x|\n", -45, 20, 96000, 2, -1));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.X| |%#02.X| |%03.X| |%1.X| |%2.X|\n", -45, 20, 96000, 2, -1));
	printf("%d\n", printf("|%#01.X| |%#02.X| |%03.X| |%1.X| |%2.X|\n", -45, 20, 96000, 2, -1));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%.1X| |%.2X| |%#-.1x| |%#-.2x|\n", -60, -47, 0, 0));
	printf("%d\n", printf("|%.1X| |%.2X| |%#-.1x| |%#-.2x|\n", -60, -47, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.x| |%#02.x| |%-#03.x| |%#1.x| |%#2.x|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#01.x| |%#02.x| |%-#03.x| |%#1.x| |%#2.x|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%-.1x| |%-.2x| |%5.x| |%-5.x|\n", 0, 0, 0, 0));
	printf("%d\n", printf("|%-.1x| |%-.2x| |%5.x| |%-5.x|\n", 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x|\n", 0, 0, 0, 0, 0));
	printf("%d\n", printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x|\n", 0, 0, 0, 0, 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#01x| |%#0.10x| |%#010x| |%#0-10x| |%#0+10x|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|%#01x| |%#0.10x| |%#010x| |%#0-10x| |%#0+10x|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf(" |%#0+10.x| |%#0-10.x| |%+1.0x| |%+0.2x|\n", 9, 8, 15488, 203));
	printf("%d\n", printf(" |%#0+10.x| |%#0-10.x| |%+1.0x| |%+0.2x|\n", 9, 8, 15488, 203));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%+1.1x| |%+2.0x| |%+3.1x| |%+1.0x| |%+2.1x|\n", 15, 300, 140, 9, 7));
	printf("%d\n", printf("|%+1.1x| |%+2.0x| |%+3.1x| |%+1.0x| |%+2.1x|\n", 15, 300, 140, 9, 7));
	printf("\n");	
	/*ft_printf("%d\n", ft_printf("|% .10lx| |%-.10x| |%+.10x| |% .10x| |%- .5x|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|% .10lx| |%-.10x| |%+.10x| |% .10x| |%- .5x|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%10.lx| |%-10.x| |%10.x| |%10.x| |%-10.x|\n", 4, 2, 4, 1, 5));
	printf("%d\n", printf("|%10.lx| |%-10.x| |%10.x| |%10.x| |%-10.x|\n", 4, 2, 4, 1, 5));
	printf("\n");
	ft_printf("%d\n", ft_printf(" |%5.x| |%-5.x| |%+ .5x| |%+ .10x|\n", 9, 8, 9, 8));
	printf("%d\n", printf(" |%5.x| |%-5.x| |%+ .5x| |%+ .10x|\n", 9, 8, 9, 8));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%x|\n", 0));
	printf("%d\n", printf("|%x|\n", 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#X|\n", 0));
	printf("%d\n", printf("|%#X|\n", 0));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%#x|\n", 0x78aa));
	printf("%d\n", printf("|%#x|\n", 0x78aa));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%.x|\n", 12));
	printf("%d\n", printf("|%.x|\n", 12));
	printf("\n");
	ft_printf("%d\n", ft_printf("|%0#x|\n", 0));
	printf("%d\n", printf("|%0#x|\n", 0));
	printf("\n");
	//ft_printf("%d\n", ft_printf("|%#0+13.lx|\n", 922337203685477));
	//printf("%d\n", printf("|%#0+13.lx|\n", 922337203685477));
	printf("\n"); */
    return (0);
}


