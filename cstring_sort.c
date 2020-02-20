#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 30
int compar(void *pa,void *pb);
void fileCopy(FILE *fp);
 struct person_struct
   {
	  char lastName[N];
      char firstName[N];
      char cityName[N]; } ;

 typedef struct person_struct person_t;
  person_t dBasePeople[100];

int main()
{
    FILE *fp=fopen("myTextFile.txt","r");

    fileCopy(fp);

    qsort( dBasePeople,100,sizeof(person_t),compar );

    printf(" The sorted records are \n");
    printf("\nLastName  FirstName  CityName \n");
    for (int i=0;i< 100;i++){
    printf("\n %s      %s      %s ", dBasePeople[i].lastName, dBasePeople[i].firstName, dBasePeople[i].cityName );

    }
    return 0;
}

void fileCopy(FILE *fp)
{   size_t ctr=0;
	char str_1[N],str_2[N],str_3[N];
	while(fscanf(fp,"%s%s%s",str_1,str_2,str_3) != EOF)
	{
		strcpy(dBasePeople[ctr].lastName,str_1);
		strcpy(dBasePeople[ctr].firstName,str_2);
		strcpy(dBasePeople[ctr].cityName,str_3);
	    ++ctr;
	}
     	fclose(fp);
}

int compar(void *pa,void *pb)
{
    char *str_a= ((person_t *)pa)->lastName;
    char *str_b= ((person_t *)pb)->lastName;
    return strcmp(str_a,str_b);
}

