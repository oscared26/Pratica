#include <stdio.h>
#include <math.h>

int factorial(int n){
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact; 
}

float seno(int m, float x){
    float sum=0;
    float num=0;
    float den=0;
    for(int n=0;n<=m;n++){
        num=powf(-1, n)*powf(x, 2*n+1);
        den=factorial(2*n+1);
        sum=sum+num/den;
    }
    return sum;
}

float cosseno(int m, float x){
    float sum=0;
    float num=0;
    float den=0;
    for(int n=0;n<=m;n++){
        num=powf(-1, n)*powf(x, 2*n);
        den=factorial(2*n);
        sum=sum+num/den;
    }
    return sum;
}

float exponencial(int m, float x){
    float sum=0;
    float num=0;
    float den=0;
    for(int n=0;n<=m;n++){
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
    
    float res1=seno(m,x);
    float res2=cosseno(m,x);
    float res3=exponencial(m,x);
    
    float teor1=sinf(x);
    float teor2=cosf(x);
    float teor3=expf(x);

    printf("O resultado da aproximação do seno vale=> %.9f \n",res1);
    printf("O resultado teorico do seno vale=> %.9f \n",teor1);
    printf("\n \n");
    printf("O resultado da aproximação do cosseno vale=> %.9f \n",res2);
    printf("O resultado teorico do cosseno vale=> %.9f \n",teor2);
    printf("\n \n");
    printf("O resultado da aproximação da exponencial vale=> %.9f \n",res3);
    printf("O resultado teorico da exponencial vale=> %.9f \n",teor3);    
    
    return 0;
}
