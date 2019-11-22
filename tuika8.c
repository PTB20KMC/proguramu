#include <stdio.h>

int bin (int);

int main(void){
    int n;
    printf ("n = ");
    scanf("%d",&n);
    bin (n);
    return 0;
}

int bin (int x){
    if(x < 1){
        return 0;
    }
    else {
     bin(x / 2);
    printf ("%d\n",x % 2);
    }
    
}