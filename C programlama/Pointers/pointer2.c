#include<stdlib.h>
#include<stdio.h>

int main(){

    // char *takimlar[] = {"Göztepe","Galatasaray","antepspor"};

    // for (int i = 0; takimlar[i]!='\0'; i++){
    //     printf("%s\n",*(takimlar+i));
    // }

    char ulkeler[5][20];

    for (int i = 0; i < 5; i++){
        printf("%d. ülkeye giriniz\n",i+1);
        scanf("%s",ulkeler[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("%s\n",ulkeler[i]);
    }
    
    char *ulkelerinAdresi[5];

    for (int i = 0; i < 5; i++){
        ulkelerinAdresi[i] = &ulkeler[i];
    }

    for (int i = 0; i < 5; i++){
        printf("%s\n",*(ulkelerinAdresi+i));
    }
    
    
    
    return 0;
}
