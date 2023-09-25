#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	// size_t dest_len = strlen(dest);
	// size_t i;

	// for (i = 0 ; i < n && src[i] != '\0' ; i++)
	// 	dest[dest_len + i] = src[i];
	// dest[dest_len + i] = '\0';

	// return (dest);

	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (i < nb && src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "anas";
	char src[] = "1234";
	printf("%s\n", ft_strncat(dest, src, 5));
	char dest1[] = "anas";
	char src1[] = "1234";
	printf("%s\n", strncat(dest1, src1, 4));
}