#include <stdlib.h>
#include <stdio.h>
#include <string.h>



struct ogrenci{
    char ad [30];
    char soyadi[30];
    char okul[30];
    char bolum[30];
    int numara;
    int sinif;
}ogrenci1,ogrenci2;

int main(){

    strcpy(ogrenci1.ad,"Furkan");
    strcpy(ogrenci1.soyadi,"Çetin");
    strcpy(ogrenci1.okul,"Marmara");
    strcpy(ogrenci1.bolum,"Bilgisayar");
    ogrenci1.numara = 150119627;
    ogrenci1.sinif = 2;

    printf("Öğrencinin adi: %s\n",ogrenci1.ad);

    strcpy(ogrenci2.ad,"Derya");
    strcpy(ogrenci2.soyadi,"Aksu");
    strcpy(ogrenci3.okul,"Marmara");
    strcpy(ogrenci4.bolum,"Hukuk");
    ogrenci2.numara = 150119627;
    ogrenci2.sinif = 2;
}