#include<stdio.h>
#include<stdlib.h>

int main(){
    // int i = 1;

    // while (i<11)
    // {
    //     printf(" 1 x %d = %d\n ",i,1*i);
    //     printf("2 x %d = %d\n ",i,2*i);
    //     printf("3 x %d = %d\n ",i,3*i);
    //     printf("4 x %d = %d\n ",i,4*i);
    //     printf("5 x %d = %d\n ",i,5*i);
    //     printf("6 x %d = %d\n ",i,6*i);
    //     printf("7 x %d = %d\n ",i,7*i);
    //     printf("8 x %d = %d\n ",i,8*i);
    //     printf("9 x %d = %d\n ",i,9*i);
    //     printf("10 x %d = %d\n ",i,10*i);
    //     printf("\n");
    //     i +=1;
    // }   

    // int sayi;
    // int x =1;
    // int toplam = 0;

    // printf("Lütfen kaça kadar bastırmak istediğinizi giriniz.");
    // scanf("%d",&sayi);

    // int kullanicigiris =sayi;

    // while (sayi>0)
    // {
    //     printf("%d\n",x);
    //     toplam = toplam +x;
    //     x++;
    //     sayi--;
    // }
    // printf ("1 den %d 'e kadar olan sayıların toplamı = %d \n",kullanicigiris,toplam);
    
    // int sayi1 ,sayi2, toplam=0;

    // printf("Kaçla kaç arasındaki sayıları toplayayım ? Lütfen 2 sayı giriniz.\n");
    // scanf("%d %d",&sayi1,&sayi2);
    // printf("******************\n");

    // // terim sayısı = (ilk terim - son terim) +1

    // int terimsayisi = abs(sayi1-sayi2)+1 ;
    // int buyuk,kucuk;
    
    // if(sayi2 >= sayi1){
    //     buyuk = sayi2;
    //     kucuk = sayi1;
    //     while (terimsayisi> 0){
    //         printf("%d\n",sayi1);
    //         toplam =toplam + sayi1;
    //         sayi1 ++;
    //         terimsayisi --;
    //     }
    // }    
    // else if(sayi1> sayi2){
    //     buyuk = sayi1;
    //     kucuk = sayi2;
    //     while (terimsayisi> 0){
    //         printf("%d\n",sayi2);
    //         toplam += sayi2;
    //         sayi2 ++;
    //         terimsayisi --;
    //     }
    // }

    // printf("%d den %d ye kadar olan sayılırın toplamı %d",kucuk,buyuk,toplam);

    int sayi;
    int sonuc =1;

    printf("Faktöriyelini almak istediğiniz sayıyı giriniz.\n");
    scanf("%d", &sayi);

    int girilensayi = sayi;
    if( sayi >= 0){

        while (sayi>= 0)
    {
        if (sayi == 0)
        {
            sonuc *= 1;
        }
        else
        {
            sonuc *= sayi;
        }
        sayi--;    
    }
    printf("%d! = %d\n",girilensayi,sonuc);
    }
    else
    {
        printf("Lütfen sıfır veya sıfırdan büyük bir sayı giriniz..");
    }
    
    
    return 0;
    
    
}