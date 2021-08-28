#include <stdio.h>

long long convertDecimalToBinary(const int input);

int main(){
    long long output = 0;
    int input = 0;

    printf("Enter the decimal number to convert: ");
    scanf("%d", &input);

    output = convertDecimalToBinary(input);

    printf("The converted binary number is: %lld\n", output);

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