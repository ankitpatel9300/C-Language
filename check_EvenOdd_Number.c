/*************************************************************
 * Program to check whether the entered number is even or odd.
**************************************************************/
 
#include<stdio.h> // include stdio.h
 
int main() 
{
    int n;
 
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
       
    return 0;
}