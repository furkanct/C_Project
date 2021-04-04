#include<stdlib.h>
#include<stdio.h>
#include <string.h>

struct node{
    int data;
    struct node *next;
    
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* q = NULL;


void basaekle(int basa){

    struct node *basaGelecek = (struct node*)malloc(sizeof(struct node));
    basaGelecek ->data = basa;
    basaGelecek->next = start;
    start = basaGelecek;
}

void sonaEkleme(int veri){

    struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
    eklenecek->data = veri;
    eklenecek->next = NULL;

    if(start == NULL){
        start = eklenecek;
    }
    else{
        // traverse
        q = start;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = eklenecek;
    }
}

void arayaEkle(int x, int y){

    struct node* arayaEklenecek = (struct node*)malloc(sizeof(struct node));
    arayaEklenecek ->data = y;
    q = start;

    while(q->next->data!=x){
        q = q->next;
    }

    struct node* onune = (struct node*)(malloc(sizeof(struct node)));
    onune = q->next;
    q->next = arayaEklenecek;
    arayaEklenecek ->next = onune;
}
void basElemanSilme(){

    struct node* ikinci = NULL;
    ikinci = start->next;
    free(start);
    start = ikinci;
}
void sonElemanSil(){

    if(start !=NULL){

        q =start;

        while(q->next->next != NULL){
            q = q->next;
        }

        free(q->next);
        q->next = NULL;
    }
    printf("Silinecek Eleman kalmadı\n");
}
void aradanElemanSil(int x){

    if(start->data == x){
        basElemanSilme();
    }

    struct node *onceki = NULL;
    struct node *sonraki = NULL;

    q = start;
    while(q->next->data !=x){
        q = q->next;
    }

    if(q->next == NULL){
        sonElemanSil();
    }

    onceki = q;
    sonraki= q->next->next;
    free(q->next);
    onceki->next = sonraki;
}
void yazdir(){   
    
    q = start ;
 
    while(q->next != NULL){
        printf ("%d=>",q->data);
        q=q->next;
    }
    printf("%d",q->data);
}


int main(){
    int secim ,sona,basa,araya,x,y;
    while(1==1){
        printf("\n1- Basa eleman ekleme");
        printf("\n2- Sona eleman ekleme");
        printf("\n3- Araya eleman ekleme");
        printf("\n4- Son  eleman silme");
        printf("\n5- Bastan  eleman silme");
        printf("\n6- Aradan  eleman silme");
        printf("\n Yapmak istediğiniz işlemi seciniz:");
        scanf("%d",&secim);
        switch (secim)
        {

        case 1:
            printf("\n Basa eklemek istediğiniz elemanı giriniz: ");
            scanf("%d",&basa);
            basaekle(basa);
            yazdir();
            break;

        case 2:
            printf("\n Sona eklemek istediğiniz elemanı giriniz: ");
            scanf("%d",&sona);
            sonaEkleme(sona);
            yazdir();
            break;
        
        // case 3:
        //     printf("\n Hangi sayinin önüne eklemek istiyorsunuz.. ?");
        //     scanf("%d",&x);
        //     printf("\n Araya eklemek istediğiniz elemanı giriniz: ");
        //     scanf("%d",&y);
        //     arayaEkle(x,y);
        //     yazdir();
        //     break;

        // case 4:
        //     sonElemanSil();
        //     yazdir();
        //     break;
        // case 5:
        //     basElemanSilme();
        //     yazdir();
        //     break;

        // case 6:
        //     printf("Silinmesini istediğiniz sayıyı giriniz");
        //     scanf("%d",&secim);
        //     aradanElemanSil(secim);
        //     yazdir();
        }
        
    }
    return 0;
}