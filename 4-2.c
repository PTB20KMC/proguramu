#include<stdio.h>

void j_heikin(int);
int kosuu = 0;
float avr = 0;

int main(void){
    int n;

    while (1){
        printf ("整数値:");
        if (scanf("%d",&n) == EOF)
            break;
        j_heikin(n);

    }
    printf ("入力された整数値の平均 = %.0f\n",avr/kosuu);

    return 0;
}
void j_heikin(int x){
    kosuu ++;
    avr += x;
}