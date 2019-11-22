#include<stdio.h>


int main(void){
    int i;
    for (i = 0; i < 20;i++){
        printf("%4d",fibo(i));
        if (i % 10 == 9)
            printf ("\n");
        else
            printf(",");
    }
    return 0;
}

int fibo(int a){
    if (a < 2 )
    return 1;
    else
    return fibo (a - 1) + fibo (a - 2);
}
   