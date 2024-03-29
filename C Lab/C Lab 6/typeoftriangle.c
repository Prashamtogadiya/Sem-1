#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c;
    printf("Enter side a = ");
    scanf("%d", &a);
    printf("Enter side b = ");
    scanf("%d", &b);
    printf("Enter side c = ");
    scanf("%d", &c);
    
    if (a==b && b==c)
    {
        printf("Triangle is equilateral");
    }
    else if ((a==b) && a!=c || (a==c) && a!=b || (b==c) && b!=a)
    {
        printf("Triangle is isosceles");
    }
    else if ((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(b,2) + pow(c,2) == pow(a,2)) || (pow(c,2) + pow(a,2) == pow(b,2)))
    {
        printf("Triangle is right angle");
    }
    else if (a!=b && b!=c && c!=a)
    {
        printf("Triangle is scalene");
    }
     
}