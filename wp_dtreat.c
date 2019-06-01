/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wp_dtreat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/11 16:42:08 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/27 23:24:08 by hmichel     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"

int         is_minus(char *len)
{
    if (len[0] == '-')
        return (1);
    return(0);
}


int			wp_dtreat(t_flag flag, long long dig)
{
    int     putspace;
    int     i;
    int     nb_char;
    char    *len;

	nb_char = 0;
    putspace = 0;
    i = -1;
    len = nbr_dig(dig, flag, len);
    if (flag.minus > 0 && flag.precision < 1 && (!(dig == 0)))
        ft_putstr(len);
    putspace = flag.width - ft_strlen(len);
    if (flag.plus > 0 && ((flag.width > 0 && flag.point > 0) || (!flag.width && flag.point > 0)) && dig >= 0)
    {
        ft_putchar('+');
        nb_char++;
    }
    if (flag.space > 0 && !flag.plus && flag.width <= ft_strlen(len))
    {
        ft_putchar(' ');
        nb_char++;
    }
    if (dig == 0 && flag.width & flag.point)
    {
        if ((size_t)flag.width > 0)
        {
            while (++i < (size_t)flag.width)
            {
                ft_putchar(' ');
                nb_char++;
            }
        }
    }
    if (flag.width > 0 && !flag.precision)
    {
		if (dig == 0)
			putspace = flag.width;
        if ((size_t)flag.width > ft_strlen(len))
        {
            while (++i < putspace)
            {
                if (flag.zero > 0 && !flag.point)
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
    if (flag.point > 0 && !flag.width)
    {
        putspace = flag.precision - ft_strlen(len);
        if (is_minus(len) == 1)
        {
            len[0] = len[1];
            len[1] = '\0';
            ft_putchar('-');
            nb_char++;
        }
        if (dig < 0)
            putspace += 1;
        if ((size_t)flag.precision > ft_strlen(len))
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
		putspace = flag.width - flag.precision;
		if (flag.minus > 0 && (!(dig < 0)) && flag.width > flag.precision)
		{	
			ft_putstr(len);
			putspace = flag.width;
		}
        if (is_minus(len) == 1)
        {
            len[0] = len[1];
            len[1] = '\0';
            ft_putchar('-');
            nb_char++;
        }
        if (flag.plus > 0 || flag.minus > 0)
            putspace -= 1;
        if (len[0] == '0')
            len[0] = '\0';
		if ((size_t)flag.width > ft_strlen(len) && dig > 0)
		{
			while (++i < putspace)
			{
				ft_putchar(' ');
				nb_char++;
			}
		}
		putspace = flag.precision - ft_strlen(len);
        i = -1;
		if ((size_t)flag.precision > ft_strlen(len))
        {
            while (++i < putspace)
            {
				ft_putchar('0');
                nb_char++;
            }
		}
        if (dig < 0 && flag.precision && flag.width && flag.point)
        {
            putspace = flag.width - ft_strlen(len) - flag.precision;
            ft_putstr(len);
            i = -1;
            if ((size_t)flag.width > ft_strlen(len))   
		    {
			    while (++i < putspace)
			    {
				    ft_putchar(' ');
				    nb_char++;
			    }
		    }
        }
	}
    if (dig == 0 && flag.width == 0) //&& (flag.point || flag.width))
    {
        len[0] = '\0';
        ft_putchar('0');
        nb_char++;
        return (ft_strlen(len) + nb_char);
    }
    if (dig == 0 && (flag.width || flag.point))
        return (ft_strlen(len) + nb_char);
    else if (flag.minus > 0 && !flag.precision)
        return (ft_strlen(len) + nb_char);
  	else if (flag.minus > 0 && (flag.width > flag.precision) && flag.point)
        return (ft_strlen(len) + nb_char);
    else if (dig < 0 && flag.precision && flag.width && flag.point)
        return (ft_strlen(len) + nb_char);
    else
        ft_putstr(len);
    return (ft_strlen(len) + nb_char);
}