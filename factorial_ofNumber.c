/*******************************************************
 * Program to find the factorial of a number
********************************************************/
 
#include <stdio.h>
 
int main() 
{
    int n, i;
    unsigned long int fact = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = n; i > 0; i--)
    {        
        fact = fact * i;                
    }
    
    printf("%d! = %d", n, fact);
    
    return 0;
}