#include <stdio.h>
void maxmin(int x, int y)
{
    if (x > y)
    {
        printf("%d is Maximum\n %d is Minimum", x, y);
    }
    else
    {
        printf("%d is Maximum\n %d is Minimum", y, x);
    }
}

void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    maxmin(x, y);
}