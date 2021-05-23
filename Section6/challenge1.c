#include <stdio.h>

int main(){
    int length = 0, sum = 0;

    printf("Enter the dimension of the variable length array: ");
    scanf("%d", &length);

    int vla[length];

    for(int i = 0; i < length; i++){
        printf(" insert value number %d: ", i+1);
        scanf("%d", &vla[i]);   //oppure vla + i
    }

    for(int i = 0; i < length; i++){
        sum += vla[i];
    }

    printf("The total sum of the elemets is: %d\n", sum);

    return 0;
}