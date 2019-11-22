#include <stdio.h>

int even(int);

int main(void){
    int n;

    printf ("n = ");
    scanf("%d",&n);
    printf ("%d”Ô–Ú‚Ì‹ô” = %d\n",n,even(n));
    return 0;
}

int even(int a){
    if (a == 1)
        return 2;
    else
        return even(a - 1) + 2;
}