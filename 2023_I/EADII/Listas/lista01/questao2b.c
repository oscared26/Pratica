#include <stdio.h>
#include <math.h>

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
float exponencial(int m, float x){
    float sum=0;
    float num=0;
    float den=0;
    for(int n=0;n<=m;n++)
    {
        num=powf(x, n);
        den=factorial(n);
        sum=sum+num/den;
    }
    return sum;
}
int main()
{
    int m=10;
    float x=0.25;
    float res=exponencial(m,x);
    printf("O resultado da aproximação da exponencial vale=> %.9f \n",res);
    return 0;
}
