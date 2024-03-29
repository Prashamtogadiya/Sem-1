#include<stdio.h>

struct bookname
{
    char title[50];
    char author[30];
    float price;
    int pageno;
};


void main (){
    int i,n;
    struct bookname book;
    printf("Enter how many book's details you want to see = ");
    scanf("%d",&n);
    struct bookname arr[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter title of the book = ");
        scanf("%s",arr[i].title);
        printf("Enter the author of book : ");
        scanf("%s",arr[i].author);
        printf("Enter the price of the book : ");
        scanf("%f",&arr[i].price);
        printf("Enter the pageno of the book : ");
        scanf("%d",&arr[i].pageno);
    }

    for ( i = 0; i < n; i++)
    {
        printf("Title of book : %s",arr[i].title);
        printf("Author : %s",arr[i].author);
        printf("Price : %f",arr[i].price);
        printf("Page no : %d",arr[i].pageno);
    }
    
    

    
}