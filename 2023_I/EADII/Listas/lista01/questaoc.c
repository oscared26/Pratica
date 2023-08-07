#include <stdio.h>
#include <math.h>

float logaritmo(int m, float x)
{
    float sum=0;
    float num=0;
    float den=0;
    for(int n=0;n<=m;n++)
    {
        num=powf(-1, n)*powf(x, n+1);
        den=n+1;
        sum=sum+num/den;
    }
    return sum;
}


int main()
{
    int m=10;
    float x=0.25;
    float res=logaritmo(m,x);
    printf("O resultado da aproximação do logaritmo vale=> %.9f \n",res);
    return 0;
}
