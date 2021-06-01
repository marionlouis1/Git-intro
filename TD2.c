#include <stdio.h>
#include "main.h"

#define PI 3.14

int main() {
    printf(" addone(5) = %d\n", addone(5)); //UTILISATION
    float a = PI;
    printf(" pi = a=%d\n", a);
}

int addone(int x) { // DEFINITION
    return x+1;
}