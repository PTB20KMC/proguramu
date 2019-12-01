#include<stdio.h>

void f(int);

int main(void){
    int n;

    printf("“ü—Í:");
    scanf("%d",&n);
    f (n);
    putchar ('\n');

    return 0;
}

void f(int n){
    if (n == 0)
        putchar('\n');
    else{
        putchar('A');
        f(n - 1);
        putchar('B');
    }
}