#include<stdio.h>
#include<math.h>

void main (){
    float a,b,c,d,d1,d2;

    printf("Enter a,b,c = ");
    scanf("%f %f %f", &a, &b, &c);
    d=pow(b,2)-4*a*c;
    if(d>0){
        d1=(((-b)+sqrt(d))/(2*a));
        d2=(((-b)-sqrt(d))/(2*a));
        printf("%f and %f are roots of this equation = ",d1,d2);
    }
    else if(d==0){
        d=-b/2*a;
        printf("%f is unique root of this equation = ",d);
    }
    else{
        printf("Roots are imaginary");
    }
    
}