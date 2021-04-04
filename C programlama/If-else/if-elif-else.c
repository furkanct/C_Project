#include <stdio.h>
#include <stdlib.h>


int main(){
    /*
    0-100 adet --> adet fiyatı = 3.00 tl
    100-200 adet --> adet fiyat = 2.5 tl
    200-300 adet --> adet fiyatı = 2.00 tl
    300-400 adet --> adet fiyatı = 1.25 tl 
    400 ve üzeri --> adet fiyatı = 0.75 tl 


    */
//    int adet;
//    float fiyat;

//    printf("Kaç adet ürün alıcaksınız?\n");
//    scanf("%d",&adet);

//    if (adet >= 400)
//    {
//        fiyat = 0.75;
//    }
//    else if (adet >= 300 & adet <=400)
//    {
//        fiyat = 1.25;
//    }
//       else if (adet >= 200 & adet <=300)
//    {
//        fiyat = 2.00;
//    }
//       else if (adet >= 100 & adet <=200)
//    {
//        fiyat = 2.5;
//    }
//       else if (adet >= 0 & adet <=100)
//    {
//        fiyat = 3.00;
//    }
//    else
//    {
//        printf("Lütfen 1 veya 1 den büyük bir sayı giriniz.");
//    }
//    float toplamtutar= adet*fiyat;
//    int toplamtutaryuvarlama = toplamtutar;
//    printf("Toplam ödenecek tutar : %d  tl \n" ,toplamtutaryuvarlama );


//    float sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;
    
//    printf("Lütfen üç farklı tam sayı giriniz.."); 
//    scanf("%f%f%f" , &sayi1,&sayi2,&sayi3);

//    toplam = (sayi1 + sayi2 + sayi3);
//    carpim = sayi1 * sayi2 * sayi3;
//    ortalama = (toplam) / 3;

//    printf("Toplam : %f \nÇarpım: %f \nOrtalama: %f", toplam , carpim,ortalama );

//    kucuk = sayi1;

//    if (kucuk> sayi2)
//    {
//        kucuk = sayi2;
//    }
//    else if (kucuk > sayi3)
//    {
//        kucuk = sayi3;
//    }

//    printf("Küçük sayı: %d", kucuk);

char karakter;

printf("Bize bir karakter söyle sana ASCII değerini söyleyeyim..");
scanf("%c",&karakter);

int asci = karakter;
if (asci >= 65 && asci <=90)
{
    printf("%d Büyük bir harftir..\n", asci);
}
else if (asci >= 97 && asci <= 122)
{
    printf("%d Karakter küçük bir harftir..\n" ,asci);
}
else
{
    printf("Lütfen a-z veya A-Z aralığında bir karakter giriniz..\n");
}

   

   
   
    return 0;
    
    
}