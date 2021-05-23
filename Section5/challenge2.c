#include <stdio.h>

int sum(int);

int main(){

    printf("%d", sum(25));
    printf("%d", sum(15));
    printf("%d\n", sum(30));

    return 0;
}

int sum(int value){
    static int total = 0;   //NOTA BENE L'INIZIALIZZAZIONE VIENE FATTA SOLO ALLA PRIMA CHIAMATA!!

    total += value;

    return total;
}