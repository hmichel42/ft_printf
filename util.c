/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   util.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/17 17:50:49 by hmichel      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/23 03:37:02 by hmichel     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"

int             ft_pow(int nb, int pow)
{
    if (pow == 0)
        return (1);
    else
        return (nb * ft_pow(nb, pow - 1));
}

int				ft_putchar_add(char c)
{
	write(1, &c, 1);
	return (1);
}

char            *ft_itoa_base(int value, int base)
{
    int         i;
    char        *nbr;
    int         neg;

    i = 1;
    neg = 0;
    if (value < 0)
    {
        if (base == 10)
            neg = 1;
        value *= -1;
    }
    while (ft_pow(base, i) - 1 < value)
        i++;
    if (!(nbr = (char *)malloc(sizeof(nbr) * i)))
        return (NULL);
    nbr[i + neg] = '\0';
    while (i-- > 0)
    {
        nbr[i + neg] = (value % base) + (value % base > 9 ? 'a' - 10 : '0');
        value = value / base;
    }
    if (neg)
        nbr[0] = '-';
    return (nbr);
}

int		ft_atoi_2(char const *str)
{
	int		i;
	int		nbr;

	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || ft_isalpha(str[i])
			|| str[i] == '%' || str[i] == '0' || str[i] == '+' || str[i] == '-'
			|| str[i] == '#' || str[i] == 'l' || str[i] == 'h' || str[i] == 'L')
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + str[i++] - '0';
	return (nbr);
}

char    *ft_strcaps(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        while (str[i] >= 'a' && str[i] <='z')
        {
            str[i] -= 32;
            i++;
        }
        i++;
    }
    return (str);
}