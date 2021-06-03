#include <stdio.h>
#include <stdlib.h>

int mylen ( char s[]) {
    int compteur = 0;
    while (s[compteur] != 0) { // CAR TOUTE CHAINE FINIT PAR \0
        compteur +=1 ; 
    }
    return compteur;
}

int mylen2 (char *s ) {
    int compteur = 0 ;
    while (*s++) {

        compteur++ ;
    }
    return compteur;
}

int* memsizecop (char s[], char *scop) {
    int p = mylen (s);
    int *e = malloc(p*sizeof(char)) ;
    for (int i = 0 ; i<p ; i++) {
        scop[i] = s[i] ; 
    }
    return e;
}


int main() {

//Exercice 0
/*
printf("Approve moi bogoss");
//Exercice 1
char* s = "saluto" ;
printf("%s\n", s);
printf("La longueur de la chaîne est : %d\n" , mylen2(s));
*/

// Exercice 2
char* t = "saluto" ;
printf("J'ai copié la chaîne de caractères %s\n" , t );


}