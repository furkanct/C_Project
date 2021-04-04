#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>



typedef struct{

    char s1[50];
}String;
int charAt(String *s, int index){

    FILE *f;
    f = fopen("output.txt","a");
    String string1;
    strcpy(string1.s1,s->s1);
    s[50] ;
    char b;
    char a;
    if(index>=0){
        for (int i = 0; i <index+1 ; i++){
        b = s->s1[i];
        }
    a = fprintf(f,"%c\n",b);
    a = printf("%c\n",b);

    }
    else{
        return -1;
    }
    fclose(f);
}


                        //2. Fonksiyon

unsigned int strSearch(String *kelime,String *kelime2){
    FILE *f;
    f = fopen("output.txt","a");

    String string1;
    String string2;
    strcpy(string1.s1,kelime->s1);
    strcpy(string2.s1,kelime2->s1);
    
    int bas =0;
    int son = 0;
    int bulunudu = 0;

    for (int i = 0; i < (strlen(kelime->s1) - 2); i++){
        int j = 0;
        if (kelime->s1[i] == ' '){
            son = i;
            if(bulunudu == 1){
                fprintf(f,"%d\n",son-bas);
                printf("%d\n",son-bas);
                break;
            }
            bas = i+1;
        }
        if(kelime->s1[i] == kelime2->s1[j]){
            if(kelime->s1[i+1] == kelime2->s1[j+1]){
                if(kelime->s1[i+2] == kelime2->s1[j+2]){
                    bulunudu =1;
                }
            }
        }
        j++;
    }    
    fclose(f);
}
                    //3.Fonksiyon
String *concat(String *s1,String *s2){
    FILE *f;
    f = fopen("output.txt","a");
    
    String yeni1[30];
    String yeni2[30];

    for(int i=0; i<sizeof(s1); i++) {
        yeni1[i]=s1[i];
    }
    for(int j=0; j<sizeof(s2); j++) {
        yeni2[j]=s2[j];
    }
    fprintf(f,"%s %s\n",yeni1->s1,yeni2->s1);
    printf("%s %s\n",yeni1->s1,yeni2->s1);
    fclose(f);
    
}
                        /*4.Fonksiyon*/

unsigned int findScore(char *s1){
    FILE *f;
    f = fopen("output.txt","a");
    char kelime ;
    int value = 0;
    for (int i = 0; i < strlen(s1); i++){
        
        if(tolower(s1[i])=='a'|| tolower(s1[i]) =='e'||tolower(s1[i]) =='i'||tolower(s1[i]) =='o'||tolower(s1[i]) =='u'||tolower(s1[i]) =='l'||tolower(s1[i]) =='n'||tolower(s1[i]) =='r'||tolower(s1[i]) =='s'||tolower(s1[i]) =='t'){
            value+=1;
        }
        else if(tolower(s1[i]) == 'd'||tolower(s1[i]) =='g'){
            value +=2;
        }
        else if(tolower(s1[i]) == 'b'||tolower(s1[i]) =='c'||tolower(s1[i]) =='m'||tolower(s1[i]) =='p'){
            value +=3;
        }
        else if(tolower(s1[i]) == 'f'||tolower(s1[i]) =='h'||tolower(s1[i]) =='v'||tolower(s1[i]) =='w'||tolower(s1[i])=='y'){
            value +=4;
        }
        else if(tolower(s1[i]) == 'k'){
            value +=5;
        }
        else if(tolower(s1[i]) == 'j'||tolower(s1[i]) =='x'){
            value +=8;
        }
        else if(tolower(s1[i]) == 'q'||tolower(s1[i]) =='z'){
            value +=10;
        }
        
        
    }
    fprintf(f,"%d\n",value);
    printf("%d\n",value);
    fclose(f);
    

}
int stat(){
    FILE *f;
    char kelimeler[100][120];
    int index =0,stok=0, a=0,word=0;
    char karakter,my_string[50],other[50];
    f = fopen("input.txt","r");
    strcpy(my_string,"stat");
    strcpy(other,"exit");

    while(!feof(f)){
        fscanf(f,"%s",kelimeler[index]);
        int res = strcmp(my_string,kelimeler[index]);
        int res2= strcmp(other,kelimeler[index]);
        if(res == 0 ){
            stok+=1;
            break;
            
        }
        else{
            index++;
            stok+=1;  
        }
    }
    printf("The number of words: %d\n",stok+1);
    fclose(f);
    FILE*yazma;
    yazma = fopen("output.txt","a");
    fprintf(yazma,"The number of words: %d\n",stok+1);
    fclose(yazma);


    FILE*dosya;
    int index1=0;
    dosya = fopen("input.txt","r");
    char cumle[100][20];
    int i=0;
    int sayi =0;
    while(!feof(dosya)){
        fscanf(dosya, "%s", cumle[i]);
        i ++;
    }
    for (int j = 0; j < i+8; j++){
        for (int c = 0; c < strlen(cumle[c]); c++){ 
            int d =0;
            if(isalpha(cumle[d][c])){
                sayi+=1;
            }
            d++;     
        }
    }
    printf("The number of alphabetic letters: %d\n",sayi);
    fclose(dosya);
    FILE*yazma2;
    yazma2 = fopen("output.txt","a");
    fprintf(yazma2,"The number of alphabetic letters: %d\n",sayi);
    fclose(yazma2);
}


int main(){

    FILE *f;
    f = fopen("output.txt","w");
    fclose(f);
    char kalan[150],mystring[50],tmp[100],ch,secim;
    int flag=1,finish=0,ind=0,ret;
    String yeniTmp[50];
    String yeniKalan[50];
    FILE *filePointer;
    filePointer = fopen("input.txt", "r");
    printf("Emmreee");
    if (filePointer == NULL){
        printf("File is not available \n");
        
    }
    else{ 
        while(finish!=1){
            while ((ch = fgetc(filePointer)) != EOF){
                strcpy(yeniTmp->s1,tmp);
                strcpy(yeniKalan->s1,kalan);

                if (ch == ':'){
                    secim = fgetc(filePointer);
                    fgetc(filePointer);
                    tmp[ind] = '\0';
                    ind = -1;
                    flag = 2;
                }
                else if(ch == '\n'){
                    if(secim == '1'){

                        charAt(yeniTmp,kalan[0]-'0');
                    }    
                    else if(secim == '2'){

                        kalan[ind] = '\0';
                        concat(yeniTmp,yeniKalan);
                        
                    }
                    else if(secim == '3'){

                        kalan[ind] = '\0';
                        strSearch(yeniTmp,yeniKalan);

                    }
                    else if(secim == '4'){

                        findScore(tmp);
                        
                    }
                    else if(flag == 1) {
                        tmp[ind] = '\0';
                        strcpy(mystring, "stat\r");
                        ret = strcmp(tmp, mystring);
                        
                        if(ret == 0){
                            FILE *yazma;
                            yazma = fopen("output.txt","a");
                            fclose(yazma);
                            stat();
                        } else {
                            
                            strcpy(mystring, "exit\r");
                            ret = strcmp(tmp, mystring);

                            if(ret == 0) {
                                printf("Program ends. Bye\n");
                                finish=1;
                            }
                        }
                    }
                    secim = -1;     
                    flag = 1;
                    ind = -1;         
                }
                else if(flag == 1){
                    tmp[ind] = ch;
                }
                else if(flag == 2) {
                    kalan[ind] = ch;
                }
                ind ++;
            }
        }    
    }
    
    fclose(filePointer);
    
    return 0;
    
}
