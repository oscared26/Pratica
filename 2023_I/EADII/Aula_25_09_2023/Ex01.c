#include<stdio.h>
#include<stdlib.h>

int fatorial(int n){
    int i,fat=1;

    for(i=n;i>1;i--){
        fat=fat*i;
    }
    return fat;
}

int fatorial_recursiva(int n){
    int fat;

    if(n>1){
        fat=n*fatorial_recursiva(n-1);
    }
    else{
        fat=1;
    }
    return fat;
}
int main(){
    int n,res;
    n=5;
    res=fatorial(n);
    printf("Fatorial sem recursividade:\t %d\n",res);

    res=fatorial_recursiva(n);
    printf("Fatorial com recursividade:\t %d\n",res);
  
    return 0;
}

