#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s1 == *s2 && s2++ && s1++ && n--);
	return (*s1 - *s2);
}
#include <string.h>
int main() {
    char str1[] = "Hel0l0";
    char str2[] = "Hel000";
	printf("%d.\n", ft_strncmp(str1, str2, 5));
	printf("%d.\n", strncmp(str1, str2, 5));

    // if (result == 0) {
    //     printf("Strings are equal.\n");
    // } else if (result < 0) {
    //     printf("String 1 is less than String 2.\n");
    // } else {
    //     printf("String 1 is greater than String 2.\n");
    // }

    return 0;
}
// #include <stdio.h>

// int ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] != '\0' && s1[i] == s2[i] && n > 0)
// 	{
// 		i++;
// 		n--;
// 	}
// 	return (s1[i] - s2[i]);
// }
// #include <string.h>
// int main() {
//     char str1[] = "Hel0l0";
//     char str2[] = "Hel000";
// 	printf("%d.\n", ft_strncmp(str1, str2, 5));
// 	printf("%d.\n", strncmp(str1, str2, 5));

//     // if (result == 0) {
//     //     printf("Strings are equal.\n");
//     // } else if (result < 0) {
//     //     printf("String 1 is less than String 2.\n");
//     // } else {
//     //     printf("String 1 is greater than String 2.\n");
//     // }

//     return 0;
// }