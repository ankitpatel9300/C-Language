#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 30
int compar(void *pa,void *pb);
void fileCopy(FILE *fp);
 struct person_struct {
    char lastName[N];
    char firstName[N];
    char cityName[N]; } ;
 typedef struct person_struct person_t;
 static person_t dBasePeople[100];
int main()
{

    //strcpy(dBasePeople->lastName,  "Patel");
    //strcpy(dBasePeople->lastName,  "Ppppp");
    //strcpy(dBasePeople->firstName, "Ankit");
    //strcpy(dBasePeople->cityName,  "Toronto");
    FILE *fp=fopen("myTextFile.txt","r");

    fileCopy(fp);

    //printf("%s  %s  %s",dBasePeople->lastName,dBasePeople->firstName,dBasePeople->cityName);

    return 0;
}

void fileCopy(FILE *fp)
{
	char ch;
	//static char str[05];

	if(fp != NULL)
	{
		int count=0,i=0;
		while((ch=fgetc(fp))!=EOF )
		{
			if(ch==' '|| ch=='\n')
			{
				printf("\n");
				++count;
			}
			else
			{
				if(i==0) {
					static char *ptr= &(dBasePeople->lastName);
					*(dBasePeople->lastName)=ch ;
					 ptr++ ;           }
				else if(i==1) { *(dBasePeople->firstName)=ch ;}
		else if(i==2) {*(dBasePeople->cityName)=ch ; }

				printf("%c",ch);

			//strcpy(dBasePeople->lastName,str);
			//strcpy(dBasePeople->firstName,str) ;
			//strcpy(dBasePeople->cityName,str) ;


		}
		//printf("%s  ",dBasePeople->lastName);   //,dBasePeople->firstName,dBasePeople->cityName)
	}
		printf("%s",dBasePeople->lastName);
	}
	else
	{
		fclose(fp);
	}
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
