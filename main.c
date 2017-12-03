// Алексей Яковлев

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void task3b (int *a, int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

int maxNum(int a, int b, int c){
    return (c>(a=a>b?a:b))?c:a;
}

int task13a (){
    return rand()%100+1;
}

int task13b (){
    return time(NULL)%100+1;
}

void task14(long long in){
    for (long long i=1;i<=in;i++){
        if(i==((i*i)%(int)pow(10,(int)(log10(i)+1)))) printf("%d \t",i);
    }
}

int main() {

    printf("task3b ");
    int a=2, b=3;
    printf("before swap %d, %d",a,b);
    task3b(&a,&b);
    printf(" after swap %d, %d\n",a,b);

    printf("task12 Max from %d, %d, %d =  %d \n", 21,25,11 ,maxNum(21,25,11));

    srand(time(NULL));
    printf("task13a %i \n", task13a());
    printf("task13b %d \n",task13b());

    printf("task14:\n");
    task14(100000000);

    return 0;
}

