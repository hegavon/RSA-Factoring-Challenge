#include <stdio.h>

int main()
{
	long long int number = 239809320265259;
	long int divisor = 2;
	long int second_factor;

	while (number % divisor)
	{
		if (divisor <= number)
		{
			divisor++;
		}
		else
		{
			return (-1);
		}
	}

	second_factor = number / divisor;
	printf("%lld = %ld * %ld\n", number, second_factor, divisor);
	return (0);
}
