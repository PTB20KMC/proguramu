#include<stdio.h>
#include<string.h>

char s[] = "I gnimmargorP";

void f (int);

int main(void){
    f(strlen(s));
    return 0;
}

void f (int n){
    if (n > 0 ){
        printf ("%c",s[n -1]);
        f(n - 1);
    }else
        printf ("\n");
}