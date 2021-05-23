#include <stdio.h>

extern int counter;

void display(){
    counter++;
    printf("%d\n", counter);
}