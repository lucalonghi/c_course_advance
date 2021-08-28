#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(const long long input);

int main(){
    long long input = 0;
    int output = 0;

    printf("Enter the binary number to convert: ");
    scanf("%lld", &input);

    output = convertBinaryToDecimal(input);

    printf("The converted decimal number is: %d\n", output);

    return 0;
}

int convertBinaryToDecimal(const long long input){
    int remainder = 0, i = 0, out = 0;
    long long n = input;

    while(n != 0){
        remainder = n % 10;
        n /= 10;
        out += remainder*pow(2, i);
        i++;
    }
    return out;
}