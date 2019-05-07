#include<stdio.h>
void main()
{
    char sName;
    float sSalary,sUnit;
    scanf("%s%f%f",&sName,&sSalary,&sUnit);
    float total = sSalary + sUnit * .15;
    printf("TOTAL = R$ %.2f\n",total);
}
