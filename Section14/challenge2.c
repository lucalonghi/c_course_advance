#include <stdio.h>

#define SUM(param1, param2) (param1+param2)

int main(){
    int p1,p2;

    printf("Enter param n 1 = ");
    scanf("%d",&p1);
    printf("Enter param n 2 = ");
    scanf("%d",&p2);

    printf("The sum is : %d\n", SUM(p1,p2));

    return 0;
}