#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum;
    sum=0;

    for(int i=0; i<5;i++){
        sum=sum+1;
    }

    printf("Valor do somatorio=> \n %d", sum);

    return 0;
}
