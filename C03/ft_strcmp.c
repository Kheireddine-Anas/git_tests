#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
#include <string.h>
int main() {
    char str1[] = "Hel000";
    char str2[] = "Hel000c";
	printf("%d.\n", ft_strcmp(str1, str2));
	printf("%d.\n", strcmp(str1, str2));

    // if (result == 0) {
    //     printf("Strings are equal.\n");
    // } else if (result < 0) {
    //     printf("String 1 is less than String 2.\n");
    // } else {
    //     printf("String 1 is greater than String 2.\n");
    // }

    return 0;
}