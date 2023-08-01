#include <stdio.h>
#include <stdlib.h>

  int main() {
    int a = 6; //declara uma variavel
    int *p_b ;//declara ponteiro para um int

    p_b=&a;// atribui endereco do int para o ponteiro

    //expressa valores de duas formas
    printf("Valores: a= %d", a);
    printf(" , *p_b= %d\n", *p_b);

    //expressa endereco de duas formas
    printf("Enderecos: &a= %d", &a);
    printf(" ,p_b= %d\n", p_b);

	//Usa ponteiro para mudar o valor
	*p_b=*p_b +1;
	printf("Agora a= %d\n", a);
    return 0;
  }
