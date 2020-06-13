/** Program to check for perfect number     **/
/** Example:- 6 ---> Its divisor are 1,2,3  **/
/** Sum of it's devisor are 1+2+3= 6        **/


#include<stdio.h>
#include<limits.h>

int main(void)
{
    
    unsigned int num=0;
    int sum=0;
    printf(" Max is %u\n",INT_MAX);
    printf("Enter a positive integer Number\n");
    scanf("%u",&num);
    
    while( (num==0) || (num> INT_MAX )  )  //Prevent user from Entering undefined number
    {
        printf("Please Enter Number < 4-Byte\n");
        scanf("%u",&num);
    }
    
    for (int i=1; i<num ;i++)
    {
        if( num%i ==0 )           //check if  or not
        {                      
            sum=sum+i ;           //if factorial then add to sum
            
        }
    }
    
    if(sum==num)
    {
        printf("Number %u is a Perfect number",num);
    }
    else
    {
        printf("Number %u is Not a Perfect number",num);
    }
    
    
    
    
    return 0;
}
