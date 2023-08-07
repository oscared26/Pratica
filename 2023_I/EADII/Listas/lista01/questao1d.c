#include<stdio.h>
int main() 
{
  int i = 1, n;
  printf("Informe o valor de n:");
  scanf("%d", &n);
  while ( i < 2*n ) 
  {
    printf("%d\n",i);
    i+=2; // Equivalente a i=i+2;
  }
  return 0;
}
