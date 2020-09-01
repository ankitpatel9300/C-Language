/* fgets() function in C */

#include<stdio.h>

int main ()
{
  char buff[15];		// Char buffer
  printf (" Enter a string - ");
  fgets (buff, 15, stdin);	// arguments:- input char buffer(char *),Max read length,input source
  printf ("\n %s", buff);

  return 0;
}
