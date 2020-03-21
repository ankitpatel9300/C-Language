/*******************************************************
 * Program to demonstrate implicit type conversion
********************************************************/
 
#include <stdio.h>
 
int main() 
{
    int a=100;      //type int
    double b=12.4 ; //type double
    
    printf(" \n sum of a(int) and b(double) is %f ",a+b) ;   //int will be converted to double
    
    char ch= 'a';
    
    printf(" \n sum of a(int) and c(char)   is %d ",a+ch) ;   //char converted to int
    
    
    
    return 0;
}

