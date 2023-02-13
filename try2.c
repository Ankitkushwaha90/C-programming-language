#include <stdio.h>
#include <math.h>

int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(0.090, 7);

    printf("%.1lf  ^  %.1lf = %.2lf", base, power, result);

    return 0;
}