#include<stdio.h>
#include<stdlib.h>
// the goal of project

/*
2 numbers are required for this project to work. 
The first is the main number to be changed.
 the second number is the digit value of the main number to be changed from the last.**/

int main(){
    int size;
    int result =1;
    char letter;
    char duration;
    int flag1 ,flag2, wrongLetter;

    printf("Welcome to the letter printer. Size is must bigger than three. size > 3\n");
    flag1 =1 ;
    flag2 = 1;
    while (result ==1){
        
        printf("Enter the size: "); // I want the user to enter a number
        if (flag1 == 1)
        {
            scanf("%d",&size);
        }

        if (size >3)
        {   
            wrongLetter = 1;
            while (wrongLetter == 1){
                wrongLetter = 0;
                // I want the user to enter a letter
                printf("Enter the Letter: "); 
                scanf(" %c",&letter);
                // loop that checks the letters I get from the user 
                if (letter == 'X')
                {

                int i,j,flag; // define i, j and flag for the for loop
                int initial , last; // define initial and last for the for loop
                initial = 0;
                last = size -1;
                flag = 0;

                for(i = 0; i < size; i++ ){ // I repeat the number of loops it received from the user
                    for(j = 0; j<= last; j ++){
                        if( j == initial || j == last){ //  if condition is met printing * 
                            printf("*");

                        }
                        else
                        {
                            printf(" "); // if condition is not met printing " " 

                        }
                    }
                    printf("\n");
                    if ( initial != last && flag == 0){
                        initial +=1;
                        last -=1;
                    }
                    else
                    {
                        flag = 1;
                        initial -=1;
                        last +=1;
                    }                   
                }
                printf("Would you like to continue? (Y or N):"); // Does the user want to continue
                scanf(" %c",&duration);
                if (duration == 'N')
                {
                    result=0;
                }
                else
                {
                    result =1;
                    
                }          
            }
            // letter y suppression
                else if ( letter == 'Y') 
                {
                    int i,j,flag; // define i, j and flag for the for loop
                    int initial , last; // define initial and last  for the for loop
                    initial = 0;
                    last = size -1;
                    flag = 0;

                    for(i = 0; i < size; i++ ){ // I repeat the number of loops it received from the user
                        if ( initial != last && flag ==0){
                            for(j = 0; j<= last; j ++){
                                if( j == initial || j == last){
                                    printf("*");
                            }
                                else
                                {
                                    printf(" ");
                                }
                            }
                            printf("\n");  
                            initial +=1;
                            last-=1;   
                        }
                        else
                        {
                            size = size/2;
                            for(i = 0; i< size; i++){
                                for ( j = 0; j < size; j++)
                                {
                                    printf(" ");
                            }
                            printf("*");
                            printf("\n");   
                    }            
                            initial +=1;
                            last-=1;
                            flag =1;
                        }
                        

                    }
                    printf("Would you like to continue? (Y or N):");
                    scanf(" %c",&duration);
                    if (duration == 'N')
                    {
                        result=0;
                    }
                    else
                    {
                        result =1;
                    }
                }
                else if (letter == 'W'){
                    int i,j,flag; // define i, j and flag for the for loop
                    int initial ,mid; // define initial and mid for the for loop
                    printf("\n");

                    initial = 0;
                    mid = size -1;
                    int last = size+1;
                    int a = size*2-1;
                    int b = size*2;

                    flag = 0;

                    for(i = 0; i <= size; i++ ){
                        if ( initial != mid && flag ==0){
                            for(j = 0; j<= b-1; j ++){
                                if( j == initial || j == mid || j == last || j == a){
                                    printf("*");
                            }
                                else
                                {
                                    printf(" ");
                                }
                            }
                            printf("\n");  
                            initial +=1;
                            mid-=1;
                            last +=1; 
                            a -=1;                       
                        }
                    }    
                    printf("Would you like to continue? (Y or N):");
                    scanf(" %c",&duration);
                    if (duration == 'N')
                    {
                        result=0;
                    }
                    else
                    {
                        result =1;
                    }
                }
                else if (letter == 'Z')
            {
                int i,j,k,space,flag; // define i, j,k,space and flag for the for loop
                int initial , last; // define initial and last for the for loop
                initial = 0;
                last = size -1;
                space = size-1;
                int yildiz = 1;

                for (int j =0;j<last;j++){
                    printf("*");
                    printf(" ");
                }
                for(k = 0; k < size; k ++){
                    for( int s=0; s < space*2; s+=1){
                        printf(" ");
                    }
                    printf("*");
                    
                    printf("\n");
                    space--;
                    yildiz +=1;
                }
                for (int i =0;i<size;i++){
                    printf("*");
                    printf(" ");
                }
                printf("\n");

                printf("Would you like to continue? (Y or N):");
                scanf(" %c",&duration);
                if (duration == 'N')
                {
                    result=0;
                }
                else
                {
                    result =1;
                }
            }
            // if the user enters the wrong number the cycle starts again
                else
                {
                    wrongLetter = 1;
                    printf("Invalid letter: ");
                }
    }       }
        // if user enters wrong letter the loop will repeat start
        else
        {
            printf("Invalid size. Your size is not bigger than three. Repeat again\n");
            printf("\n");
            flag2 = 1;
        }
    }
    printf("GoodBye:)");  
    printf("\n");   
}


