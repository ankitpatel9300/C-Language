#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 30
int compar(void *pa,void *pb);
void fileCopy(FILE *fp);
 struct person_struct
   {  char lastName[N];
      char firstName[N];
      char cityName[N]; } ;

 typedef struct person_struct person_t;
  person_t dBasePeople[100];

int main()
{
    FILE *fp=fopen("myTextFile.txt","r");

    fileCopy(fp);
    printf(" %s  %s %s ", dBasePeople[10].lastName,dBasePeople[10].firstName,dBasePeople[10].cityName);
    printf(" \n%s %s ", dBasePeople[11].lastName,dBasePeople[11].cityName);
    printf(" \n%s ", dBasePeople[12].lastName);

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
		//if(ctr<=3)
	    ++ctr;
	}
     	fclose(fp);

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

