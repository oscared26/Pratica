#include<stdio.h>
int main()
{
    int i = 0, valor, soma = 0, n;
    printf("Informe o valor de n:");
    scanf("%d", &n);
    while ( i < n )
    {
        printf("Digite um valor: ");
        scanf("%d",&valor);
        soma = soma + valor; 
        i++; 
    }
    printf("Soma=%d",soma);
    return 0;
}
