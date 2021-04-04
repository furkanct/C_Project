#include <stdio.h>
#include <stdlib.h>

int ebob(int sayi1,int sayi2){

    if (sayi2 != 0){
        return ebob(sayi2,sayi1%sayi2);  
    }
    else{
        return sayi1;
    }
    
    
    
}

int main(){

    printf("EBOB: %d \n",ebob(5,7));
    return 0;
}