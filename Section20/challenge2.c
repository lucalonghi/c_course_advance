#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {

    int p1 = fork();

    int p2 = fork();

    if (p1 > 0 && p2 > 0){
        printf("parent\n");
        printf("%d %d\n", p1, p2);
        printf("   id = %d\n", getpid());
        printf("   pid = %d\n", getppid());
    }else if(p1 == 0 && p2 > 0){
        printf("first child\n");
        printf("%d %d\n", p1, p2);
        printf("   id = %d\n", getpid());
        printf("   pid = %d\n", getppid());
    }else if(p1 > 0 && p2 == 0){
        printf("second child\n");
        printf("%d %d\n", p1, p2);
        printf("   id = %d\n", getpid());
        printf("   pid = %d\n", getppid());
    }else{
        printf("third child\n");
        printf("%d %d\n", p1, p2);
        printf("   id = %d\n", getpid());
        printf("   pid = %d\n", getppid());
    }

    return 0;

}