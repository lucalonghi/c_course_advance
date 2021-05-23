#include <stdio.h>

static double var2 = 0.2;   //global varible accessible only in this file

float var3 = 0.5;


static void stamp();

int main(){

    register int var5 = 9;   //register varible

    stamp();

    var2++;
    var3++;
    var5++;

    return 0;
}

static void stamp(){    //function accessible only in this file
    
    int var1 = 5;    //block scope and temporary storage

    static float var4 = 1.1;   //local variable with permanent storage

    printf("Variable with block scope and temporary storage: var1 = %d\n", var1);
    printf("Variable with block scope and permanent storage: var4 = %f\n", var4);
}