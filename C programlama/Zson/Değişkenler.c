#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int tamsayi = 66; // 4 byte
    double kesirlisayi = 7.2; // 8 bytee 

    char harf = 'k'; // 1 byte 
    char karakterdizi [13] = "Kaan Academy";
    float kesirli = 9.2; // 4 byte

    printf("%d RAM'de %d byte yer yaplar \n",tamsayi,sizeof(int));
    printf("%.2f RAM'de %d byte yer yaplar\n",kesirlisayi,sizeof(double));
    printf("%c RAM'de %d byte yer yaplar\n",harf,sizeof(char));
    printf("%s\n",karakterdizi);
    printf("%.2f\n",kesirli);

}