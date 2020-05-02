/* C-Program  to understand structures   */

#include<stdio.h>
#include<string.h>

int main ()  {
    
    struct date {
        int Year ;                 //member(any basic data-type of struct)
        int Month;
        int Date ;
    } ;
    
    struct person{
        char name[20];
        struct date birthday;     // member date(struct) of struct person 
    } ;
    
    struct person wife ;          //variable wife of data-type struct
    
    /*Important :- You can not assign string 
    to a struct member(wife.name="Dhara" is invalid )  */
    strcpy(wife.name ,"Dhara_Patel") ; 
    wife.birthday.Year=1995;
    wife.birthday.Month=03 ;
    wife.birthday.Date=23 ;
    
    printf("My Wife is %s and \nher birthday is %d-%d-%d " ,wife.name,wife.birthday.Date,
                                wife.birthday.Month,wife.birthday.Year );
    
    return 0 ;
    }
