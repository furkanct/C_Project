#include<stdio.h>
#include<stdlib.h>

int main(){


                                    // SAYI DİZİLERİ

    // int sayilar[] = {1,2,3,4,5};
    // for (int i = 0; i < 5 ; i++)
    // {
    //     printf("%d\n",sayilar[i]);
        
    // }

    // float sayilar1[] = {2.3,2.6,4.5,123.65};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%.1f\n",sayilar1[i]);
    // }

    // float sayilar2[7]={};
    // int i; 
    // for (  i = 0; i < 7; i++)
    // {
    //     printf("%d. elemanı giriniz....\n",i+1);
    //     scanf("%f",&sayilar2[i]);
    // }
    
    // for ( i = 0; i < 7; i++)
    // {
    //     printf("%.1f ",sayilar2[i]);
    // }

                                    // KARAKTER DİZİLERİ


    // char isim [4] = "Cam";

    // printf("%s\n",isim);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d . elemanı : %c\n",i,isim[i]);
    // }
    
    // char takimismi[] = {'B','a','r','c','a'};
    // printf("%s\n",takimismi);

    // char ulkeler[] ={};
    // printf("Lütfen bir karakter dizisi giriniz..\n");
    // scanf("%s",ulkeler);

    // printf("%s",ulkeler);

    
                                    // AÇIK KAPI ALGORİTMASI   
    // int acik[10] = {0};

    // int tur, kapi ; 

    // for (tur = 0; tur< 10; tur++){
    //     for (kapi = tur; kapi <10; kapi = kapi + tur+1){
    //         acik[kapi] = !acik[kapi];
    //     }
        
    // }
    // printf("Açık kapılarmız şunlardır\n");
    // for (kapi = 0; kapi< 10; kapi++){
    //     if(acik[kapi]){
    //         printf("%d \n",kapi +1);
    //     }
    // }
    
                                     // SAYILSAL LOTO ALGORİTMASI

    // int rastgelesayi;
    // srand(time(NULL));
    // int loto [49] = {0};

    // printf("Sayılar üretilmeye başlanıyor...\n");

    // for (int i = 0; i < 6; i++)
    // {
    //     rastgelesayi = 1 + rand() %49;

    //     while (loto[rastgelesayi -1]==1){
    //         rastgelesayi = 1 + rand () %49;
    //     }

    //     loto[rastgelesayi -1] = 1;
    //     printf("%d ",rastgelesayi);    
    // }

    // printf("\nÇekiliş tamamlandı\n");


                                 // PAROLA DOĞRULAMASI

    //  char sifre[80]= {80};
    //  char sifredogrulama[80];
    //  int i ;
    //  int yanlis;

    //  while (i){
    //      yanlis = 0;
    //      i = 0;

    //      printf("Parolanızı giriniz.\n");
    //      scanf("%s",sifre);
    //      printf("Parolanızı tekrar giriniz.\n");
    //      scanf("%s",sifredogrulama);

    //      while (!(sifre[i] == '\0' && sifredogrulama[i] == '\0')){
            
    //         if (sifre[i] != sifredogrulama[i]){
    //             printf("Hatalı giriş yaptınız. Lütfen 1. ve 2. şifrenizi aynı giriniz.\n");
    //             yanlis = 1;
    //             break;
    //         }
    //         else{
    //             i++;
    //         }
    //     }
    //      if (yanlis == 0){
    //         printf("Kaydınız tamamlandı.\n");
    //         break;
    //     }
    //  }

                                 // ORTALAMA BULMA PROGRAMI 


    // int girilensayi;    
    // float sayilar[100],toplam=0,ortalama;

    // printf("Lütfen kaç tane sayının ortalamasını hesaplamak istediğinizi giriniz.\n");
    // scanf("%d",&girilensayi);

    // while (girilensayi>100 || girilensayi <=0){
    //     printf("Lütfen 1-100 arasında bir sayı giriniz..\n");
    //     printf("Lütfen kaç tane sayının ortalamasını hesaplamak istediğinizi giriniz.\n");
    //     scanf("%d",&girilensayi);
    // }

    // for (int i = 0; i < girilensayi; i++){
    //     printf("Lütfen %d. sayıyı giriniz..\n",i+1);
    //     scanf("%f",&sayilar[i]);
    //     toplam += sayilar[i];
    // }

    // ortalama = toplam / girilensayi;
    // printf("Girilen sayiların toplami = %f\n",toplam);
    // printf("Girilen sayiların ortalaması = %f\n",ortalama);  


                                    // ÇOK BOYUTLU DİZİ


    // int cokboyutludizi [3][2] = {1,2,3,4,5,6};

    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d",cokboyutludizi[i][j]);
    //     }
    //     printf("\n");
        
    // }
    // int satirsayisi, sutunsayisi;

    // printf("Kaç satır istiyorsunuz..\n");
    // scanf("%d",&satirsayisi);
    // printf("Kaç sütün istiyorsunuz..\n");
    // scanf("%d",&sutunsayisi);
    
    // int cokboyutludizi2[satirsayisi][sutunsayisi];

    // for (int i = 0; i < satirsayisi; i++){
    //     for (int j = 0; j < sutunsayisi; j++){
    //         printf("%d.satırdaki %d. sütündeki sayıyı giriniz.\n",i,j);
    //         scanf("%d",&cokboyutludizi2[i][j]);
    //     }
    //     printf("\n");
    // }
    
    //     for (int i = 0; i < satirsayisi; i++){
    //     for (int j = 0; j < sutunsayisi; j++){
    //         printf("%d ",cokboyutludizi2[i][j]);
    //     }
    //     printf("\n");
    // }

    

    char ogrencismi[20] = {"kaan academy" };
    
    for (int i = 0; i < 20; i++){
        printf("%c",ogrencismi[i]);
    }
    printf("\n");

    // char ogrenci[4][20];
    
    
}