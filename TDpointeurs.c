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

void memsizecop (char s[], char *scop) {
    int p = mylen (s);
    int *e = malloc(p*sizeof(char)+1) ;
    for (int i = 0 ; i<p ; i++) {
        *(scop+i) = s[i] ; 
    }
    *scop(p+1) = '\0'
}
int occ (char* s, char compa) {
    int length = mylen2 (s) ; 
    int compteur = 0 ; 
    for (int i = 0 ; i<length ; i++) {
        if (*(s+i) == compa) {
            compteur ++ ;
        }
    }
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
char* t = "salutoo" ;
printf("J'ai copié la chaîne de caractères %s\n" , t );
printf("Le nombre de o dans la chaîne est %d\n" , occ(s , "o");

}