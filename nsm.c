/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   nsm.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/13 16:07:29 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/27 23:28:04 by hmichel     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"

void		print_help(t_flag flag, int nb_char)
{
    printf("hash : %d\n", flag.hashtag);
    printf("preci: %d\n", flag.precision);
    printf("zero : %d\n", flag.zero);
    printf("minus: %d\n", flag.minus);
    printf("plus : %d\n", flag.plus);
    printf("point: %d\n", flag.point);
    printf("space: %d\n", flag.space);
    printf("width: %d\n", flag.width);
    printf("_l 	 : %d\n", flag._l);
    printf("_h   : %d\n", flag._h);
	printf("_L   : %d\n", flag._L);
	printf("conv : %c\n", flag.conv);
    printf("nb_char: %d\n", nb_char);
}

int			is_option(char p)
{
    if (p == 's' || p == 'd' || p == 'i' || p == 'o' || p == 'u' || p == 'x' || p == 'X'
        || p == 'c' || p == 'p' || p == 'l' || p == 'L' || p == 'f' || p == 'h')
        return (1);
    return (0);
}

t_flag		flag_init(t_flag flag)
{
    flag.conv = 0;
    flag.hashtag = 0;
    flag.zero = 0;
    flag.plus = 0;
    flag.minus = 0;
    flag.point = 0;
    flag.space = 0;
    flag.width = 0;
    flag._l = 0;
    flag._L = 0;
	flag._h = 0;
	flag.precision = 0;
    return (flag);
}

t_out		out_init(void)
{
	t_out	out;

    out.integ = 0;
    out.string = 0;
	out.uns_char = 0;
	out.uns_integ = 0;
    out.lo = 0;
    out.lo_double = 0;
    out.doub = 0;
    out.sh_int = 0;
    out.void_pointer = 0;
    out.precis = 0;
    out.ld = 0;
    return (out);
}

int			is_flag(char c)
{
    if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'o'
		|| c == 'u' || c == 'x' || c == 'X' || c == 'f' || c == '\0')
        return (1);
    return (0);
}

void		ft_setflag2(char *str, t_flag *flags, t_compt *compt)
{
	if (str[compt->j] == '#' && flags->hashtag < 1)
		flags->hashtag++;
	if (str[compt->j] == '+' && flags->plus < 1)
		flags->plus++;
	if (str[compt->j] == '-' && flags->minus < 1)
		flags->minus++;
	if (str[compt->j] == '0' && flags->zero < 1 && !is_flag(str[compt->j + 1]) && !ft_isdigit(str[compt->j - 1]))
		flags->zero++;
	if (str[compt->j] == '.' && ((ft_isdigit(str[compt->j - 1]) || ft_isdigit(str[compt->j + 1])) ||
		str[compt->j - 1] == ' ' || str[compt->j - 1] == '#' || str[compt->j - 1] == '+' ||
		(str[compt->j - 1] == '%' && is_flag(str[compt->j + 1]))))
	{
		flags->point++;
		compt->k = compt->j;
	}
	if (str[compt->j] == ' ' && flags->space < 1)
		flags->space++;
	if (str[compt->j] == 'l' && flags->_l < 2)
		flags->_l++;
	if (str[compt->j] == 'h' && flags->_h < 2)
		flags->_h++;
	if (str[compt->j] == 'L' && flags->_L < 1)
		flags->_L++;
}

int			ft_setflag(char *str, t_flag *flags, t_compt *compt)
{
	compt->j = compt->i;
	compt->k = 0;
	compt->num2 = ft_strnew(0);
	while (!(is_flag(str[compt->j++]))) // Remplissage STRUCT FLAG
		ft_setflag2(str, &flags, &compt);
	flags->conv = str[compt->j - 1];
	if (!(compt->num = ft_strsub(str, compt->i, (compt->j - compt->i))))
		return (0);
	if (flags->point)
		if (!(compt->num2 = ft_strsub(str, compt->k + 1, (compt->j - compt->k - 1))))
			return (0);
	flags->precision = ft_atoi_2(compt->num2); // Ajout PRECISION
	flags->width = ft_atoi_2(compt->num); // Ajout LARGEUR
	compt->i = compt->j - 1;
	return (1);
}

int			ft_normaltext(char *str, t_compt *compt)
{
	int		nb_char;

	nb_char = 0;
	if (str[compt->i] != '%')
		nb_char += ft_putchar_add(str[compt->i]);
	compt->m = 0;
	if (str[compt->i] == '%' && str[compt->i + 1] == '%')
	{
		while (str[compt->i] == '%')
		{
			compt->i++;
			compt->m++;
		}
		ft_putncaract('%', (compt->m  / 2));
		nb_char += compt->m  / 2;
		compt->i--;
	}
	return (nb_char);
}

int			parse(char *str, va_list ap)
{
	t_flag		flags;
	t_compt		compt;
	int			nb_char;

	nb_char = 0;
	compt.i = -1;
	while (str[++compt.i])
	{
		nb_char += ft_normaltext(str, &compt);
		if (str[compt.i] == '%' && (str[compt.i + 1] != '%' && str[compt.i + 1] != '\0'))
		{
			flags = flag_init(flags);
			if (!(ft_setflag(str, &flags, &compt)))
				return (0);
			//print_help(flags, compt.i);
			nb_char = resolve_option(str, ap, flags, nb_char);
		}
	}
	va_end(ap);
	return (nb_char);
}

int			ft_printf(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    return (parse((char *)format, ap));
}

void		ft_putncaract(char c, int size)
{
	int		i;

	i = -1;
	while (++i != size)
		ft_putchar(c);
}

void		ft_putnstr(char const *s, int size)
{
	if (s != 0)
		write(1, s, size);
}

/*
int         resolve_option(char *str, va_list ap, t_flag flag, int nb_char)
{
    int         i;
    char        *nbr;
    t_out       out;

    i = -1;
    out = out_init(); //INUTIL POUR LE MOMENT
    if (flag.conv == 's')
	{
		out.string = va_arg(ap, char*);
		nb_char += wp_streat(flag, out.string);
	}
	if (flag.conv == 'c')
	{
		out.integ = va_arg(ap, int);
        nb_char = wp_ctreat(flag, out.precis, out.integ);
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
        nb_char += wp_dtreat(flag, out);
    }
    if (flag.conv == 'x')
    {
        if (flag._h == 1)
            out.uns_integ = va_arg(ap, unsigned short);
        else if (flag._l == 1)
            out.uns_integ = va_arg(ap, unsigned long);
        else if (flag._h == 2)
            out.uns_integ = va_arg(ap, unsigned short short);
        else if (flag._l == 2)
            out.uns_integ = va_arg(ap, unsigned long long);
        else
            out.uns_integ = va_arg(ap, unsigned long long);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nb_char += wp_oxtreat(flag, out, nbr);
    }
    if (flag.conv == 'X')
    {
        out.uns_integ = va_arg(ap, unsigned long long);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nbr = ft_strcaps(nbr);
        nb_char += wp_oxtreat(flag, out, nbr);
    }
    if (flag.conv == 'o')
    {
        if (flag._h == 1)
            out.uns_integ = va_arg(ap, unsigned short int);
        else if (flag._l == 1)
            out.uns_integ = va_arg(ap, unsigned long int);
        else if (flag._h == 2)
            out.uns_integ = va_arg(ap, unsigned short short int);
        else if (flag._l == 2)
            out.uns_integ = va_arg(ap, unsigned long long int);
        else
    	    out.uns_integ = va_arg(ap, unsigned long long);
		nbr = ft_itoa_base(out.uns_integ, 8);
    	nb_char += wp_otreat(flag, out, nbr);
    }
    if (flag.conv == 'p')
    {
        out.uns_integ = va_arg(ap, unsigned long long);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nbr = ft_strcaps(nbr);
        nb_char += wp_oxtreat(flag, out, nbr);
    }
    if (flag.conv == 'f' || flag.conv == 'F')
	{
        out.doub = va_arg(ap, double);
		nb_char += wp_ftreat(flag, out.doub);
	}
    if (flag.conv == 'u')
    {
        if (flag._h == 1)
        {
            out.sh_int = va_arg(ap, unsigned short int);
            nbr = ft_uhtoa(out.);
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
        nb_char += wp_utreat(flag, dig, nbr);
    }
    va_end(ap);
    return (nb_char);
}*/

int         resolve_option(char *str, va_list ap, t_flag flag, int nb_char)
{
    int         i;
    char        *nbr;
    t_out       out;

    i = -1;
    out = out_init(); //INUTIL POUR LE MOMENT
	nb_char = ft_choose_resolve1(out, ap, flag, nb_char);
	/*nb_char += ft_choose_resolve2(out, ap, flag, nb_char);/*
	if (flag.conv == 'c')
	{
		out.integ = va_arg(ap, int);
        nb_char += wp_ctreat(flag, out.precis, out.integ);
	}
    if (flag.conv == 'x')
    {
        if (flag._h == 1)
            out.uns_integ = va_arg(ap, unsigned short);
        else if (flag._l == 1)
            out.uns_integ = va_arg(ap, unsigned long);
        else if (flag._h == 2)
            out.uns_integ = va_arg(ap, unsigned short short);
        else if (flag._l == 2)
            out.uns_integ = va_arg(ap, unsigned long long);
        else
            out.uns_integ = va_arg(ap, unsigned long long);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nb_char += wp_oxtreat(flag, out, nbr);
    }
    if (flag.conv == 'X')
    {
        out.uns_integ = va_arg(ap, unsigned long long);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nbr = ft_strcaps(nbr);
        nb_char += wp_oxtreat(flag, out, nbr);
    }
    if (flag.conv == 'o')
    {
        if (flag._h == 1)
            out.uns_integ = va_arg(ap, unsigned short int);
        else if (flag._l == 1)
            out.uns_integ = va_arg(ap, unsigned long int);
        else if (flag._h == 2)
            out.uns_integ = va_arg(ap, unsigned short short int);
        else if (flag._l == 2)
            out.uns_integ = va_arg(ap, unsigned long long int);
        else
    	    out.uns_integ = va_arg(ap, unsigned long long);
		nbr = ft_itoa_base(out.uns_integ, 8);
    	nb_char += wp_otreat(flag, out, nbr);
    }
    if (flag.conv == 'p')
    {
        out.uns_integ = va_arg(ap, unsigned long long);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nbr = ft_strcaps(nbr);
        nb_char += wp_oxtreat(flag, out, nbr);
    }*/
    if (flag.conv == 'f' || flag.conv == 'F')
	{
        out.doub = va_arg(ap, double);
		nb_char += wp_ftreat(flag, out.doub);
	}
    va_end(ap);
    return (nb_char);
}

int        choose_dig(t_flag flag, int nb_char, va_list ap, t_out out)
{
    if (flag._l && flag.conv == 'u')
	{
		out.yessai = va_arg(ap, unsigned long long);
		nb_char += wp_utreat(flag, out.yessai);
	}
	else if (flag.conv == 'u')
	{
		out.uns_integ = va_arg(ap, unsigned int);
		nb_char += wp_utreat(flag, out.uns_integ);
	}
	else if (flag._l && (flag.conv == 'd' || flag.conv == 'i'))
	{
		out.ld = va_arg(ap, long long);
		nb_char += wp_dtreat(flag, out.ld);
	}
	else
	{
		out.integ = va_arg(ap, int);
		nb_char += wp_dtreat(flag, out.integ);
	}
	return (nb_char);
}

int		choose_xo(t_flag flag, va_list ap, int nb_char, t_out out)
{
    char *nbr;

	if (flag.conv == 'x' || flag.conv == 'X')
	{
		out.yessai = va_arg(ap, unsigned long long);
        //if (flag.conv == 'X')
        //    nbr = ft_strcaps(nbr);
		nb_char += wp_oxtreat(flag, out.yessai);
	}
	if (flag.conv == 'p')
	{
		out.void_pointer = va_arg(ap, void*);
		nb_char += wp_oxtreat(flag, out.void_pointer);
	}
	if (flag.conv == 'o')
	{
		out.o = va_arg(ap, unsigned long);
		nb_char += wp_otreat(flag, out.o);
	}
	return (nb_char);
}

char	*nbr_dig(long long dig, t_flag flag, char *str)
{
	if (flag.conv == 'u')
	{
		if (flag._l)
			str = ft_ulltoa(dig);
		else if (flag._h == 1)
			str = ft_uhtoa(dig);
		else if (flag._h == 2)
			str = ft_uhhtoa(dig);
		else
			str = ft_utoa(dig);
	}
	if (flag.conv == 'i' || flag.conv == 'd')
	{
		if (flag._l)
			str = ft_lltoa(dig);
		else if (flag._h == 1)
			str = ft_htoa(dig);
		else if (flag._h == 2)
			str = ft_hhtoa(dig);
		else
			str = ft_itoa(dig);
	}
	//c_dig->len = ft_strlen(str);
	return (str);
}

char    *nbr_digox(long long dig, t_flag flag, char *str)
{
    if (flag.conv == 'x' || flag.conv == 'X' || flag.conv == 'p')
    {
       if (flag._l)
			str = ft_ulltoa_base(dig, 16);
		else if (flag._h >= 1)
			str = ft_uhhtoa_base(dig, 16);
		else
			str = ft_utoa_base(dig, 16);
    }
    if (flag.conv == 'o')
    {
        if (flag._l)
			str = ft_ulltoa_base(dig, 8);
		else if (flag._h >= 1)
			str = ft_uhhtoa_base(dig, 8);
		else
			str = ft_utoa_base(dig, 8);
    }
    return (str);
}

char	*dectohexa(unsigned long long n, t_flag flags)
{
	char				*seg;
	int					i;
	int					j;
	int					tmp;

	i = 0;
	if (n == 0)
		return (octa_zero(seg));
	j = ret_int(n, 16);
	if (!(seg = malloc(sizeof(char) * j + 1)))
		return (NULL);
	seg[j + 1] = '\0';
	while (n != 0)
	{
		tmp = n % 16;
		if (tmp < 10)
			seg[i] = tmp + 48;
		else
			seg[i] = tmp + 87;
		i++;
		n = n / 16;
	}
	seg = cut_str_long(seg, flags);
	return (ft_strrev(seg));
}

char	*dectoocta(unsigned long n, t_flag flags)
{
	char			*seg;
	int				i;
	int				j;
	unsigned long	tmp;

	if (flags._h)
		n = (unsigned short)n;
	i = 0;
	if (n == 0)
		return (octa_zero(seg));
	j = ret_int(n, 8);
	if (!(seg = malloc(sizeof(char) * j + 1)))
		return (NULL);
	seg[j + 1] = '\0';
	while (n != 0)
	{
		seg[i] = 48 + (n % 8);
		n = n / 8;
		i++;
	}
	return (ft_strrev(seg));
}

char	*octa_zero(char *seg)
{
	seg = ft_strnew(1);
	seg[0] = 48;
	return (seg);
}

int		ret_int(unsigned long long n, int base)
{
	int		j;

	j = 0;
	while (n != 0)
	{
		n = n / base;
		j++;
	}
	return (j);
}

char	*cut_str_long(char *seg, t_flag flags)
{
	if (ft_strlen(seg) > 8 && !flags._l)
		seg[8] = '\0';
	if (flags._h == 1)
		seg[4] = '\0';
	if (flags._h == 2)
		seg[2] = '\0';
	return (seg);
}

int			wp_ctreat(t_flag flag, int size, int c) //traiter une option c
{
	int putspace;
	int nb_char;
	int i;

	i = 0;
	nb_char = 0;
    putspace = size - 1;
	if (flag.width > 0 && flag.point == 0)
	{
		if (size > 1)
		{
            while (++i < putspace)
            {
                if (flag.zero > 0)
                    nb_char += ft_putchar_add('0');
                else
                    nb_char += ft_putchar_add(' ');
            }
        }
    }
    ft_putchar(c);
    return (nb_char + 1);
}
/*
int			wp_streat(t_flag flag, char *string) //traiter une option s
{
    int     putspace;
    int     i;
    int     nb_char;

    putspace = 0;
    nb_char = 0;
    i = 0;
    putspace = flag.width - ft_strlen(string);
    if (flag.width < 0) // TOUJOURS FAUX car unsign
        flag.width = 0;
    if (flag.point > 0 && !flag.width && !flag.precision)
        return (0);
    if (flag.point > 0 && flag.precision < 1)
    {
        if (flag.zero > 0)
        {
            while (i < flag.width)
            {
                ft_putchar('0');
                nb_char++;
				i++;
            }
        }
        if ((size_t)flag.width < ft_strlen(string))
        {
            while (i < flag.width)
			{
                ft_putchar(string[i]);
				i++;
			}
            string[i] = '\0';
        }
    }
    if (flag.width > 0 && flag.point == 0)
    {
        if ((size_t)flag.width > ft_strlen(string))
        {
            while (i < putspace)
            {
                if (flag.zero > 0)
                {
                    ft_putchar('0');
                    nb_char++;
                }
                else
                {
                    ft_putchar(' ');
                    nb_char++;
                }
				i++;
            }
        }
    }
    ft_putstr(string);
    return (nb_char + ft_strlen(string));
}*/