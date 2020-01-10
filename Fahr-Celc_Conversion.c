// This Program uses *F to *C conversion formula for Fahrenheit to Celsius conversion


#include<stdio.h>

int main()
{
    
    int fahr, celsius ;
    int min=0,max=300 , step=20 ;
    
    fahr=min;
    printf(" \tFahr\t Celc \n");
    while ( fahr<= max )
     {
         celsius= 5 * (fahr- 32) / 9 ;    //Fahrenheit to Celsius Conversion formula
         
         printf(" \t%d\t%d\n ",fahr,celsius);
         
         fahr =fahr+step ;
         
     }
    
    return 0;
}
