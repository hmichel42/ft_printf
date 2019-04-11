/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <maegaspa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/14 17:39:31 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/20 04:50:28 by maegaspa    ###    #+. /#+    ###.fr     */
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