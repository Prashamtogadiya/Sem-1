#include <stdio.h>
void main()
{
    int n, i, arr[n], countn, countp;
    printf("Enter Value Of Array[n]");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i < 0])
        {
            countn++;
        }
        else
        {
            countp++;
        }
    }
    printf("Possitive Numbers count in array is %d\n", countp);
    printf("Negative Numbers count in array is %d\n", countn);
}