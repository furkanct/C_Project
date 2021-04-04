#include <stdio.h>
#include<stdlib.h>

int main(){

    printf("MENÜ\t\tSİPARİŞ KODU\tFİYAT\n");
    printf("Başlangıçlar\t\t1\t5.5 Tl\n");
    printf("Ara Sıcaklar\t\t2\t7.5 Tl\n");
    printf("Salatalar\t\t3\t12 Tl\n");
    printf("Ana Yemekler\t\t4\t17.5 Tl\n");
    printf("Tatlılar\t\t5\t11.25 Tl\n");
    printf("İçecekler\t\t6\t2.25 Tl\n");

    int siparis;
    float toplam;
menu:   printf("Lütfen yemek istediğiniz ürünün sipariş kodunu giriniz..\n");
        scanf("%d",&siparis);
        if (siparis== -1){
            goto cikis;
        }


    switch (siparis)
    {
    case 1:
        toplam += 5.5;
        printf("Toplam Tutar: %f\n",toplam);
        break;
    case 2:
        toplam += 7.5;
        printf("Toplam Tutar: %f\n",toplam);
        break;
    case 3:
        toplam += 12.0;
        printf("Toplam Tutar: %f\n",toplam);
        break;
    case 4:
        toplam += 17.5;
        printf("Toplam Tutar: %f\n",toplam);
        break;
    case 5:
        toplam += 11.25;
        printf("Toplam Tutar: %f\n",toplam);
        break;
    case 6:
        toplam += 2.25;
        printf("Toplam Tutar: %f\n",toplam);
        break;
    
    
    default: printf("Lütfen 1-6 arası bir seçim yapınız...\n");
        break;
    }

    goto menu;
    cikis:
        printf("Siparişiniz tamamlandı...");
       

}