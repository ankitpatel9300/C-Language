/* 
   Ternary operator in C-Language
   

*/
#include <stdio.h>

int main(void)
{
    int a=0;
    char *ch=NULL;
    printf("Enter any positive number : ");
    scanf("%d",&a);
    while (a<1)         //prevent user from entering negative number
    {
        printf("I told you to Enter postive Value ! : ");
        
        scanf("%d",&a);
    }
    
    printf("The number %d is an %s number" , a, ch= ((a%2)==0 ? "Even" : "Odd") ) ;
    

    return 0;
}
