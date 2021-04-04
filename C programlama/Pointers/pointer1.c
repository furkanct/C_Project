#include <stdio.h>
#include<stdlib.h>


int main(){

    // int sayi;
    // printf("Bir sayi giriniz.\n");
    // scanf("%d",&sayi);

    // int *sayininAdresi;
    // sayininAdresi = &sayi;
    
    // printf("Sayi :%d  Sayinin Adresi: %x\n",*sayininAdresi,sayininAdresi);


    int sayi = 12, *sayininAdresi;
    float kesirlisayi = 7.2, *kesirlisayininAdresi;
    char karakter = 'K',*karakterinAdresi;

    printf("%d\n",sayi);
    printf("%f\n",kesirlisayi);
    printf("%c\n",karakter);

    printf("\n");
    sayininAdresi = &sayi;
    kesirlisayininAdresi = &kesirlisayi;
    karakterinAdresi = &karakter;

    printf("%d  %x\n",*sayininAdresi,sayininAdresi);
    printf("%f  %x\n",*kesirlisayininAdresi,kesirlisayininAdresi);
    printf("%c  %x\n",*karakterinAdresi,karakterinAdresi);

    printf("\n");
    int sayilar[6] = {1,2,3,4,5,6};

    int *sayilarDizisiniAdresi;
    sayilarDizisiniAdresi = &sayilar;

    printf("%d\n",*sayilarDizisiniAdresi);
    printf("%d\n",*sayilarDizisiniAdresi+1);
    printf("%d\n",*sayilarDizisiniAdresi+2);
    printf("%d\n",*sayilarDizisiniAdresi+3);
    printf("%d\n",*sayilarDizisiniAdresi+4);
    printf("%d\n",*sayilarDizisiniAdresi+5);

    return 0;

}