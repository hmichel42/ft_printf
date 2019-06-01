/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wp_utreat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <maegaspa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/15 18:18:37 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/22 15:08:46 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"

int             wp_utreat(t_flag flag, long long dig)
{
    int     putspace;
    int     i;
    int     j;
	int		nb_char;
    char    *nbr;

    putspace = 0;
    nb_char = 0;
    i = -1;
    j = 0;
    nbr = nbr_dig(dig, flag, nbr);
    putspace = flag.width - ft_strlen(nbr);
    if (flag.minus > 0 && flag.precision <= 1 && (!(dig == 0)))
        ft_putstr(nbr);
    if (flag.width > 0 && dig == 0 && flag.point && !flag.precision)
    {
        putspace = flag.width;
        while (++i < putspace)
        {    
            ft_putchar(' ');
            nb_char++;
        }
    }
    if (flag.precision > 0 && flag.point && flag.zero)
    {
        putspace = flag.precision - ft_strlen(nbr);
        if (dig == 0)
            putspace = flag.precision;
        i = -1;
        if ((size_t)flag.precision > ft_strlen(nbr))
        {
            while (++i < putspace)
            {
                ft_putchar('0');
                nb_char++;
            }
        }
    }
    if (!flag.width && flag.point && flag.precision && !flag.minus && !flag.zero && (!(dig == 0)))
    {
        putspace = flag.precision - ft_strlen(nbr);
        while (++i < putspace)
        {
            ft_putchar('0');
            nb_char++;
        }
    }
    if (flag.precision > 0 && dig == 0 && flag.point && !flag.width && !flag.zero)
    {
        putspace = flag.precision;
        i = -1;
        while (++i < putspace)
        {    
            ft_putchar('0');
            nb_char++;
        }
    }
    if (flag.width > 0 && !flag.point)
    {
        putspace = flag.width - ft_strlen(nbr);
        if (dig == 0)
            putspace = flag.width;
        if ((size_t)flag.width > ft_strlen(nbr) && flag.minus)
        {
            while (++i < putspace)
            {
                ft_putchar(' ');
                nb_char++;
            }
        }
        putspace = flag.width - ft_strlen(nbr);
        if (dig == 0)
            putspace = flag.width;
        if ((size_t)flag.width > ft_strlen(nbr) && !flag.minus)
        {
            while (++i < putspace)
            {
                if (flag.point > 0 || flag.zero > 0)
                {
                    ft_putchar('0');
                    nb_char++;
                }
                else
                {
                    ft_putchar(' ');
                    nb_char++;
                }
            }        
        }
    }
    if (flag.width > 0 && flag.point > 0 && !flag.precision && (!(dig == 0)))
    {
        if ((size_t)flag.width > ft_strlen(nbr) && !flag.minus)
        {
            while (++i < putspace)
            {
                ft_putchar(' ');
                nb_char++;
            }        
        }
    }
    if (!flag.width && flag.minus > 0 && flag.point > 0 && flag.precision > 0)
    {
        putspace = flag.precision - ft_strlen(nbr);    
        if ((size_t)flag.precision > ft_strlen(nbr))
        {
            while (++i < putspace)
            {
                ft_putchar('0');
                nb_char++;
            }
        }
    }
	if (flag.width && flag.point && flag.precision)
	{
		putspace = flag.width - flag.precision; //- ft_strlen(nbr);
		if ((size_t)flag.width > ft_strlen(nbr))
		{
			while (++i < putspace)
			{
				ft_putchar(' ');
				nb_char++;
			}
		}
		putspace = flag.precision - ft_strlen(nbr);
		i = -1;
		if ((size_t)flag.precision > ft_strlen(nbr))
        {
            while (++i < putspace)
            {
				ft_putchar('0');
                nb_char++;
            }
		}
	}
    if (flag.width > 0 && flag.point > 0 && !flag.precision && flag.minus > 0)
    {
        putspace = flag.width - ft_strlen(nbr);
        if ((size_t)flag.width > ft_strlen(nbr))
        {
            while (++i < putspace)
            {
                ft_putchar(' ');
				nb_char++;
            }        
        }
    }
    if (flag.width > 0 && dig == 0 && flag.point && !flag.precision)
        return(ft_strlen(nbr) + nb_char);
    else if (flag.precision > 0 && dig == 0 && flag.point && !flag.width)
        return(ft_strlen(nbr) + nb_char);
    else if (dig == 0 && flag.point && !flag.precision && !flag.width)
        return (0);
    else if (dig == 0 && !flag.precision && !flag.point)
        return (ft_strlen(nbr) + nb_char);
    else if (flag.minus > 0 && flag.precision <= 1 && (!(dig == 0)))
        return (ft_strlen(nbr) + nb_char);
    else
        ft_putstr(nbr);
    if (flag.width > 0 && flag.point > 0 && !flag.precision && flag.minus > 0)
    {
        putspace = flag.width - ft_strlen(nbr);
        if ((size_t)flag.width > ft_strlen(nbr))
        {
            while (++i < putspace)
            {
                ft_putchar(' ');
				nb_char++;
            }        
        }
    }
    return(ft_strlen(nbr) + nb_char);
}