#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define enbuyuksayi(sayi1, sayi2)  (sayi1>sayi2) ? sayi1 : sayi2
#define saatiSoyle(karakter) (karakter=='E' || karakter =='e') ? __TIME__ : "Kullanıcı saati öğrenmek istemiyor"
#define sayıları topla(sayi1,sayi2) (sayi1 + sayi2)
void takimlar(){

    printf("Galatasaray\n");
    printf("Beşiktaş\n");
}

int sayiyicarp(int sayi){

    return sayi*2;
}

float aa(int sayi){

    return (sayi*sayi);
}
double karesi(double sayi2){

    return (sayi2*sayi2);
}
char ilkharfibas(char dizi[]){

    return dizi[0];
}

int sifirdanBuyukmu(int sayi){

    if (sayi>0){
        return 0;
    }
    else
    {
        return 1;
    }
    
}
void enBuyuk(int dizi[],int boyut){

    int enBuyukdeger = 0;

    for (int i = 0; i < boyut; i++){
        if (dizi[i]>enBuyukdeger){
            enBuyukdeger = dizi[i];
        }
        
    }
    printf("En büyük değer: %d \n",enBuyukdeger);
    
}

void isimleriListele(char isimListesi[][30],int boyut){

    for (int i = 0; i < boyut; i++){
        printf("%s\n",isimListesi[i]);
    }
    
}

int asalSayi(int sayi1){

    if (sayi1 == 1)
    {
        return 0;
    }
    
    for (int carpan = 2; carpan <= sayi1/2; carpan++){
        if (sayi1 % carpan == 0){
            return 0;
        }
        
    }
    return 1;   
    
}
int main(){
    // takimlar();

    // printf("%d\n",sayiyicarp(5));
    // printf("%f\n",aa(5));
    // printf("%lf\n",karesi(10.1));
    // printf("%c\n",ilkharfibas("Furkan Çetin"));
    // printf("%d\n",sifirdanBuyukmu(-5));

    // printf("%d\n",enbuyuksayi(5,7));



                                    // SAATİ BULMA
    // char karakter;
    // printf("Saati öğrenmek istermisin?\n");
    // scanf("%c",&karakter);
    // if(saatiSoyle(karakter)){
    //     printf("%s\n",saatiSoyle(karakter));
    // }
    // else{
    //     printf("%s\n",saatiSoyle(karakter));
    // }
    
                                
                                    
                                    // EN BÜYÜK SAYI BULMA
    // int dizi[] = {2,3,4,11,19};
    // int boyut = sizeof(dizi) / sizeof(dizi[0]);
    // printf("Dizimizin boyutu: %d\n",boyut);
    // enBuyuk(dizi,boyut);

                                    
                                    // İSİM LİSTELEME
    // char isciIsimleri[5][30] = {"Haydar","Kaan","Abdurrahman","Fatih","Burcu"};
    // isimleriListele(isciIsimleri,5);

    for (int i = 1; i <= 1000; i++){
        if (asalSayi(i)==1){
            printf("%d asaldır..\n", i);
        }
        
    }
    

    return 0;
}