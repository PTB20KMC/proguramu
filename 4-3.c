#include<stdio.h>
void star(int);
int main(void){
    int n;

    printf("�񓙕ӂ̒���:");
    scanf("%d",&n);
    star(n);

    return 0;

}

void star (int x){
    int i,j;
    printf("�񓙕ӂ̒����@%d�@�̎O�p�`��`���܂��B\n",x);
    for (i = 0; i < x; i++){
        for (j = 0; j <= i; j++)
        printf("*");
    printf ("\n");
    }
}