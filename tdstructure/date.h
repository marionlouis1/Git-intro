#include <stdio.h>
#ifndef DATE
#define DATE

typedef struct _DATE {

    int day;
    int month;
    int year;

} Date ;

Date* create_date (int a, int b, int c) {
    Date *res = malloc(sizeof(Date));
    res->day = a;
    res->month = b;
    res->year = c;
    return res;
}


void print_date (Date *date) {
    printf("%d/%d/%d\n", date->day, date->month, date->year);
}

#endif