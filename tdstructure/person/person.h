#include <stdio.h>
#include "../date.h"
#ifndef PERSON
#define PERSON

typedef struct _PERSON {

    char *firstname;
    char *surname;
    Date *birth_date;

} Person ;

Person  *create_person (char *firstname,char *surname, Date *birth_date);
void print_person(Person *person);
#endif
