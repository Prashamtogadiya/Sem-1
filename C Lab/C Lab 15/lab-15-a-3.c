#include<stdio.h>

void main (){

    int i,n,cn=0;
    printf("Enter size of arr = ");
    scanf("%d",&n);
    char s1[n];

    for ( i = 0; i < n; i++)
    {
        printf("s1[%d] = ",i);
        scanf("%d",&s1[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if ((s1[i]%3)==0)
        {
            cn++;
        }
        
    }
    printf("%d",cn);
    
}