#ifndef TRIANGLE
#define TRIANGLE
#include "point.h"
#include <stdio.h>

typedef struct _Triangle {
    Point *p1;
    Point *p2;
    Point *p3;
} Triangle ; 

Triangle* create_triangle(Point *p1, Point *p2, Point *p3) {
    Triangle *res = malloc(sizeof(Triangle));

    res->p1 = p1;
    res->p2 = p2;
    res->p3 = p3;

    return res;
}

void print_triangle(Triangle *t) {
    printf("Triangle : \n");
    print_point(t->p1) ;
    print_point(t->p2) ;
    print_point(t->p3) ;
}
#endif