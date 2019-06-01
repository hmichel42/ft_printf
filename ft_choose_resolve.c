/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_choose_resolve.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/27 22:40:38 by hmichel      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/27 23:32:36 by hmichel     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"

int			ft_choose_resolve1(t_out out, va_list ap, t_flag flag, int nb_char)
{
	if (flag.conv == 's')
	{
		out.string = va_arg(ap, char*);
		nb_char += wp_streat(flag, out.string);
	}
	if (flag.conv == 'x' || flag.conv == 'X' || flag.conv == 'o' || flag.conv == 'p')
		nb_char = choose_xo(flag, ap, nb_char, out);
    if (flag.conv == 'd' || flag.conv == 'i')
    {   
        if (flag._h == 1)
            out.integ = va_arg(ap, short int);
        else if (flag._l == 1)
            out.integ = va_arg(ap, long int);
        else if (flag._h == 2)
            out.integ = va_arg(ap, short short int);
        else if (flag._l == 2)
            out.integ = va_arg(ap, long long int);
        else
            out.integ = va_arg(ap, int);
        nb_char += wp_dtreat(flag, out.integ);
    }
	return (nb_char);
}
/*
int			ft_choose_resolve2(t_out out, va_list ap, t_flag flag, char *nbr)
{
	if (flag.conv == 'u')
    {
        if (flag._h == 1)
        {
            out.sh_int = va_arg(ap, unsigned short int);
            nbr = ft_uhtoa(out.yessai);
        }
        else if (flag._l == 1)
        {   
            out.yessai = va_arg(ap, unsigned long int);
            nbr = ft_ulltoa(out.yessai);
        }
        else if (flag._h == 2)
        {
            out.yessai = va_arg(ap, unsigned short short int);
            nbr = ft_uhhtoa(out.yessai);
        }
        else
        {
            out.yessai = va_arg(ap, unsigned long long);
            nbr = ft_ulltoa(out.yessai);
        }
        return (wp_utreat(flag, dig, nbr)); //dig??
    }
}*/