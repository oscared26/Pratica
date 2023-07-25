#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int res,n=5;

    res=factorial(n);

    printf("Fatorial=> %d",res);

    return 0;
}

int factorial(int n){
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
