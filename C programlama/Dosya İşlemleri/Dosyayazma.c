#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){

    FILE *dosyaninAdresi;

    dosyaninAdresi = fopen("//home//cetin//Desktop//Furkan//yazilar.txt","w");

    // // tek karakter yazdırıyor
    // fputc('K',dosyaninAdresi);

    // fprintf(dosyaninAdresi,"\n");
    // // String yazdırmak için 
    // fputs("Furkan çetin",dosyaninAdresi);
    // // dosya kapatma
    // fclose(dosyaninAdresi);

    // char isim[10];
    // printf("Lütfen bir isim giriniz..\n");
    // gets(isim);

    // fprintf(dosyaninAdresi,"benim adım: %s",isim);

    // int sayi1,sayi2;

    // printf("Lütfen 2 sayi giriniz..\n");
    // scanf("%d %d",&sayi1,&sayi2);
    // int toplam = sayi2 + sayi1;

    // fprintf(dosyaninAdresi,"Kullanıcının girmiş olduğu sayılar: \n");
    // fprintf(dosyaninAdresi,"%d %d\n",sayi1,sayi2);
    // fprintf(dosyaninAdresi,"bu sayıların toplamı: ");
    // fprintf(dosyaninAdresi,"%d + %d = %d",sayi1,sayi2,toplam);

    char ad [10],soyad[20];
    float maas;
    int yas;

    printf("Çalışanın adını ve soyadını giriniz.\n");
    gets(ad);
    gets(soyad);
    printf("Çalışanın maaşını giriniz..\n");
    scanf("%d",&maas);
    printf("Çalışanın yaşını giriniz..\n");
    scanf("%d",&yas);

    fprintf(dosyaninAdresi,"çalışanın bilgileri..\n");
    fprintf(dosyaninAdresi,"Ad: %s Soyadi: %s Maaş: %f Yas: %d",ad,soyad,maas,yas);

    fclose(dosyaninAdresi);
}