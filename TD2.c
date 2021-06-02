#include <stdio.h>
#include "module.c"
#include "module.h"

#define PI 3.14

int sum ( int tab[], int n ) {
    int res = 0;
    for (int i = 0 ; i<n ; i++)
    {
        res += tab[i];
    }
    return res;
}
int mylen ( char s[]) {
    int compteur = 0;
    while (s[compteur] != 0) { // CAR TOUTE CHAINE FINIT PAR \0
        compteur +=1 ; 
    }
    return compteur;
}

int main() {
    printf(" addone(5) = %d\n", addone(5)); //UTILISATION
    float a = PI;
    printf(" pi = a=%f\n",a);
    int b = 10 ;
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    printf(" sum({b} = %d\n" , sum(tab, b));
    char seq[10] = "salutlegar";
    printf("la séquence est : %s\n", seq);
    printf("longueur de seq est : %d\n", mylen(seq));
}

