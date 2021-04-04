//150119657 ABDULKERÝM TALHA TÝMUR

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef  struct str
{
    char* name;
    char* surname;
    long int ID;
    struct str* name_next; //linked list
    struct str* surname_next;//linked list
    struct str* ID_next;//linked list
}str;

// inserts node to the 3 linked list
void insertNode(struct str** namehead, struct str** surnamehead, struct str** IDhead,  str *newStudent)
{
    str* temp;
    // adds to first
    if (*IDhead == NULL        ||   newStudent->ID  <= (*IDhead)->ID)
    {
        newStudent->ID_next = *IDhead;
        *IDhead = newStudent;
    }
    else
    {

        temp = *IDhead;
        while (temp->ID_next != NULL   && temp->ID_next->ID   < newStudent->ID)
        {
            temp = temp->ID_next;
        }
        newStudent->ID_next = temp->ID_next;
        temp->ID_next = newStudent;
    }

//////////////////////////////////////////////////////
/// name insert


/// strcmp (a,b), if negative, a goes to first
// ads to first name linked list
    if (*namehead == NULL        || strcmp(newStudent->name, (*namehead)->name ) <=0 )
    {
        newStudent->name_next = *namehead;
        *namehead = newStudent;
    }
    else
    {

        temp = *namehead;
        while (temp->name_next != NULL  && ((strcmp(temp->name_next->name, newStudent->name) <0)) )
        {

            temp = temp->name_next;
        }
        newStudent->name_next = temp->name_next;
        temp->name_next = newStudent;
    }


//////////////////////////////////////////////////////
/// name insert


// adds node to the surnmame linked list
    if (*surnamehead == NULL        || strcmp(newStudent->surname, (*surnamehead)->surname ) <=0 )
    {
        newStudent->surname_next = *surnamehead;
        *surnamehead = newStudent;
    }
    else
    {

        temp = *surnamehead;
        while (temp->surname_next != NULL  && ((strcmp(temp->surname_next->surname, newStudent->surname) <0)) )
        {
            temp = temp->surname_next;
        }
        newStudent->surname_next = temp->surname_next;
        temp->surname_next = newStudent;
    }


}

// deletes node from 3 linked list
void deleteNode(str** namehead,str** surnamehead, str** IDhead, int ID)
{

    /// ID list-------------------------///
    str * next1 = *IDhead;
    str * next2 = (*IDhead)->ID_next;

    if(next1 == NULL)
    {
        return;
    }
    /// single element
    if(next1->ID_next == NULL)
    {
        if(next1->ID == ID)
            next1 = NULL;
        else
            return;
    }
    if(next1!= NULL)
    {
        if(next1->ID==ID)
        {

            *IDhead = next1->ID_next;
        }

        else
        {
            while((next1!= NULL)&&(next2!= NULL))
            {

                if(next1->ID_next->ID==ID)
                {

                    next1->ID_next = next2->ID_next;
                    //free(next2);
                    break;
                }
                next1 = next2;
                if(next2!= NULL)
                    next2 = next2->ID_next;

            }
        }
    }
////////////////////////////
/// name linked list
    next1 = *namehead;
    next2 = (*namehead)->name_next;
    if(next1->name_next == NULL)
    {
        if(next1->ID == ID)
            next1 = NULL;
        else
            return;
    }
    if(next1!= NULL)
    {
        // deletes first
        if(next1->ID==ID)
        {

            *namehead = next1->name_next;
        }

        else
        {
            while((next1!= NULL)&&(next2!= NULL))
            {
                if(next1->name_next->ID==ID)
                {
                    next1->name_next = next2->name_next;
                    //free(next2);
                    break;
                }
                next1 = next2;
                if(next2!= NULL)
                    next2 = next2->name_next;

            }
        }
    }
//////////////////////////////////
///
/// surname linked list
    next1 = *surnamehead;
    next2 = (*surnamehead)->surname_next;

    if(next1->surname_next == NULL)
    {
        if(next1->ID == ID)
            next1 = NULL;
        else
            return;
    }
    if(next1!= NULL)
    {
        // deletes first
        if(next1->ID==ID)
        {

            *surnamehead = next1->surname_next;
        }

        else
        {

            while((next1!= NULL)&&(next2!= NULL))
            {

                if(next1->surname_next->ID==ID)
                {
                    next1->surname_next = next2->surname_next;
                    //free(next2);
                    break;
                }
                next1 = next2;
                if(next2!= NULL)
                    next2 = next2->surname_next;
            }
        }
    }
    printf("end\n");
}

// prints to console 3 linked list
void printList(str* namehead,str* surnamehead, str* IDhead)
{
    ///---ID linked list---------------------------///
    int i = 1;
    printf("\nThe list in ID sorted order:\n");
    printf("%d. %s %s\t%ld \n",i, IDhead->name, IDhead->surname, IDhead->ID );
    str *next = IDhead->ID_next;
    while(next != NULL)
    {
        i++;
        printf("%d. %s %s\t%ld \n",i, next->name, next->surname, next->ID );
        next = next->ID_next;
    }
///Name linked list////////////////
    i = 1;
    printf("\nThe list in name-alphabetical order:\n");
    printf("%d. %s %s\t%ld \n",i, namehead->name, namehead->surname, namehead->ID );  /// head->name   (*head).name  same
    next = namehead->name_next;
    while(next != NULL)
    {
        i++;
        printf("%d. %s %s\t%ld \n",i, next->name, next->surname, next->ID );
        next = next->name_next;
    }

    ///-----Surname linked list-------------------------///
    i = 1;
    printf("\nThe list in surname-alphabetical order:\n");
    printf("%d. %s %s\t%ld \n",i, surnamehead->name, surnamehead->surname, surnamehead->ID );
    next = surnamehead->surname_next;
    while(next != NULL)
    {
        i++;
        printf("%d. %s %s\t%ld \n",i, next->name, next->surname, next->ID );
        next = next->surname_next;
    }
    printf("\n");
}

// prints the 3 linked list to output txt
void printListFile(str* namehead,str* surnamehead, str* IDhead)
{
    FILE *outputFile;

    if ((outputFile = fopen("output.txt","w")) == NULL)
    {
        printf("Could not open file\n");
    }
    else
    {
        ///------------------------------///
        int i = 1;
        fprintf(outputFile, "\nThe list in ID sorted order:\n");
        fprintf(outputFile, "%d. %s %s\t%ld \n",i, IDhead->name, IDhead->surname, IDhead->ID );
        str *next = IDhead->ID_next;
        while(next != NULL)
        {
            i++;
            fprintf(outputFile,"%d. %s %s\t%ld \n",i, next->name, next->surname, next->ID );
            next = next->ID_next;
        }
///////////////////
        i = 1;
        fprintf(outputFile,"\nThe list in name-alphabetical order:\n");
        fprintf(outputFile,"%d. %s %s\t%ld \n",i, namehead->name, namehead->surname, namehead->ID );  /// head->name   (*head).name  same
        next = namehead->name_next;
        while(next != NULL)
        {
            i++;
            fprintf(outputFile,"%d. %s %s\t%ld \n",i, next->name, next->surname, next->ID );
            next = next->name_next;
        }

        ///------------------------------///
        i = 1;
        fprintf(outputFile,"\nThe list in surname-alphabetical order:\n");
        fprintf(outputFile,"%d. %s %s\t%ld \n",i, surnamehead->name, surnamehead->surname, surnamehead->ID );
        next = surnamehead->surname_next;
        while(next != NULL)
        {
            i++;
            fprintf(outputFile,"%d. %s %s\t%ld \n",i, next->name, next->surname, next->ID );
            next = next->surname_next;
        }


        fprintf(outputFile,"\n");
    }
    fclose(outputFile);
}

// creates new node
// each name surname with lenght 20
struct str* newStr(char * name, char * surname, long int ID)
{
    // struct allacotion
    str* news = (struct str*)malloc(sizeof(struct str));
    // string allocation
    news->name = (char*)malloc(20);
    news->surname = (char*)malloc(20);

    for(int i= 0; i<20; i++)
    {
        news->name[i] = name[i];
        news->surname[i] = surname[i];
    }

    news->ID = ID;

    news->name_next = NULL;
    news->surname_next = NULL;
    news->ID_next = NULL;

    return news;
}
int main()
{

    str* name_head= NULL;
    str* surname_head= NULL;
    str* ID_head= NULL;
    // open file in read mode
    FILE* ptr = fopen("students.txt","r");
    if (ptr==NULL)
    {
        printf("no such file.");
        return 0;
    }

    char buf[20];
    char buf2[20];
    long int nt;
    while (fscanf(ptr,"%s",buf)==1)
    {
        fscanf(ptr,"%s",buf2);
        fscanf(ptr,"%ld",&nt);
        //printf("%s %s\t%d\n",buf,buf2, nt);
        str *news = newStr(buf,buf2,nt);
        insertNode(&name_head,&surname_head, &ID_head, news);
    }
//Concole For choice
    int choice;

    do
    {

        printf("Enter your choice:\n");
        printf(" 1 to insert a student into the list.\n");
        printf(" 2 to delete a student from the list.\n");
        printf(" 3 to print the students in the list.\n");
        printf(" 4 to print the students to an output file.\n");
        printf(" 5 to end.\n");
        scanf("%d",&choice);

        if(choice== 1)
        {
            printf("Enter a student name, suname, and ID:\n");
            scanf("%s%s%ld",buf,buf2,&nt);

            str *news = newStr(buf,buf2,nt);

            insertNode(&name_head,&surname_head, &ID_head, news);

        }
        else if(choice== 2)
        {
            printf("Enter a student ID:\n");
            scanf("%ld", &nt);
            deleteNode(&name_head,&surname_head, &ID_head, nt);
        }
        else if(choice== 3)
        {
            printList(name_head,surname_head, ID_head);
        }
        else if(choice== 4)
        {
            printListFile(name_head,surname_head, ID_head);
        }
        else
        {
            printf("Wrong input, should be 1-5\n");
        }
    }
    while(choice!=5);

    return 0;

}