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
void ekle(node*r ,int number){
    while(r->next != NULL){
        r = r->next;
    }
    r ->next = malloc(sizeof(node));
    r->next ->x = number;
    r->next ->next = NULL;
}
int main(){
    node* root  = NULL;
    root = malloc(sizeof( node));
    struct n * iter;
    iter = root;
    for(int i = 0; i<5; i++){
        ekle(root,i*10);

    }
    bastir(root);
}