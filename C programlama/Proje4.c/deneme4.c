#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void satiriAyir(char *satir){

    char *kelime = NULL;
    kelime = strtok (satir,"\t");
    printf("Satirdaki isim : %s\n",satir);
    
    for(int i=0; i<strlen(satir);i++){
        if(satir[i] == ' '){
            printf("isim : %s\n",satir);
        }
    }
    while (kelime != NULL){
        ekle(kelime);
        kelime = strtok (NULL, " ");
    }
}

int main(){

    eklenecek = (Node *)malloc(sizeof(Node));
    eklenecek->next = NULL;
    bas = eklenecek;

    FILE *fp = fopen("//home//cetin//Desktop//Proje4//students.txt","r");
    char satir[1000];

    while (fgets( satir, sizeof(satir), fp )){
        satiriAyir(satir);
    }
    fclose(fp);
    return 0;
}
