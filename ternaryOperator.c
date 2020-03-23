/* ----------------------------------------------------------
 * ternary_Operator.c
 * ternary operators are equivalent to if-else statements
 * (a>b) ? a : b ;
 * if a is > b then a , otherwise b
 *
 *
 * ---------------------------------------------------------- */

#include<stdio.h>

int main() {
	int age =0;
	char *classification ;
	printf("Enter your age :- ");
	scanf("%d",&age);

	printf("\n You are %s",classification= ((age<19)? "kid":(age<60?"adult": "elder") )   ) ;

	/* -------------------------------------------------------
	 * Return of ternary :- It depends on "exp2"
     * and convertibility of "exp3 in to "exp2"
     * In this case "exp2" returns a pointer to char-string
     * ------------------------------------------------------*/

	return 0 ;


}
