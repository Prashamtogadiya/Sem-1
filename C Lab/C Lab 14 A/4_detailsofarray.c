#include <stdio.h>
void main()
{
    int n;
    printf("Size of array:");
    scanf("%d", &n);
    int arr[n], i, max, min, sum, avg;
    for (i = 0; i < n; i++)
    {
        printf("enter number for array[%d]\n", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d is sum of array\n", sum);

    avg = sum / n;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d is maximum\n", max);
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d is smallest\n", min);
    printf("%d is avrage", avg);
}
