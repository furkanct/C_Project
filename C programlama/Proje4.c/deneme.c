#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char *name;
    char *surname;
    char *id;
    struct student *next;
};

struct student* satiriAyir(char *satir){

    char *ad;
    char *num;
    char *soyad;
    
    struct student* tmp = NULL; 
    tmp = (struct student*)malloc(sizeof(struct student)); 

    ad = strtok(satir," ");
    soyad = strtok(NULL, "\t");
    num = strtok(NULL, "\n");

    tmp->next = NULL;

    tmp->name = ad;
    tmp->surname = soyad;
    tmp->id = num;

    return tmp;
}

           // Değişş)
struct student* addStudent(struct student *head, struct student *temp){
    struct student *p;
    
    if(head == NULL){
        head = temp;  
        printf(" %s \t%s\t%s \n",head->name,head->surname,head->id);   
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        } 
        printf(" %s \t%s  %s \n",head->name,head->surname,head->id);
        p->next = temp;
    }
    return head;
}
void printlist(struct student *n){

    while(n != NULL){
        printf("%s   %s    %s\n",n->name,n->surname,n->id);
        n = n->next;
    }    
}

int main(){

    struct student *head = NULL;
    struct student *tmp = NULL;

    FILE *file = fopen("students.txt","r");
    char satir[1000];

    while(fgets( satir, sizeof(satir),file )){
        tmp = satiriAyir(satir);
        head = addStudent(head, tmp);
    }
    printlist(head);

    //bubleSort(8);
    
    fclose(file);
    return 0;
}

// struct student* bubleSort()
// {   
//     int s=8;
//     struct student list[8];
//     int i, j;
//     struct student temp;
//     for (i = 0; i < s ; i++)
//     {
//         for (j = 0; j < (s); j++)
//         {
//             if (list[j].numara < list[j + 1].numara)
//             {
//                 temp = list[j];
//                 list[j] = list[j + 1];
//                 list[j + 1] = temp;
//             } 
//         }
//     }
// }