#include <stdio.h>

union student{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main(){

    union student variabile1, variabile2;

    variabile1.letterGrade = 's';
    variabile1.roundedGrade = 10;
    variabile1.exactGrade = 10.1;

    printf("%c\n", variabile1.letterGrade);
    printf("%d\n", variabile1.roundedGrade);
    printf("%f\n\n", variabile1.exactGrade);

    variabile2.letterGrade = 'A';
    printf("%c\n", variabile2.letterGrade);
    variabile2.roundedGrade = 10;
    printf("%d\n", variabile2.roundedGrade);
    variabile2.exactGrade = 10.1;
    printf("%f\n", variabile2.exactGrade);

    return 0;
}