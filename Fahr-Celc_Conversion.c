// This Program uses *F to *C conversion formula for Fernhite to Celcious conversion


#include<stdio.h>

int main()
{
    
    int fahr, celcious ;
    int min=0,max=300 , step=20 ;
    
    fahr=min;
    printf(" \tFahr\t Celc \n");
    while ( fahr<= max )
     {
         celcious= 5 * (fahr- 32) / 9 ;    //Fernhite to Celc Conversion formula
         
         printf(" \t%d\t%d\n ",fahr,celcious);
         
         fahr =fahr+step ;
         
     }
    
    return 0;
}