#include <stdio.h>

long long convertDecimalToBinary(const int input);

int main(){
    int in1 = 0, in2 = 0, op = 0;

    printf("Enter a decimal numbers: ");
    scanf("%d", &in1);
    printf("Enter another decimal numbers: ");
    scanf("%d", &in2);

    op = ~in1;
    printf("The result of applying the ~ operator on number %d (%lld) is: %lld\n", in1, convertDecimalToBinary(in1), convertDecimalToBinary(op));
    op = ~in2;
    printf("The result of applying the ~ operator on number %d (%lld) is: %lld\n", in2, convertDecimalToBinary(in2), convertDecimalToBinary(op));
    op = in1 & in2;
    printf("The result of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld\n", in1, convertDecimalToBinary(in1), in2, 
        convertDecimalToBinary(in2), convertDecimalToBinary(op));
    op = in1 | in2;
    printf("The result of applying the | operator on number %d (%lld) and number %d (%lld) is: %lld\n", in1, convertDecimalToBinary(in1), in2, 
        convertDecimalToBinary(in2), convertDecimalToBinary(op));
    op = in1 ^ in2;
    printf("The result of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld\n", in1, convertDecimalToBinary(in1), in2, 
        convertDecimalToBinary(in2), convertDecimalToBinary(op));
    op = in1 << 2;
    printf("The result of applying the << operator on number %d (%lld) by 2 places is: %d (%lld)\n", in1, convertDecimalToBinary(in1), 
        op, convertDecimalToBinary(op));

    return 0;
}

long long convertDecimalToBinary(const int input){
    int remainder = 0;
    long long out = 0, i = 1;
    int n = input;

    while(n != 0){
        remainder = n % 2;
        n /= 2;
        out += remainder * i;
        i *= 10;
    }
    return out;
}