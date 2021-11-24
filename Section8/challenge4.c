#include <stdio.h>

int main(){
    int in1 = 0, pos = 0, newnum = 0, bitstatus = 0;

    printf("Enter any number: ");
    scanf("%d", &in1);
    printf("Enter nth bit to check and set (0-31): ");
    scanf("%d", &pos);

    bitstatus = (in1 >> pos) & 1;
    printf("The %d bit is set to %d\n", pos, bitstatus);

    newnum = (1 << pos) | in1;
    printf("\nBit set successfully.\n\n");

    printf("Number before setting %d bit: %d (in decimal)\n", pos, in1);
    printf("Number after setting %d bit: %d (in decimal)\n", pos, newnum);


    return 0;
}
