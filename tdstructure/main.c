#include <stdio.h>
#include <stdlib.h>
#include "date.h"


int main () {
    Date *d = create_date(29,01,2001) ; 
    Date *o = create_date(05,04,2001) ;
    print_date(d);
    print_date(o);
}