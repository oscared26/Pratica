#include<stdio.h>
int main() 
{
  int cont = 0, n;
  printf("Informe o valor de n:");
  scanf("%d", &n);
  while ( cont < n ) 
  {
    printf("%d\n",cont);
    cont=cont+1;
  }
  return 0;
}
