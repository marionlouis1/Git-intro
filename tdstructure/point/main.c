#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "triangle.h"


int main () {

    Point *p = create_point(5, 12) ;
    Point *q = create_point (6, 18) ;
    Point *r = create_point (10,10) ;
    p->x= 5 ;
    q->y= 12;
    print_point(q);
    move (p,1,1);
    print_point(p);

    Triangle *t = create_triangle(p,q,r); 
    print_triangle(t);

}