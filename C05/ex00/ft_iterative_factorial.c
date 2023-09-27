#include <unistd.h>
#include <stdio.h>

int	fact(int n)
{
	int	i;
	int	as;

	i = 2;
	as = 1;
	if (n == 1 || n ==0)
		return (as);
	else
	{
		while (i <= n)
			as = as * i++;
		return (as);
	}
}
int main()
{
	int n = 5;
	printf("%d\n", fact(n));
}
