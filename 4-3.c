#include<stdio.h>
void star(int);
int main(void){
    int n;

    printf("二等辺の長さ:");
    scanf("%d",&n);
    star(n);

    return 0;

}

void star (int x){
    int i,j;
    printf("二等辺の長さ　%d　の三角形を描きます。\n",x);
    for (i = 0; i < x; i++){
        for (j = 0; j <= i; j++)
        printf("*");
    printf ("\n");
    }
}