#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, h, x, y, z, c;

	printf("Enter the start value (a) =");
	scanf_s("%lf", &a);

	printf("Enter the final value (b) =");
	scanf_s("%lf", &b);

	printf("Enter the tabulation step (h) =");
	scanf_s("%lf", &h);

	for (x = a; x < 0.5; x += h)
	{
		y = pow(log(x), 7);
		printf("|ln(x)|^7 = %lf\v", y);
	}

	for (x = a; 0.5 <= x < 0.7; x += h)
	{
		z = 1 / tan(x + pow(x, 3));
		printf("Ctg(x+x^3) = %lf\v", z);

	}

	for (x = 0.7; x <= b; x += h)
	{
		c = (log(sin(x)) / log(5));
		printf("Log5(sin(x)) = %lf\v", c);
	}

	return 0;
}
