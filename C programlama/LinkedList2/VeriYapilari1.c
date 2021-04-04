#include <stdio.h>
#include <stdlib.h>

typedef struct n{
    int x;
    struct n * next;
}node;

void bastir(node * r){
    while(r!= NULL){
        printf("%d\n",r->x);
        r = r->next;
    }
}
int main(){
    node* root  = NULL;
    root = malloc(sizeof( node));
    root -> x = 10;
    root -> next = malloc(sizeof(node));
    root -> next->x = 20;
    root -> next -> next  = malloc(sizeof(node));
    root -> next -> next ->x = 30;
    struct n * iter;
    iter = root;
    int i = 0;
    while(iter->next!= NULL){
        i++;
        printf("%d.inci eleman : %d \n",i,iter->x);
        iter = iter->next;
    }
    for(i = 0; i<5; i++){
        iter ->next = malloc(sizeof(node));
        iter = iter->next;
        iter ->x  =i*10;
        iter ->next = NULL;

    }
    bastir(root);
}