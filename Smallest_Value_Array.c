#include<stdio.h>

//smallestNumber(int myArr[] ,size) ;

int main()
{
    int n=0,arr[n];
    printf("Enter the value for array\n");
    scanf("%d",&n);
    
    printf("Enter value for Array\n");
    
    for(int i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest=arr[1];
    for(int i=0 ;i<n ; i++)
    {
        if(arr[i]<smallest)
        {  smallest=arr[i];   }
        
        
    }
    printf("\n");
    printf(" Smallest value is %d",smallest);
    
    return 0;
}

