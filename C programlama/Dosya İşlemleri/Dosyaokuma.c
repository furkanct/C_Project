#include<stdio.h>
#include<stdlib.h>

int main(){

    // fputc = karakter yazma
    // fputs = string yazma
    // fgetc = karakter alma
    // fgets = string alma

    FILE *dosya;

    char ismi[50][20];
    char ulke[50][20];
    char ulke1[50][20];
    int index = 0;
    int stok[50];
    char karakter;
    if((dosya = fopen("//home//cetin//Desktop//proje4//students.txt","r")) != NULL){

        // karakter = fgetc(dosya);
        //  while(karakter != EOF){
        //      printf("%c",karakter);
        //      karakter = fgetc(dosya);
        // }    
        while(!feof(dosya)){
            fscanf(dosya,"%s %s ",ismi[index],ulke[index]);
            
            index++;

        }
        for (int i = 0; i < index-1; i++){
            printf(" %s %d  \n",ismi[i],ulke[i]);
        }    
    }
}