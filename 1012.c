#include<stdio.h>
void main()
{
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);
    printf("TRIANGULO: %.3f\n", 0.5*A*C);
    printf("CIRCULO: %.3f\n",3.14159*C*C);
    printf("TRAPEZIO: %.3f\n",0.5*((A+B)*C));
    printf("QUADRADO: %.3f\n",B*B);
    printf("RETANGULO: %.3f\n",A*B);

}
