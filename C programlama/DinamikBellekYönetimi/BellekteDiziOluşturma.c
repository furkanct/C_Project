#include <stdio.h>
#include<stdlib.h>

int main(){

    int *sayiDizisi = calloc(5,sizeof(int));

    sayiDizisi[0] = 5;
    sayiDizisi[1] = 15;
    sayiDizisi[2] = 25;
    sayiDizisi[3] = 35;
    printf("Dizinin 5. elemanın giriniz:\n");
    scanf("%d",&sayiDizisi[4]);

    int toplam = 0 ;
    for (int i = 0; i < 5; i++){
        toplam += sayiDizisi[i];
    }
    printf("%d\n",toplam);


    int *karakterDizisi = calloc(6,sizeof(char));

    karakterDizisi[0] = 'F';
    karakterDizisi[1] = 'u';
    karakterDizisi[2] = 'r';
    karakterDizisi[3] = 'k';
    karakterDizisi[4] = 'a';
    
    printf("Dizinin 6. elemanın giriniz:\n");
    // scanf(" %c",&karakterDizisi[5]);

    
    for (int i = 0; i < 6; i++){
        printf("%c",karakterDizisi[i]);
    }

    char** cokBoyutluKarakterDizisi;

    cokBoyutluKarakterDizisi = malloc(sizeof(char*)*3);

    for (int i = 0; i < 10; i++){
        cokBoyutluKarakterDizisi[i] = malloc(10*sizeof(char));
    }

    cokBoyutluKarakterDizisi[0] = "kaan";
    cokBoyutluKarakterDizisi[1] = "academy";
    cokBoyutluKarakterDizisi[2] = "Furkan";

    for (int i = 0; i < 3; i++){
        printf("%s\n",cokBoyutluKarakterDizisi[i]);
    }
    
    


}