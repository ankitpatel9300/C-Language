#include<stdio.h>

int checkIfPrime(int x) ;
int *firstNprime(int x) ;

int main() {
    int number ;
    printf("Enter a number to print first N prime numbers :- ");
    scanf("%d", &number);   //User Input
    int *outputPrime=firstNprime(number);
    
    for(int i=0;i<=;i++)
    {
    printf(" %d ",outputPrime[i]);
    }
    return 0;
}

//function to check the number if it is prime
int checkIfPrime (int x) {
    int i,flag=0;
    for( i=2 ;i<=x/2 ;i++) {
        if(x%i ==0){
         flag=1;
         break;
        }
    }
    
    if(flag==0){
        return 1;   //Prime Number
    }
    else {
        return 0;   //Not a Prime Number
    }
}
//Function to find N prime numbers
int *firstNprime(int x) {
   
    static int primeNumbers[100] ;
    int i=2,j=0;
    for(int i=2;i<=x;i++)
    {
        if(checkIfPrime(i))
        {
            primeNumbers[j]=i;
            j++ ;
        }
    }
    return primeNumbers ;
}

