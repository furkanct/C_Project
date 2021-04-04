#include <stdio.h>
#include <stdlib.h>


int toplama(int sayi){

    if (sayi != 0){
        return sayi + toplama(sayi-1);
    }
    else{
        return sayi;
    }
    
    
}
int main(){
    
    int sayi;
    printf("Lütfen pozitif bir tam sayı giriniz.\n");
    scanf("%d",&sayi);

    if (sayi >0 )
    {
        printf("%d \n",toplama(sayi));
    }
    else
    {
        printf("Lütfen pozitif bir sayi giriniz.\n");
    }
    
    

    toplama(sayi);
}