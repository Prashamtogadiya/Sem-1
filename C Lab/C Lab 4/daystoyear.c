#include<stdio.h>

void main(){
    int y,d,w,Y,W;
    printf("Enter days = ");
    scanf("%d", &d);
    y=d/365;
    Y=d%365;
    w=Y/7;
    W=Y%7;
    d=W;
    printf("year = %d , week = %d , days = %d", y,w,d);
}