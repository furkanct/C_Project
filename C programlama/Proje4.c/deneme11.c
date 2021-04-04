#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    char *name;
    char *surname;
    char *id;
    struct student *next;
    struct student *next_name;
    struct student *next_surname;
    struct student *next_id;
    char *val; 
}Node;
// typedef struct student Node; 
Node *curr, *head; 



struct student* line_separation(char *satir){

    char *name;
    char *num;
    char *surname;
    
    struct student* tmp = NULL; 
    tmp = (struct student*)malloc(sizeof(struct student)); 

    name = strtok(satir," ");
    surname = strtok(NULL, "\t");
    num = strtok(NULL, "\n");

    tmp->next = NULL;

    tmp->name = name;
    tmp->surname = surname;
    tmp->id = num;

    return tmp;
}
void printlist(struct student *n){

    while(n != NULL){
        printf("%s   %s   %s\n",n->name,n->surname,n->id);
        n = n->next;
    }    
}
void Delete_student(struct student *n){
    Node *q = NULL;
    Node *start2 = NULL;

    Node *before = NULL;
    Node *next = NULL;

    q = start2;
    while(q->next->name !=n){
        q = q->next;
    }

    before = q;
    next= q->next->next;
    free(q->next);
    before->next = next;
}
struct student* addStudent(struct student *start, struct student *temp){
    struct student *p;
    
    if(start == NULL){
        start = temp;  
        printf(" %s %s %s \n",start->name,start->surname,start->id);   
    }
    else{
        p  = start;
        while(p->next != NULL){
            p = p->next;
        } 
        printf(" %s   %s  %s \n",start->name,start->surname,start->id);
        p->next = temp;
    }
    return start;
}
int main(){
    struct student *start = NULL;
    struct student *tmp = NULL;

    FILE *fp = fopen("students.txt","r");
    char satir[1000];

    while (fgets( satir, sizeof(satir), fp )){
        tmp = line_separation(satir);
        start = addStudent(start, tmp);
    }
    int flag = 1, choice;

	while (flag==1){
        printf("\nEnter your choice:\n");
		printf("1 to insert a student into the list\n");
		printf("2 to delete a student from the list\n");
		printf("3 to print the students in the list\n");
		printf("4 to print the students to an output file\n");
		printf("5 to end\n? ");
		scanf("%d", &choice);

		if(choice ==1){
			// insertStudent(list);
        }
		if(choice ==2){
			// deleteStudent(list);
        }
		if(choice ==3){
			// printStudentList(list, );
        }
		if(choice ==4){
			printlist(head);
        }
		if(choice ==5){
			break;
		}
	}

    // printlist(head);
    fclose(fp);

return 0;

}