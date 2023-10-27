
int	ft_atoi(char *str)
{
	int	sg;
	int	rzl;

	sg = 1;
	rzl = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		rzl = rzl * 10 + *str - '0';
		str++;
	}
	return (rzl * sg);
}
