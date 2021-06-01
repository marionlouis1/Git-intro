#include <stdio.h>
#include "module.c"
#include "module.h"

#define PI 3.14

int main() {
    printf(" addone(5) = %d\n", addone(5)); //UTILISATION
    float a = PI;
    printf(" pi = a=%d\n",a);
}