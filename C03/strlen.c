#include <string.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int main()
{
	char dest[10] = "dbcaa";
	printf("%ld\n", strlen(dest));
	printf("%d\n",ft_strlen(dest));
}