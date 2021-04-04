#include<stdlib.h>
#include<stdio.h>


void yildizbas(int *adet){
    
    for (int i = 0; i < *adet; i++){
        printf(" * ");
    }
    
}
int main(){

    int sayi;

    printf("Kaç adet yıldız bastırmak istiyorsunuz.\n");
    scanf("%d",&sayi);

    yildizbas(&sayi);

    return 0;
}