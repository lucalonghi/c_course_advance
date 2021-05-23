#include <stdio.h>

//perchè funzioni devo compilare sia il _main che _display gcc -Wall challenge3_main.c challenge3_display.c -o challenge3_main

int counter = 0;
extern void display();

int main(){
    while(counter <5)
        display();

    return 0;
}