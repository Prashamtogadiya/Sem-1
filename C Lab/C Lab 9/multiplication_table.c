#include<stdio.h>

void main(){
    int a,c,i=1;
    printf("Enter a = ");
    scanf("%d",&a);

    while ( i<=10)
    {
        c=a * i;
        printf("%d * %d = %d\n",a,i,a*i);

        i++;
    }
}