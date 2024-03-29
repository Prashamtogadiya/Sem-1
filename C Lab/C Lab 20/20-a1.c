#include<stdio.h>

struct employee
{
    char name[30];
    float salary;
    int empid;
};

void main(){
    struct employee emp;

    
    printf("Enter salary of employee =  ");
    scanf("%f",&emp.salary);
    printf("Enter ID of employee = ");
    scanf("%d",&emp.empid);
    printf("Enter employee name = ");
    scanf("%s",&emp.name);

    printf("%s",emp.name);
    printf("\n%f",emp.salary);
    printf("\n%d",emp.empid);
        
    
    
}