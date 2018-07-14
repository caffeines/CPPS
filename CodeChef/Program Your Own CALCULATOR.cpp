#include <stdio.h>
int main()
{
    double sum, a, b;
    char c;

    while (scanf("%lf %lf %c", &a, &b, &c) != EOF)
    {
        if (c == '+')
            sum = a + b;

        else if (c == '-')
            sum = a - b;

        else if (c == '*')
            sum = a * b;

        else
            sum = a / b;

        printf("%lf\n", sum);
    }

    return 0;
}
