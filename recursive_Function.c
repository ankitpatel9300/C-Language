/****      Use of recursive function               *********
 ****  to find factorial of given number           ********/
 
#include<stdio.h>

int fact(int n);  //function prototype

int main(void)
{
    int num=0,result=0;
    printf(" Enter a number:- ");
    scanf("%d",&num);
    result= fact(num);
    printf("\n Factorial of %d is %d",num,result);
    
    return 0;
}

// function defination
int fact(int n)
{
    int result ;
    if(n==0) {
        result=1 ;
    }
    else {
        result= n* fact(n-1) ;
    }
    
    return result ;
}
