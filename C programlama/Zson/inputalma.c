#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main(){

    int sayi;
    float kesirli_sayi;
    double kesirlisayi2;
    char karakter;
    char karakterDizisi [5];

    printf("Lütfen bir sayı giriniz: \n");
    scanf("%d",&sayi);

    printf("Lütfen bir float sayı giriniz: \n");
    scanf("%f",&kesirli_sayi);

    printf("Lütfen double bir sayı giriniz: \n");
    scanf("%lf",&kesirlisayi2);

    printf("Lütfen char giriniz: \n");
    scanf(" %c",&karakter);


    printf("Lütfen char dizisi giriniz: \n");
    scanf("%s",&karakterDizisi);

    printf("Girilen sayı: %d \n",sayi);
    printf("Girilen float değer: %d \n",kesirli_sayi);
    printf("Girilen double değer: %f \n",kesirlisayi2);
    printf("Girilen karaker: %c \n",karakter);
    printf("Girilen karakter dizisi: %s \n",karakterDizisi);

    return 0;

}