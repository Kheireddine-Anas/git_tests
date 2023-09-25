#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return(str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return(str + i);
		i++;
		j = 0;
	}
	return(0);
}

int main()
{
	char *haystack = "Hello, World!";
	char *needle = "lo";
	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", strstr(haystack, needle));
}
