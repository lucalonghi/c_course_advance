#include <stdio.h>
#include <malloc.h>

//ricorda che il passaggio è per copia, se non ci fosse il doppio puntatore non funzionerebbe
void allocateMemory(int **ptr){ 
    *ptr = (int *) malloc(sizeof(int));
}

int main(){
    int *p1 = NULL;

    allocateMemory(&p1);

    *p1 = 5;

    printf("%d\n", *p1);
 
    free(p1);

    return 0;
} 
