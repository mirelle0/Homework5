#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x, y, z, gamma;

    printf("¬ведите x: ");
    scanf("%lf", &x);

    printf("¬ведите y: ");
    scanf("%lf", &y);

    printf("¬ведите z: ");
    scanf("%lf", &z);

    gamma = 5 * atan(x) - (1.0 / 4.0) * acos(x) * (x + 3 * fabs(x - y) + x * x) / (fabs(x - y) * z + x * x);

    printf("\n--- –езультаты ---\n");
    printf("x = %.4lf\n", x);
    printf("y = %.2lf\n", y);
    printf("z = %.2le\n", z);
    printf("gamma = %.6lf\n", gamma);

    getchar();
    getchar();
    return 0;
}