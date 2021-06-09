#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include "date.h"


int main () {
    Date *date = create_date(20,9,2000);
    List *list = create_list(date);
    print_list(list);
}