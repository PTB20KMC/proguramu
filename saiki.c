#include<stdio.h>
void star(int);
int main(void){
    int n;

    printf("input:");
    scanf("%d",&n);
    star(n);

    return 0;

}

void star(int x){
    int i;
    printf ("二等辺の長さ%dの三角形を描きます。\n",x);

    if (x >= 1){ 
        star(x - 1);
        for (i = 0; i < x; i++)
            printf ("*");
        printf ("\n");
    
    }
}
