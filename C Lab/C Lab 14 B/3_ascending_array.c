 #include <stdio.h>
void main()
{
    int n, arr[n], i;

    for (i = 0; i < n; i++)
    {
        printf("Enter Array[%d] : ", n);
        scanf("%d", &arr[n]);
    }
    for(i=0 ; i<n ;i++)
    {
        arr[i]>arr[i+1];
    }
}