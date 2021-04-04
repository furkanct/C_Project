#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct calisanlar{

    char ad[30];
    char soyadi[30];
    char tarih[30];
    float maas;
    
    char cinsiyet;
};
void BilgileriGoster(struct calisanlar eleman){
    //printf("%s %s %s %s %f %d %c",eleman.ad,eleman.soyadi,eleman.tarih,eleman.maas,eleman.cinsiyet);
}

int main(){

    struct calisanlar calisan1;

    printf("Lütfen çalışanın bilgilerini giriniz..\n");
   // scanf("%s %s %s %s %f %d %c",calisan1.ad,calisan1.soyadi,calisan1.tarih,&calisan1.maas,calisan1.cinsiyet);
    
    printf("çalışanın bilgileri..\n");
    BilgileriGoster(calisan1);
}
