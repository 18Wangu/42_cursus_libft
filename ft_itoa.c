#include "libft.h"

static int	ft_putnbr(int n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		n = -n;
		length++;
	}
	while (n > 9)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*resultat;
	int	length;
	int	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_putnbr(n);
	resultat = malloc(sizeof(char) * length + 1);
	i = n;
	if (!resultat)
		return (NULL);
	if (n < 0)
		n = -n;
	resultat[length] = '\0';
	while (--length >= 0)
	{
		resultat[length] = n % 10 + '0';
		n = n / 10;
	}
	if (i < 0)
		resultat[0] = '-';
	return (resultat);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	nb;

	if (argc != 2)
		return (1);
	nb = ft_atoi(argv[1]);
	printf("%s", ft_itoa(nb));
}*/
