

#include <stdio.h>
#include<string.h>

int strlenth(char *pa);  //string length function declaration

int main()
{
    char myVec[]= "asdghjkiytr"; //character array
    printf("Length of the string is %d",strlenth(myVec) );  

    return 0;
}

int strlenth(char *pa)
{
    int i=0;
    char *ptr=pa;   
    while( *ptr != '\0')
    {  
        ptr++; 
        i++;    }
    
    return i;
}

