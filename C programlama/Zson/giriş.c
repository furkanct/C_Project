#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;

    printf("Lütfen bir sayı giriniz:");
    scanf("%d",&sayi );

    printf("Yaşınız: %d \n" , sayi);


    float cap;

    printf("Lütfen çemberin yarıçapını giriniz:");
    scanf("%f",&cap );

    printf("Yaşınız: %f \n" , 2*PI*cap);

    return 0;



}
 
