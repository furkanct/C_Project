#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct  kitap{
    char ad[30];
    char yazarAd[30];
    int basimYili;
    float fiyat;
}romanKitaplari[2] = {{"Koğus","Peyami",1980,23.5},{"Suç ve ceza","Dostoyevski",1970,18}};

// }kitap1= {"Koğus","Peyami",1980,23.5},
// kitap2= {"Suç ve ceza","Dostoyevski",1970,18};

int main(){
    // printf("%s %s %d %f\n",kitap1.ad,kitap1.yazarAd,kitap1.basimYili,kitap1.fiyat);
    // printf("%s %s %d %f\n",kitap2.ad,kitap2.yazarAd,kitap2.basimYili,kitap2.fiyat);

    // float toplamFiyat = kitap1.fiyat + kitap2.fiyat;
    // printf("İki kitapin toplam fiyatı : %f\n",toplamFiyat);

    float toplamFiyat;

    for (int i = 0; i < 2; i++){
        toplamFiyat += romanKitaplari[i].fiyat;
    }

    printf("Toplam Fiyat: %.2f",toplamFiyat);
    
}   