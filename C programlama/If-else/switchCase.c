#include <stdio.h>
#include<stdlib.h>


int main(){

    int secim;
    printf("Lütfen seçim yapınız...\n");
    printf("1.İlkbahar\n2.Yaz\n3.Sonbahar\n4.Kış\n");
    scanf("%d",&secim);

    switch (secim)
    {
        case 1: printf("Hava çok güzel..");
            break;
        case 2: printf("Hava çok sıcak...");
            break;
        case 3: printf("Hava çok yağmurlu...");
            break;
        case 4: printf("Hava çok soğuk");
            break;
        
        default: printf("Lütfen 1-4 arasında bri seçim yapınız...");
            break;
    }
    

    // int aynumarasi;
    // char ayinmevsimi;
    // printf("Lütfen öğrenmek istediğiniz ayın numarasını giriniz");
    // scanf("%d",&aynumarasi);

    // switch (aynumarasi)
    // {
    // case 1:
    //     printf("%d numaralı ay: Ocak",aynumarasi);
    //     ayinmevsimi = "Kış";
    //     break;
    // case 2:
    //     printf("%d numaralı ay: Şubat",aynumarasi);
    //     ayinmevsimi = "K";
    //     break;
    // case 3:
    //     printf("%d numaralı ay: Mart",aynumarasi);
    //     ayinmevsimi = "Kış";
    //     break;
    // case 4:
    //     printf("%d numaralı ay: Nisan",aynumarasi);
    //     ayinmevsimi = "İlkbahar";
    //     break;
    // case 5:
    //     printf("%d numaralı ay: Mayıs",aynumarasi);
    //     ayinmevsimi = "İlkbahar";
    //     break;
    // case 6:
    //     printf("%d numaralı ay: Haziran",aynumarasi);
    //     ayinmevsimi = "İlkbahar";
    //     break;
    // case 7:
    //     printf("%d numaralı ay: Temmuz",aynumarasi);
    //     ayinmevsimi = "Yaz";
    //     break;
    // case 8:
    //     printf("%d numaralı ay: Ağustos",aynumarasi);
    //     ayinmevsimi = "Yaz";
    //     break;
    // case 9:
    //     printf("%d numaralı ay: Eylül",aynumarasi);
    //     ayinmevsimi = "Yaz";
    //     break;
    // case 10:
    //     printf("%d numaralı ay: Ekim",aynumarasi);
    //     ayinmevsimi = "Sonbahar";
    //     break;
    // case 11:
    //     printf("%d numaralı ay: Kasım",aynumarasi);
    //     ayinmevsimi = "Sonbahar";
    //     break;
    // case 12:
    //     printf("%d numaralı ay: Aralık",aynumarasi);
    //     ayinmevsimi = "Sonbahar";
    //     break;
    
    // default: printf("Lütfen 1-12 arası bir ay numarası giriniz..");
    //     break;
    // }

    // if(aynumarasi == 1 |aynumarasi == 2|aynumarasi == 3 ){
    //     printf(" Kış mevsimi");
    // }
    // else if (aynumarasi == 4 |aynumarasi == 5|aynumarasi == 6){
    //     printf(" İlkbahar mevsimi");
    // }
    // else if (aynumarasi == 10|aynumarasi == 11|aynumarasi == 12){
    //     printf(" Sonbahar mevsimi");
    // }
    // else if (aynumarasi == 7|aynumarasi == 8|aynumarasi == 9){
    //     printf(" Yaz mevsimi");
    // }
    // return 0;



}