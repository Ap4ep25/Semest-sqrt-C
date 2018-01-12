#include <stdio.h>

int main()
{
    double a, b;
    int i = 0;

    printf("Введите число: ");
    scanf("%lf",&a);

    b = a;
    while (b*b!=a)
    {
        b = 0.5 * (b + (a / b));
        i++;
        if (i>200)
            break;
    }
    printf("Квардратный корень из числа %f равен: %f",a,b);
    return 0;
}