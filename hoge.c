#include<stdio.h>
int gcm(int,int);
int main(void)
{
    int a,b;

    printf("二つの整数値:");
    scanf("%d%d",&a,&b);
    printf("%dと%dの最大公約数を求めます。\n",a,b);

    printf("最大公約数 = %d\n",gcm(a,b));
    return 0;
}

int gcm(int x,int y){
    int amari;
    amari = x % y;
    if (amari == 0)
        return y;
    else{

    x = y;
    y = amari;
    gcm(x,y);
    }
}