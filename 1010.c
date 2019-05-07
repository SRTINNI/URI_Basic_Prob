#include<stdio.h>
void main()
{
    int cP1,uP1,cP2,uP2;
    float oUp1,oUp2;
    scanf("%d%d%f",&cP1,&uP1,&oUp1);
    scanf("\n%d%d%f",&cP2,&uP2,&oUp2);
    float p1 = uP1 * oUp1 + uP2 * oUp2;
    printf("VALOR A PAGAR: R$ %.2f\n",p1);

}
