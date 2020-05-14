// In C, static and global variables are initialized by the compiler itself.
// Therefore, they must be initialized with a constant value.

#include <stdio.h> 
#include <stdlib.h> 

int x=20;       //Valid-Initialized by const value
int *p = &x;    //Valid-Initialized by address of variable which is const
  
int main(void) 
{ 
    static int *p = (int*)malloc(sizeof(p)); //Invalid -Not a constant initialization
    *p = 10; 
    printf(" %d", *p); 
    printf(" \n%d", x);
} 
