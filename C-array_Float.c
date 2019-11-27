#include<stdio.h>

int main()
{
    
    float value[5];
    int x=0;
    
    for (x=0 ; x<5; x++)
    {
        printf("Float value #%d " , x+1);
        scanf("%f" , &value[x] );
    }
    
    puts ("\nHere are the Float values :");
    for (x=0 ; x<5 ; x++)
    {
        printf (" Float value # %d  %.2f \n",x+1, value[x]);
    }
    return 0;
}