#include<stdio.h>
#include<stdlib.h>

int main()
{
    // int i;
    // for ( i = 0; i < 20; i++)
    // {
    //     if(i % 2 == 0){
    //         printf("%d Çift sayıdır\n",i);
    //     }
    //     else
    //     {
    //         printf("%d tek sayıdırd\n",i);
    //     }
        
    // }

    // int biletsayisi = 100;
    // char biletal;
    // int alinan = 0 ;

    // for (; biletsayisi >0 ;)
    // {
    //     printf("Bilet almak ister misiniz: \n");
    //     scanf(" %c",&biletal);

    //     if (biletal == 'e' || biletal == 'E')
    //     {
    //         printf("Kaç tane bilet almak istiyorsunuz.\n");
    //         scanf("%d",&alinan);
    //         biletsayisi -= alinan ;
    //         printf("Alınabilecek biley sayısı: %d\n",biletsayisi);
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // printf("Alınana bilecek bilet sayısı: %d\nKalan bilet sayısı:%d\n",100-biletsayisi,biletsayisi);

    // fibonacci serisi
    // int x=1,y=1,z;
    // printf("%d\n%d\n",x,y);
    // for(int i =0; i<10; i++){
    //     z = x+y;
    //     x = y ;
    //     y = z;
    //     printf("%d\n",z);
    // }

    // int sayi,satir,sutun;

    // printf("Lütfen bir sayi giriniz.\n");
    // scanf("%d",&sayi);

    // for (satir = 1; satir <= sayi; satir++)
    // {
    //     for(sutun = 1; sutun <= satir; sutun++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

  
  
    int sayi,satir,sutun;
    int yildiz, bosluk ;
    printf("Giriş:");
    scanf("%d",&sayi);

    yildiz = 1;
    bosluk = sayi -1 ;

    for (satir = 0; satir <= sayi; satir++)
    {
        for (sutun= 1; sutun <=satir; sutun++){
            printf(" ");
        }
        printf("*");
        for ( satir = 0; satir < sayi; satir++)
        {   
            for ( sutun = 0; sutun < bosluk; sutun++)
            {
            printf(" ");
            }
        printf("*");

        printf("\n");
        bosluk--;
        printf("\n");     
    }  
    return 0;
    
    }
}





    // Z harfi 
    // for (int j =0;j<giris;j++){
    //     printf("*");
    // }
    // for(k = 0; k < giris; k ++){
    //     for( s=0; s < bosluk; s++){
    //         printf(" ");
    //     }
    //     printf("*");
        
    //     printf("\n");
    //     bosluk--;
    //     yildiz +=1;
    // }
    // for (int i =0;i<giris;i++){
    //     printf("*");
    // }
    // printf("\n");

    //**************

            // for (sutun= 1; sutun <=satir; sutun++){
        //     printf(" ");
        // }
        // for( sutun=0; sutun<yildiz; sutun ++){
        //     printf("*");
        // }
        // printf("\n");
        // bosluk--;
        // yildiz ++;
        // printf("\n");   