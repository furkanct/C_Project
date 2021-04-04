#include<stdio.h>
#include<stdlib.h>

int main()
{
    // float sayi;
    // char devam;
    // float buyuk =0;

    // do
    // {
    //     printf("Lütfen bir sayı giriniz..\n");
    //     scanf("%f",&sayi);

    //     if (sayi> buyuk)
    //     {
    //         buyuk = sayi;
    //         printf("Yeni büyük sayımız %f\n",buyuk);
    //     }
        


    //     printf("Büyük sayıyı hesaplamaya devam etmek istiyor musun\n");
    //     scanf(" %c",&devam);
        
    // } while (devam == 'E' || devam == 'e');
    // printf("Program başarıyla sonuçlandı..\n");

    // int sayi;
    // int basamaksayisi=0;
    // int toplam=0;

    // printf ("Lütfen sayı değerlerinin toplamını öğrenmek istediğiniz sayıyı giriniz..\n");
    // scanf("%d",&sayi);

    // int ilksayi= sayi;
    // do
    // {
    //     toplam += sayi%10;
    //     basamaksayisi++;

    //     sayi = sayi/10;
    // } while (sayi>0);
    // printf("%d %d basamaklı bir sayıdır ve sayı değerleri toplamı: %d\n",ilksayi,basamaksayisi,toplam);
    

    int sayi1, sayi2,buyuk,kucuk,kalan;

    do
    {
        printf("Ebobunu bulmak istediğiniz 2 sayıyı giriniz.\n");
        scanf("%d %d",&sayi1,&sayi2);

    } while (sayi1 <= 0 || sayi2 <= 0);

    if (sayi1 > sayi2)
    {
        buyuk = sayi1;
        kucuk = sayi2;
    }
    else
    {
        buyuk = sayi2;
        kucuk = sayi1;
    }

    kalan = buyuk % kucuk;
    while (kalan !=0)
    {
        if(kalan >= kucuk){
            buyuk = kalan;
        }
        else
        {
            buyuk = kucuk;
            kucuk=kalan;
        }
        kalan = buyuk %kucuk;
        
    }
    
    
    printf("Ebob(%d %d) = %d\n",sayi1,sayi2,kucuk);
    

    return 0;

}