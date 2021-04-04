#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void selectionSort(int dizi[],int boyut){

    int enkucukIndex;
    for (int i = 0; i < boyut; i++){
        enkucukIndex = i;
        for (int j = i; j < boyut; j++){
            if(dizi[j]<dizi[enkucukIndex]){
                enkucukIndex =j;
            }
        }
        int temp = dizi[i];
        dizi[i] = dizi[enkucukIndex];
        dizi[enkucukIndex]= temp;
        
    }
    
}
int main(){

    int tamSayiDizisi[100];
    int boyut;

    printf("Kaç elemanlı bir dizi oluşturacaksın\n");
    scanf("%d",&boyut);

    for (int i = 0; i < boyut; i++){
        scanf("%d",&tamSayiDizisi[i]);
    }
    for(int j = 0; j<boyut; j++){
        printf("%d ",tamSayiDizisi[j]);
    }
    printf("\n");
    selectionSort(tamSayiDizisi,boyut);
    for(int i = 0; i<boyut; i++){
        printf("%d ",tamSayiDizisi[i]);
    }
    return 0;

    

}