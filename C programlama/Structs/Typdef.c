#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Ogrenciler {
    int okulNo;
    char isim[15];
    char soyisim[15];
    int sinif;
    double ortalama;
}Ogrenci;
int main(){

    Ogrenci ogrenci1;
    Ogrenci ogrenci2;

    ogrenci1.okulNo = 450;
    strcpy(ogrenci1.isim,"Furkan");
    strcpy(ogrenci1.soyisim,"Furkan");
    ogrenci1.sinif = 12;
    ogrenci1.ortalama = 83.2;

    printf("Lütfen bilgileri giriniz..\n");
   // scanf("%d %s %s %d  %f",&ogrenci2.okulNo,ogrenci2.isim,ogrenci2.soyisim,&ogrenci2.sinif,&ogrenci2.ortalama);
    
    printf("%d %s %s %d  %f\n",ogrenci1.okulNo,ogrenci1.isim,ogrenci1.soyisim,ogrenci1.sinif,ogrenci1.ortalama);
    //printf("%d %s %s %d  %f\n",&ogrenci2.okulNo,ogrenci2.isim,ogrenci2.soyisim,ogrenci2.sinif,ogrenci2.ortalama);

}