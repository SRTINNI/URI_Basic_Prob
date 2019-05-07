#include<stdio.h>
void main()
{
    int eNumber,eHour;
    float eSalary;
    scanf("%d%d%f",&eNumber,&eHour,&eSalary);
    float SALARY = eHour * eSalary;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",eNumber,SALARY);
}
