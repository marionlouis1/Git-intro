#include <stdio.h>
#include <stdlib.h>
#include "person.h"
#include"../date.h"


Person* create_person (char *a, char *b, Date *birth_date) {
    Person *res=malloc(sizeof(Person));
    res ->firstname = a;
    res->surname = b;
    res->birth_date = birth_date;

    return res;
}

void print_person (Person *per) {
    printf("Je suis :\n");
    printf("%s %s", per->firstname, per->surname);
    print_date(per->birth_date);
}
