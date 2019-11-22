#include<stdio.h>
void kuku (int);
int main(void)
{
    int n;
    printf ("n = ");
    scanf("%d", &n);
    kuku(n);
    return 0;
}

void kuku (int x){
    int i;
    if (x > 9)
        return;
    else{
        kuku(x + 1);

        printf ("[%d‚Ì’i]",x);
        for (i = 1; i <= 9; i++){
            printf("%2d ", i * x);
        }
        printf ("\n");
    }
    
}