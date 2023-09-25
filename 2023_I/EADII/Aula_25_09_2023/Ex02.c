#include<stdio.h>
#include<stdlib.h>
#include <sys/time.h>
#include <time.h>

#define NUM 1000000
#define NUM2 10000000

void loopFunc(size_t num)
{
    int tmp = 0;
    for (int i = 0; i < num; ++i) {
        tmp += 1;
    }
}


unsigned long long fatorial(int n){
    int i;
    unsigned long long fat=1;

    for(i=n;i>1;i--){
        fat=fat*i;
    }
    return fat;
}

unsigned long long fatorial_recursiva(int n){
    unsigned long long fat;

    if(n>1){
        fat=n*fatorial_recursiva(n-1);
    }
    else{
        fat=1;
    }
    return fat;
}

float time_diff(struct timeval *start, struct timeval *end)
{
    return (end->tv_sec - start->tv_sec) + 1e-6*(end->tv_usec - start->tv_usec);
}



int main(){
    int n;
    unsigned long long res;
    n=20;

    struct timeval start; //tempo no inicio do codigo
    struct timeval end; //tempo no final do codigo


    gettimeofday(&start, NULL);
    res=fatorial(n);
    loopFunc(NUM);
    gettimeofday(&end, NULL);

    printf("Time spent: %0.8f sec\n",NUM, time_diff(&start, &end));



    //printf("Fatorial sem recursividade:\t %d\n",res);
    gettimeofday(&start, NULL);
    res=fatorial_recursiva(n);
    loopFunc(NUM2);
    gettimeofday(&end, NULL);

    printf("Time spent: %0.8f sec\n",NUM, time_diff(&start, &end));

    //printf("Fatorial com recursividade:\t %d\n",res);



    return 0;
}

