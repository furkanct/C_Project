#include <stdio.h>
#include <stdlib.h>
 
int main(){

    // int kenar;
// 
    // printf("Kenar giriniz:");
    // scanf("%d",&kenar);
    // printf("Karenin alanı: %d\n",kenar*kenar);
// 
    // int kenar1;
    // int kenar2;
// 
    // printf("Dikdörtgenin kısa Kenarını ve uzun kenarını giriniz:");
    // scanf("%d %d",&kenar1,&kenar2);
    // printf("Dikdörtgenin alanı: %d\n",kenar1*kenar2);
// 
    // float pi = 3.14;
    // float aa;
// 
    // printf("çemberin yarı çapını giriniz:");
    // scanf("%f",&aa);
    // float alan = (pi*aa*aa);
    // printf("Çemberin alan: %f\n",alan);
    // float cevre = (2*pi*aa);
    // printf("Çevre: %f", cevre);
// 
    // float a,b,c,x;
    // printf("Sırasıyla a,b,c ve x değerlerini giriniz:");
    // scanf("%f %f %f %f",&a,&b,&c,&x);
// 
    // float sonuc=a*x*x + b*x +c;
    // printf("Denklemin sonucu: %d",(int)sonuc);


    int sayi ,onbinler,binler,yuzler,onlar,birler;
    printf("5 basamaklı bir sayı giriniz:");
    scanf("%d",&sayi);

    onbinler = sayi /10000;
    binler = (sayi%10000) / 1000;
    yuzler = (sayi%1000) / 100;
    onlar = (sayi%100) / 10;
    birler = sayi %10;

    printf("Sayının onbinler basamağının sayı değeri: %d\n" , onbinler);
    printf("Sayının binler basamağının sayı değeri: %d\n" , binler);
    printf("Sayının yüzler basamağının sayı değeri: %d\n" , yuzler);
    printf("Sayının onlar basamağının sayı değeri: %d\n" , onlar);
    printf("Sayının birler basamağının sayı değeri: %d\n" , birler);



    return 0;

}