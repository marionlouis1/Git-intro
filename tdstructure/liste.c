#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include"date.h"


List* create_list (Date *date) {
    List *res=malloc(sizeof(List));
    res ->date = date;
    res->next = NULL;

    return res;
}

void print_list(List *list) {
    List *cursor = list;
    print_date(cursor->date);
    while (cursor->next != NULL) {
        cursor = list->next;
        print_date (cursor->date);
    }
}


