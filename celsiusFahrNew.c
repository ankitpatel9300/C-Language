/*
 * celsiusFahrNew.c
 *
 *  Created on: Jan. 19, 2020
 *      Author: ankit
 */


#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
    float fahr ;
    for (fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
    printf("%3.0f %6.1f\n",fahr,(5.0/9.0)*(fahr-32));

    return 0;

}
