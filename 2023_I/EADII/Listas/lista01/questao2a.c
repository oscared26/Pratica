#include <stdio.h>

int factorial(int n)
{
    int fact=1;
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}

float cosseno(int m, float x)
{
    float sum=0;
    float num=0;
    float den=0;
    for(int n=0;n<=m;n++)
    {
        num=powf(-1, n)*powf(x, 2*n);
        den=factorial(2*n);
        sum=sum+num/den;
    }
    return sum;
}
int main()
{
    int m=10;
    float x=0.25;
    float res=cosseno(m,x);
    printf("O resultado da aproximação do cosseno vale=> %.9f \n",res);
    return 0;
}
