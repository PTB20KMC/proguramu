#include<stdio.h>

void j_heikin(int);
int kosuu = 0;
float avr = 0;

int main(void){
    int n;

    while (1){
        printf ("®”’l:");
        if (scanf("%d",&n) == EOF)
            break;
        j_heikin(n);

    }
    printf ("“ü—Í‚³‚ê‚½®”’l‚Ì•½‹Ï = %.0f\n",avr/kosuu);

    return 0;
}
void j_heikin(int x){
    kosuu ++;
    avr += x;
}