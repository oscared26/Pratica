#include <stdio.h>
#include <stdlib.h>

int soma_numeros(int,int);

int main()
{
    int a,b,c;
    a=2;
    b=9;

    c=soma_numeros(a,b);

    printf("Valor=> \n %d", c);

    return 0;
}

int soma_numeros(int num1,int num2){
    int num3=num1+num2;

    return num3;
}
