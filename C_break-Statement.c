#include<stdio.h>  

void main ()  
{  
    int i;  
    for(i = 0; i<10; i++)  
    {  
        printf("%d ",i);  
        if(i == 5)
        break;
        
      
    }  
    
    printf("\n\ncame outside of loop at i = %d",i);  
      
}