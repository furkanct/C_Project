#include<stdio.h>
#include<stdlib.h>


float topla(float *sayi1, float *sayi2){

    return *sayi1 + *sayi2;
}
float cikar(float *a,float *b){
    return *a-*b;
}
float carp(float *x,float *y){
    return *x *(*y);
}
float bol(float *c, float *d){
    return *c / (*d) ;
}
int main(){

    float sayi1, sayi2;

    printf("Lütfen 2 adet sayı giriniz.\n");
    scanf("%f%f",&sayi1,&sayi2);

    printf("%f\n",topla(&sayi1,&sayi2));
    printf("%f\n",cikar(&sayi1,&sayi2));
    printf("%f\n",carp(&sayi1,&sayi2));
    printf("%f\n",bol(&sayi1,&sayi2));

    return 0;
}