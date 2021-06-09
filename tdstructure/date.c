#include <stdio.h>
#include <stdlib.h>
#include"date.h"


Date* create_date (int day, int month, int year) {
    Date *res = malloc(sizeof(Date));
    res->day = day;
    res->month = month;
    res->year = year;
    return res;
}


void print_date (Date *date) {
    printf("%d/%d/%d\n", date->day, date->month, date->year);
}