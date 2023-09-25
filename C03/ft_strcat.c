#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)

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
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int main()
{
	char dest[15] = "anas";
	char src[] = "akad";
	printf("%s", ft_strcat(dest, src));
}