#include <stdio.h>
#include "date.h"
#ifndef LIST
#define LIST

typedef struct _LIST {

    Date *date ; 
    struct _LIST *next;

} List ;

List  *create_list (Date *date);
void print_list(List *list);


#endif