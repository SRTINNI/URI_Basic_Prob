#include<stdio.h>
void main()
{
    double R;
    scanf("%lf",&R);
    double v = (4/3.0) * 3.14159 * R *R *R;
    printf("VOLUME = %.3lf\n",v);
}
