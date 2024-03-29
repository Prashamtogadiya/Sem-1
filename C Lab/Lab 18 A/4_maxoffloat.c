#include <stdio.h>
float maxof3(float a, float b, float c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > a && b > c)
    {
        return b;
    }
    if (c > a && c > b)
    {
        return c;
    }
}
int main()
{
    float a, b, c, max;

    printf("A :");
    scanf("%f", &a);

    printf("B :");
    scanf("%f", &b);

    printf("C :");
    scanf("%f", &c);
    max = maxof3(a, b, c);
    printf("%f is Max", max);
}