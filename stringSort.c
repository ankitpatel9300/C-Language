#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 30
int compar(void *pa,void *pb);

struct person_struct {
    char lastName[N];
    char firstName[N];
    char cityName[N]; } ;

int main()
{
    typedef struct person_struct person_t;
    person_t dBasePeople[100];
    strcpy(dBasePeople->lastName,  "Patel");
    strcpy(dBasePeople->firstName, "Ankit");
    strcpy(dBasePeople->cityName,  "Toronto");
    
    printf("%s  %s  %s",dBasePeople->lastName,dBasePeople->firstName,dBasePeople->cityName);
    
    return 0;
}


int compar(void *pa,void *pb)
{
    char *str_a= (char *)pa;
    char *str_b= (char *)pb;
    if(str_a<str_b)
    return -1;
    else if (str_a>str_b)
    return 1;
    return 0;
}

