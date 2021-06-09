#include <stdio.h>
#include <stdlib.h>
#include "person.h"
#include "../date.h"


int main () {

    Person *lou = create_person("louis","marion",create_date(20,9,2000));
    print_person(lou);
}