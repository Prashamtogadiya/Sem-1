#include <stdio.h>
void main()
{
    int n, i, arr[n], countofodd, countofeven;
    printf("Enter Value Of Array[n]");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            countofeven++;
        }
        else
        {
            countofodd++;
        }
    }
    printf("Even Numbers count in array is %d\n", countofeven);
    printf("Odd Numbers count in array is %d\n", countofodd);
}