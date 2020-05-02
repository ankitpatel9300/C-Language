/*
 * command_Line_arg.c
 *
 *  Created on: May 2, 2020
 *      Author: ankit
 */

#include<stdio.h>

int main(int argc, char *argv[]) {


	if (argc < 2) {
		printf(" Please specify at-least one file name ");
		return 1 ;
	}
	int x;
	printf(" The total argument is %d:\n", argc);

	for (x = 0; x < argc; x++) {
		printf("\n Argument %d is :- %s: ", x + 1, argv[x]);
	}

	return 0;
}
