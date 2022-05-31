#include <stdio.h>

#define SQUARE(param) (param*param)
#define CUBE(param) (SQUARE(param)*param)

int main(){
    int p1;

    printf("Enter param n 1 = ");
    scanf("%d",&p1);

    printf("The square is : %d\n", SQUARE(p1));
    printf("The cube is : %d\n", CUBE(p1));

    return 0;
}