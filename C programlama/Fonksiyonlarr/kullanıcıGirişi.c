#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    
    char kullaniciAdi[20];
    char parola[20];

    char gercekKullaniciAdi[20] = "Furkan";
    char gercekParola[20] = "123";

    printf("Lütfen kullanıcı adı ve parolanızı giriniz:\n");
    scanf("%s%s",kullaniciAdi,parola);

    if (strcmp(kullaniciAdi,gercekKullaniciAdi) == 0 && strcmp(parola,gercekParola)== 0){
        printf("Hoşgeldiniz");
    }
    if (strcmp(kullaniciAdi,gercekKullaniciAdi) != 0){
        printf("Kullanıcı adınızı yanlış girdiniz..\n");
    }
        if (strcmp(parola,gercekParola) != 0 ){
        printf("parolanızı yanlış girdiniz");
    }

    return 0;

}