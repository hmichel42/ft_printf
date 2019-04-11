#include "libft/libft.h"
#include <stdio.h>
# define PRECISION 1000000

char	*ft_itoa_base(int value, int base);

char	*ft_ftoa(float f)
{
	char	*string;
	int		i;
	char	*temp;

	i = (int)f;
	if (!(temp = ft_itoa_base(i, 10)))
		return (NULL);
	if (!(string = ft_strjoin(temp, ".")))
		return (NULL);
	f = f - (float)i + 1;
	free(temp);
	if (!(temp = ft_strjoin(string,	ft_itoa_base((int)(f * PRECISION), 10))))
		return (NULL);
	//while (f != 0)
	//{
	//	printf ("f = %f\n", f);
	//	if (temp != NULL)
	//		free(temp);
	//	temp = ft_strdup(string);
	//	free(string);
	//	f = f * 10;
	//	string = ft_strjoin(temp, ft_itoa_base((int)f, 10));
	//	i = (int)f;
	//	f = f - (float)i;
	//}
	return (temp);
}

/*
#define base 10 
#define precision 100000000 
double nb = 2000.000200000; 
char ch[101]; 
char decimal[20]; 
char flottant[15]; 
ft_itoa(int(nb),decimal,base); 
double Pflottante = nb-int(nb) + 1; 
ft_itoa(int(Pflottante*precision),flottant,base); 
ch[0] = '\0'; 
ft_strcat(ch,decimal); 
ft_strcat(ch,"."); 
ft_strcat(ch,&flottant[1]);
*/

int     main(void)
{
	//float	f = 1222.258;
	//int		i;
	char	*print;

	//i = (int)f;
	//print = ft_itoa_base(i, 10);
	printf("printf: f = %f\n", 1.8);
	print = ft_ftoa(1.8);
	ft_putstr(print);
	ft_putchar('\n');
	return (0);
}
