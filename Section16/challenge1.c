#include <stdio.h>

int main(){
    int p1 = 5;

    int *pp;
    int **ppp; 

    pp = &p1;
    ppp = &pp;

    printf("value normal int var\n");
    printf("%d\n", p1);
    printf("%d\n", *pp);
    printf("%d\n", **ppp);

    printf("address normal int var\n");
    printf("%d\n", &p1);
    printf("%d\n", pp);
    printf("%d\n", *ppp);

    printf("value single pointer to normal int var\n");
    printf("%d\n", pp);
    printf("%d\n", *ppp);

    printf("address single pointer to normal int var\n");
    printf("%d\n", &pp);
    printf("%d\n", ppp);

    printf("address double pointer to normal int var\n");
    printf("%d\n", &ppp);

    printf("value double pointer to normal int var\n");
    printf("%d\n", ppp);

    return 0;
} 
