#include <stdlib.h>
#include <stdio.h>

int main(){

    int *alan1 = malloc(10*sizeof(int)); // bellekte yer ayırma
    int *alan2 = calloc(10,sizeof(int)); // bellekteki alanı 0 layıp yer ayırma

    alan2[2] = 100;

    for (int i = 0; i < 10; i++){
        printf("alan1[%d] = %d  alan2[%d]=%d\n ",i,alan1[i],i,alan2[i]);
    }
    // bellekteki alana ekleme yapma
    alan1 = realloc(alan1,15*sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("alan1[%d = %d\n",i,alan1[i]);
    }
    // Bellekteki alanı temizleme
    free(alan1);
    free(alan2);
}