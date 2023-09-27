#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int    rzl;
    int sg;

    rzl = 0;
    sg = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sg *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        rzl = rzl * 10 + *str - '0';
        str++;
    }
    return (rzl * sg);
}

int main(int ac, char **av)
{
  int ad;
  int ad1;
  ad = ft_atoi(av[1]);
  ad1 = atoi(av[1]);
  if (ac == 2)
  {
    printf("%d\n", ad);
    printf("%d", ad1);
  }
}
// #include <stdio.h>
// #include <stdlib.h>

// int ft_atoi(char *str)
// {
//     int    rzl;
//     int sg;

//     rzl = 0;
//     sg = 1;
//     while (*str == ' ' || (*str >= 9 && *str <= 13))
//         str++;
//     if (*str == '-')
//         sg *= -1;
//     if (*str == '-' || *str == '+')
//         str++;
//     while (*str >= '0' && *str <= '9')
//     {
//         rzl = rzl * 10 + *str - '0';
//         str++;
//     }
//     return (rzl * sg);
// }

// int main(int ac, char **av)
// {
//   int ad;
//   int ad1;
//   ad = ft_atoi(av[1]);
//   ad1 = atoi(av[1]);
//   if (ac == 2)
//   {
//     printf("%d\n", ad);
//     printf("%d", ad1);
//   }
// }