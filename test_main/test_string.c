#include "../includes/printf.h"
#include <stdio.h>

int     main()
{
	// ---
	printf("---- Chaines de chararacteres ----\n\n");
	ft_printf("[%d]\n", ft_printf("|%01.s| |%02.s| |%03.s| |%1.s| |%2.s| |%.1s| |%.2s|\n", "aa", "bb", "cc", "dd", "ee", "ff", "dd"));
	printf("[%d]\n", printf("|%01.s| |%02.s| |%03.s| |%1.s| |%2.s| |%.1s| |%.2s|\n", "aa", "bb", "cc", "dd", "ee", "ff", "dd"));
	
	printf("\n");
	ft_printf("[%d]\n", ft_printf("|%01.s| |%02.s| |%03.s| |%1.s| |%2.s| |%.1s| |%.20s|\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("[%d]\n", printf("|%01.s| |%02.s| |%03.s| |%1.s| |%2.s| |%.1s| |%.20s|\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("\n");
	
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
	printf("\n");
	
	return (0);
}
