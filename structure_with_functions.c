#include<stdio.h>

struct employee
{
    int salary;
    char name[25];
}e1,e2;
struct employee getdata(struct employee e1);
void printdata(struct employee e2);
void main()
{
    e2=getdata(e1);
    printdata(e2);

}

struct employee getdata(struct employee e1)
{
    printf("Enter name of employee\n");
    scanf("%s",e1.name);
    fflush(stdin);
    printf("Enter salary\n");
    scanf("%d",&e1.salary);

    return e1;
}
void printdata(struct employee e2)
{
    printf("Name of employee is %s\n",e2.name);
    printf("Salary of employee is %d\n",e2.salary);

}
