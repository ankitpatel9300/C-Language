// C implementation of the Linear Search approach 

#include <stdio.h> 
  
// Linearly search x in arr[].  
// If x is present then return the index, 
// otherwise return -1 

int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i=0; i<n; i++) 
    { 
       if (arr[i] == x) 
         return i; 
    } 
    return -1; 
} 
  
/* Driver program to test above functions*/
int main() 
{ 
    int arr[] = {1, 10, 30, 15}; 
    int x = 20; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    if(search(arr , n, x) == -1  )  // check for return value
    {
        printf(" %d is not present in given array" ,x) ;
    }
    else{
        
    printf("%d is present at index %d", x, search(arr, n, x)); 
    }
  
     
    return 0; 
} 
