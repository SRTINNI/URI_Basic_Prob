#include<stdio.h>

void main()
{
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    m = (a + b + abs( a - b ) ) / 2;
    int max = (m + c + abs(m - c)) / 2;
    printf("%d eh o maior\n",max);
}

