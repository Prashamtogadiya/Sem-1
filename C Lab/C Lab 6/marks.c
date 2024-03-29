#include<stdio.h>

void main (){
    int sub1,sub2,sub3,sub4,sub5;
    float p;

    printf("Enter marks = ");
    scanf("%d %d %d %d %d", &sub1, &sub2 , &sub3, &sub4, &sub5);

    p=(sub1+sub2+sub3+sub4+sub5)/(float)5;

    if (p<35)
    {
        printf("Fail");
    }
    else if (p>=35 && p<=45)
    {
        printf("Pass class");
    }
    else if (p>=46 && p<=60)
    {
        printf("Second class");
    }
    else if (p>=61 && p<=70)
    {
        printf("First class");
    }
    else if (p>70)
    {
        printf("Distinction");
    }
    
}