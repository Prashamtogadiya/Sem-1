#include <stdio.h>
void main()
{
    int i, n, h[n], w[n];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Hieght of %d", h[i]);
        scanf("%d", h[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter Weight of %d", w[i]);
        scanf("%d", w[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (h[i] > 170 && w[i] < 50)
        {
            printf("Person has %d height and %d weight", h[i], w[i]);
        }
    }
}