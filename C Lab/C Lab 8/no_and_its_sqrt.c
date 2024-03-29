#include<stdio.h>
#include<math.h>

void main (){
    int i=1;
    float n,squareroot;

    printf("Enter n = ");
    scanf("%f",&n);

    while (i<=n)
    {
        printf("\n%d = ",i);
        squareroot=sqrt(i);
        printf("%f ",squareroot);
        i++;
    }
    
    

}