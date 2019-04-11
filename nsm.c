/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   nsm.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <maegaspa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/13 16:07:29 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/01 14:37:33 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"
#include <stdlib.h>

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
    return (out);
}

int			is_flag(char c)
{
    if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'o'
		|| c == 'u' || c == 'x' || c == 'X' || c == 'f' || c == '\0')
        return (1);
    return (0);
}
/*
int			parsing(char *str, va_list ap)
{
    int     i;
    int     j;
    int     k;
    int     nb_char;
    char    wichf;
    char    *num;
    t_flag  flag;

    i = -1;
    nb_char = 0;
    //j = 0;
    while (str[++i])
    {
		k = 0;
        if (str[i] != '%') //&& str[i - 1] != '%')
        {
                ft_putchar(str[i]);
                nb_char++;
        }
		if (str[i] == '%' && str[i + 1] == '%')
		{
			while (str[i] == '%')
			{
				i++;
				k++;
			}
			ft_putncaract('%', (k  / 2));
			nb_char += k / 2;
			i--;
        }
        if (str[i] == '%' && (str[i + 1] != '%' && str[i + 1] != '\0' && str[i - 1] != '%'))
        {
            j = i;
            k = 0;
            flag = flag_init(flag);
            while (!(is_option(str[j++])))
            { 
                //if (str[j] == '#')
                //{ 
                //    flag.hash_flag++;
                //    wichf[k + 1] = str[j + 2];
                //    k++;
                //}
                if ((str[j - 1] == '%' || str[j - 1] == '#' ) && str[j] == '0')
                    flag.zero_flag++;
                if (str[j] == '+')
                    flag.plus_flag++;
                if (str[j] == '-')
                    flag.minus_flag++;
                if (str[j] == '.')
                {
                    flag.point_flag++;
                    k = j;
                }
                if (str[j] == ' ')
                    flag.space_flag++;
                if ((str[j - 1] == '%') && ft_isdigit(str[j]))         /////PARSING A REVOIR POUR flag.width = atoi du bail; +++ZERO
                   flag.width_flag++;
                if (str[j + 1] == 'l' && str[j + 2] == 'l')
                    flag.elle_flag++;
                if (str[j + 2] == 'h' && str[j + 2] == 'h')
                    flag.hihi_flag++;
            }
            wichf = str[j - 1];
            if (flag.point_flag > 0)
				if (!(num = ft_strsub(str, k + 1, (j - k - 1))))
					return (0);
            //flag.precision = ft_atoi_2(num);
            nb_char += resolve_option(str, ap, wichf, flag, nb_char); //POSITION DE CETTE FONCTION A REVOIR, GERER PLSRS OPTIONS EM MM TPS
        }
        //printf("wichf = %s\n", wichf);
        //wichf = ft_wichf(wichf, str, i, flag); // PRENDRE LE BAIL ATOI2
        //printf("wichf = %s\n", wichf);
        //printf("str = %c\n", str[i]);
    }
    print_help(flag, nb_char);
    return (nb_char);
}
*/
int			parse(char *str, va_list ap)
{
	t_flag		flags;
	t_compt		compt;
	int			nb_char;

	nb_char = 0;
	compt.i = -1;
	while (str[++compt.i])
	{
		if (str[compt.i] != '%')
		{
			ft_putchar(str[compt.i]);
			nb_char++;
		}
		compt.m = 0;
		if (str[compt.i] == '%' && str[compt.i + 1] == '%')
		{
			while (str[compt.i] == '%')
			{
				compt.i++;
				compt.m++;
			}
			ft_putncaract('%', (compt.m  / 2));
			nb_char += compt.m  / 2;
			compt.i--;
		}
		if (str[compt.i] == '%' && (str[compt.i + 1] != '%' && str[compt.i + 1] != '\0'))
		{
			compt.j = compt.i;
			compt.k = 0;
			flags = flag_init(flags);
			compt.num2 = ft_strnew(0);
			while (!(is_flag(str[compt.j++]))) // Remplissage STRUCT FLAG
			{
				if (str[compt.j] == '#' && flags.hashtag < 1)
					flags.hashtag++;
				if (str[compt.j] == '+' && flags.plus < 1)
					flags.plus++;
				if (str[compt.j] == '-' && flags.minus < 1)
					flags.minus++;
				if (str[compt.j] == '0' && flags.zero < 1 && !is_flag(str[compt.j + 1]) && !ft_isdigit(str[compt.j - 1]))
					flags.zero++;
				if (str[compt.j] == '.' && ((ft_isdigit(str[compt.j - 1]) || ft_isdigit(str[compt.j + 1])) || str[compt.j - 1] == ' ' || str[compt.j - 1] == '+' || (str[compt.j - 1] == '%' && is_flag(str[compt.j + 1]))))
				{
					flags.point++;
					compt.k = compt.j;
				}
				if (str[compt.j] == ' ' && flags.space < 1)
					flags.space++;
				if (str[compt.j] == 'l' && flags._l < 2)
					flags._l++;
				if (str[compt.j] == 'h' && flags._h < 2)
					flags._h++;
				if (str[compt.j] == 'L' && flags._L < 1)
					flags._L++;
				//printf("%c", str[compt.j]);
			}
			flags.conv = str[compt.j - 1];
			if (!(compt.num = ft_strsub(str, compt.i, (compt.j - compt.i))))
				return (0);
			if (flags.point)
				if (!(compt.num2 = ft_strsub(str, compt.k + 1, (compt.j - compt.k - 1))))
					return (0);
			flags.precision = ft_atoi_2(compt.num2); // Ajout PRECISION
			flags.width = ft_atoi_2(compt.num); // Ajout LARGEUR
			compt.i = compt.j - 1;
			nb_char = resolve_option(str, ap, flags, nb_char);
			//print_help(flags, compt, str);
		}
		//printf("{%d}\n", nb);
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

/*char		*ft_wichf(char *wichf, char *str, int i, t_flag flag)
{
    int     k;

    k = 0;
    if (is_option(str[i]) && (str[i + 1] == ' ')) // PEUT ETRE ENCORE FOIREUX
    {
        wichf[k] = str[i];
        k++;
    }
    wichf[k] = '\0';
   // printf("wichf = %s\n", wichf);
    return (wichf);
}*/

int         resolve_option(char *str, va_list ap, t_flag flag, int nb_char)
{
    int         i;
    char        *nbr;
    t_out       out;

    i = -1;
    out = out_init(); //INUTIL POUR LE MOMENT
    out.precis = ft_atoi(flag_boi(flag, str));
    //if (wichf == 'd' || wichf == 'i')
    //{
    //    out.integ = va_arg(ap, int);
    //    nb_char += wp_dtreat(flag, out);
    //}
    if (flag.conv == 's')
    {
        out.string = va_arg(ap, char *);
        nb_char += wp_streat(flag, out.precis, out.string);
    }
    if (flag.conv == 'c')
    {
        out.integ = va_arg(ap, int);
        nb_char += wp_ctreat(flag, out.precis, out.integ);
    }
    if (flag.conv == 'x')
    {
        out.uns_integ = va_arg(ap, unsigned int);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nb_char += wp_oxtreat(flag, out.precis, nbr, flag.conv);
    }
    if (flag.conv == 'X')
    {
        out.uns_integ = va_arg(ap, unsigned int);
        nbr = ft_itoa_base(out.uns_integ, 16);
        nbr = ft_strcaps(nbr);
        ft_putstr(nbr);
    }
    if (flag.conv == 'l')
    	va_arg(ap, long int);
    if (flag.conv == 'L')
    	va_arg(ap, long double);
    //  if (wichf == 'h')
    //     va_arg(ap, short int);
    if (flag.conv == 'o')
    {
    	out.uns_integ = va_arg(ap, unsigned int);
		nbr = ft_itoa_base(out.uns_integ, 8);
    	nb_char += wp_oxtreat(flag, out.precis, nbr, flag.conv);
    }
    if (flag.conv == 'p')
        va_arg(ap, void *);
    if (flag.conv == 'f')
        va_arg(ap, double);
    va_end(ap);
    return (nb_char);
}

char		*flag_boi(t_flag flag, char *str)
{
    int     i;
    int     j;
    int     k;
    char    *tmp;

    i = 0;
    j = 0;
	k = 0;
    if (!(tmp = ft_strnew(k))) // valeur de k?
        return (0);
    if (flag.point > 0 || flag.width > 0)
    {
        while(str[i])
        {
            if (str[i] == '%')
                k = i + 1;
            if (is_option(str[i]))
            {
                while (k < i)
                {
                    tmp[j] = str[k];
                    k++;
                    j++;
                }
            }
			i++;
        }
    }
    tmp[j] = '\0';
    return (tmp);
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
    ft_putchar(c);
    return (nb_char + 1);
}

int			wp_streat(t_flag flag, int precis, char *string) //traiter une option s
{
    int     putspace;
    int     i;
    int     nb_char;

    putspace = 0;
    nb_char = 0;
    i = 0;
    putspace = precis - ft_strlen(string);
    if (precis < 0)
        precis = 0;
    //if (flag.point_flag > 0 && (!flag.width_flag && !flag.precision))
    //    return (0);
    if (flag.point > 0)
    {
        if (flag.zero > 0)
        {
            while (i < precis)
            {
                ft_putchar('0');
                nb_char++;
				i++;
            }
        }
        if ((size_t)precis < ft_strlen(string))
        {
            while (i < precis)
			{
                ft_putchar(string[i]);
				i++;
			}
            string[i] = '\0';
        }
    }
    if (flag.width > 0 && flag.point == 0)
    {
        if ((size_t)precis > ft_strlen(string))
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
}
/*
int			wp_dtreat(t_flag flag, char *str, t_out out) //traiter une option d (t_flag flag, char *str, t_out out)
{
    int     putspace;
    int     i;
    int     nb_char;
    char    *len;

	nb_char = 0;
    putspace = 0;
    i = -1;
    len = ft_itoa(out.integ);
    if (out.precis < 0)
        out.precis = 0;
    putspace = out.precis - ft_strlen(len);
    if (flag.width_flag > 0)
    {
        if ((size_t)out.precis > ft_strlen(len))
        {
            while (++i < putspace)
            {
                if (flag.zero_flag > 0)
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
    if (flag.point_flag > 0)
    {
        if ((size_t)out.precis > ft_strlen(len))
        {
            while (++i < putspace)
            {
                ft_putchar('0');
                nb_char++;
            }
        }
    }
    if (flag.plus_flag > 0)
    {
        ft_putchar('+');
        nb_char++;
    }
    if (flag.space_flag > 0)
    {
        ft_putchar(' ');
        nb_char++;
    }
    ft_putnbr(out.integ);
    return(ft_strlen(len) + nb_char);
}
*/
int			wp_oxtreat(t_flag flag, int size, char *str, char wichf) //traiter une option o et x
{
    int     putspace;
    int     i;
    int     j;

    putspace = 0;
    i = -1;
    j = 0;
    if (size < 0)
        size = 0;
    putspace = size - ft_strlen(str);
    if (flag.hashtag > 0 && flag.zero > 0)
    {
        if (wichf == 'o')
            ft_putchar('0');
        if (wichf == 'x')
            ft_putstr("0x");
        if (wichf == 'X')
            ft_putstr("0X");
    }
    if (flag.width > 0)
    {
        if ((size_t)size > ft_strlen(str))
        {
            while (++i < putspace)
            {
                if (flag.point > 0 || flag.zero > 0)
                    ft_putchar('0');
                else
                    ft_putchar(' ');
            }        
        }
    }
    if (flag.hashtag > 0)
    {
        if (wichf == 'o')
            ft_putchar('0');
        if (wichf == 'x')
            ft_putstr("0x");
        if (wichf == 'X')
            ft_putstr("0X");
    }
    ft_putstr(str);
    return(ft_strlen(str));
}