#include<stdio.h>
int main() 
{
  int i, n;
  printf("Informe o valor de n:");
  scanf("%d", &n);
  i = n;
  while ( i > 0 ) 
  {
    printf("%d\n",i);
    i=i-1;
  }
  return 0;
}
