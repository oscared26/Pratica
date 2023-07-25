#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;

    printf("Ingresse o numero A=> \n");
    scanf("%d",&A);

    if(A>5){
        printf("A e maior ou igual que 5");
    }
    else{
        printf("A e menor que 5");
    }

    return 0;
}
