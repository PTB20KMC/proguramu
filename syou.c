#include <stdio.h>

int f(int);

int main (void){
    int n;

    printf("����:");
    scanf ("%d",&n);
    printf ("�o��:%d\n",f(n));

    return 0;
}

int f(int n){
    if(n < 1)
        return 1;
    else
        return  n + f(n-2);
}

