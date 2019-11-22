#include<stdio.h>
int gcm(int,int);
int main(void)
{
    int a,b;

    printf("“ñ‚Â‚Ì®”’l:");
    scanf("%d%d",&a,&b);
    printf("%d‚Æ%d‚ÌÅ‘åŒö–ñ”‚ğ‹‚ß‚Ü‚·B\n",a,b);

    printf("Å‘åŒö–ñ” = %d\n",gcm(a,b));
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