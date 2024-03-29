#include<stdio.h>

void main (){
    int i,n;
    printf("enter size of arr ");
    scanf("%d",&n);
    char s1[n],s2[n];
    for ( i = 0; i < n; i++)
    {
        printf("s1[%d] = ",i);
        scanf("%d",&s1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        s2[i] = s1[i];
        printf("\ns2[%d] = %d",i,s2[i]);

    }

    



}