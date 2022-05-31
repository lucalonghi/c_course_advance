#include <stdio.h>
#include <ctype.h>

#define IS_UPPER(param) (isupper(param) ? 1 : 0)
#define IS_LOWER(param) (islower(param) ? 1 : 0)

int main(){
    char p1;

    printf("Enter param n 1 = ");
    scanf("%c",&p1);

    if(IS_LOWER(p1)){
        printf("it is lower case\n");
    }
    if(IS_UPPER(p1)){
        printf("it is upper case\n");
    }

    return 0;
}