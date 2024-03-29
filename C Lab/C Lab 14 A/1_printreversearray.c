#include <stdio.h>
void main()
{
    int i, n, arr[n];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    for (i = n - 1; i <= 1; i--)
    {
        printf("%d", arr[i]);
    }
}