#include <stdio.h>


int mylen2 (char *s ) {
    int compteur = 0 ;
    while (*s++) {

        compteur++ ;
    }
    return compteur;
}


int main() {

//Exercice 0
/*
printf("Approve moi bogoss");
*/
//Exercice 2
char* s = "salut" ;
printf("%s\n", s);
printf("La longueur de la chaîne est : %d\n" , mylen2(s));
}