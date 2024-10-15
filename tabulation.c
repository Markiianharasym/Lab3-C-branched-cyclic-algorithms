#include <stdio.h>
#include <math.h>


double calculatefouritem(int n, int m, double x) {
    double fouritem = 1.0;
    for (int i = 1; i <= n; i++)
    {
        fouritem *= (m - i + 1);
        fouritem *= i;
        fouritem *= x;
    }
    return fouritem;
}

int main()
{
    double a, b, h, d;

    printf("Enter the start value (a) = ");
    scanf_s("%lf", &a);

    printf("Enter the final value (b) = ");
    scanf_s("%lf", &b);

    printf("Enter the tabulation step (h) = ");
    scanf_s("%lf", &h);

    printf("Enter the absolute difference (d) = ");
    scanf_s("%lf", &d);

    int m = 20;
    double x;

    for (x = a; x <= b; x += h)
    {
        double result = 1.0;
        int n = 1;

        while (1) {
            double term = calculatefouritem(n, m, x);

            if (fabs(term) < d) {
                break;
            }

            result += term;
            n++;
        }
        printf("When x = %lf, Result = %lf\n", x, result);
    }

    return 0;
}

