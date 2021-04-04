#include<stdio.h>
#include<math.h>

// the goal of the project
    /*
    1 number and 1 letter are required for this project to work.
     First is the size of the letter and the other is the letter.
     If the project gets the appropriate values, 
    it will print the letter on the screen.**/
    
void reverseN(int *number, int N);

int main(){
    printf("Please enter the number you want to change and the number of digits: \n"); 
    int N, number;
    scanf("%d %d", &number, &N);
    reverseN(&number, N);

    return 0;
}
void reverseN(int *number, int N){ // Our main function for the system to work
    int total,count, power, i, sonuc = 1; 
    int son;
    count = 10;

    power = N;
    int exchange,remaningNumber,tersi=0;
    
    int numberOfDigits=0;
    int ilkgirilen = *number;
    // The code written to find out how many digits the entered number 
    while(ilkgirilen>0)
    {
        numberOfDigits++;  
        ilkgirilen/=10;         
    }

    if (numberOfDigits >= N)
    {
        // taking the exponent of the entered digit number out of ten
        for (i = 0; i < power; i++){
            sonuc = sonuc * count; 

        // select the number of entered elements from the main number
            total = (*number % sonuc);
            int ilksayi = total;
            exchange = total;
        }
        // reverse the number
        while(exchange>0){
            remaningNumber=exchange%10;
            tersi=tersi*10+remaningNumber;
            exchange=exchange/10;
        }
        int sonsayi = (*number -total) + tersi;
        printf("%d ",sonsayi);
    }
    else
    {
        printf("N must be less than %d ! \n\n",N);
    }
}