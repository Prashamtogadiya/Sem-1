#include<stdio.h>

void main(){
    int R,r,s,m,h;
    printf("Enter second = ");
    scanf("%d", &s);
    h=s/3600;
    r=s%3600;
    m=r/60;
    R=r%60;
    s=R;
    printf("%d:%d:%d", h,m,s);
    
}