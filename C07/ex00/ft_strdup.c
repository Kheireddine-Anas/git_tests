#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*chg;
	int		sz;
	int		i;

	i = 0;
	sz = 0;
	while (src[i++])
		sz++;
	chg = (char *)malloc(sz);
	i = 0;
	while (src[i])
	{
		chg[i] = src[i];
		i++;
	}
	chg[i] = '\0';
	return (chg);
}

int	main(void)
{
	printf("%s", ft_strdup("Golder"));
}
