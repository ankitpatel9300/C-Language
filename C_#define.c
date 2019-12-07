//  Use of #define in preprocessor directive C- Language


#include <stdio.h>  
#define MIN(a,b) ((a)<(b)?(a):(b))  
void main() {  
   printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));    
}  
