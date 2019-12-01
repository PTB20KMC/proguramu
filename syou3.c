#include<stdio.h>

int f(int,int );

int main(void){
    int a,b;

    printf("“ü—Í:");
    scanf("%d%d", &a,&b);
    printf("o—Í:%d\n",f(a,b));

    return 0;
}

int f(int n1,int n2){
    if(n2 < n1)
        return 1;
    else
        return  n1 * f (n1,n2-n1);
}