/* This program is to check the value of char read and EOF   */


#include<stdio.h>

int main()
{
    int c ;  //using int c instead char bcz we want to make sure c could contain what getchar returns with EOF
    
    if (c= getchar() != EOF)
    {
        printf("\n%d  --when read char", c);
        
            }
    
        printf("\n%d  -- when EOF read", EOF);
    return 0;
}
