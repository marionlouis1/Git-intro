#include <stdio.h>
#include "module.c"
#include "module.h"
#include "math.h"
#define PI 3.14


void sum_tab_i (int tab1[], int tab2[],int n, int i, int tab_res[]) {
    tab_res[i] = tab1[i] + tab2 [i];
    
}

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


void print_tableau (int tab[] , int n) {
    for (int i=0 ; i<n ; i++) {
        printf("%i\n", tab[i]);
    }
}

int palindrome (char s1[]) {
    int n = mylen(s1) ; 
    if (n%2 == 0) {
        for (int i=0 ; i<n/2 ; i++) {
            if (s1[i] != s1[n-i]) {
                return 0;
            } else {
                return 1;
            }
        }

    } else if (n%2 == 1) {
        for (int i=0 ; i<=(n-1)/2 ; i++) {
            if (s1[i] != s1[n-i]) {
                return 0;
            } else {
                return 1;
            }
        }
    }
}
int main() {
    /* 
    printf(" addone(5) = %d\n", addone(5)); //UTILISATION
    
    float a = PI;
    printf(" pi = a=%f\n",a);
    
    int b = 10 ;
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    printf(" sum({b} = %d\n" , sum(tab, b));
    
    char seq[10] = "salutlegar";
    printf("la séquence est : %s\n", seq);
    printf("longueur de seq est : %d\n", mylen(seq));
    
    // Somme de 2 tableaux
    int n  = 10 ;
    int tab1[] = {1,2,3,4,5,6,7,8,9,10} ; 
    int tab2[] = {10,9,8,7,6,5,4,3,2,1} ;
    int tab_res[n];
    for (int i=0 ; i<n ; i++) { // ON CREE LE TABLEAU RESULTANT DE LA SOMME DES DEUX AUTRES
        sum_tab_i (tab1, tab2, n, i, tab_res) ; 
    }
    print_tableau (tab_res, n);
    

    //Affichage d'une chaîne de caractères tapée à l'écran
    char chaine[60];
    printf("Entrez la chaîne de caractères\n");
    scanf("%s", &chaine);
    printf("La chaîne que vous venez de taper est : %s\n Est-ce exact ?\n",chaine);
    */

    // Teste si une chaîne de caractères est un palyndrome :
    char s1[] = "sas";
    printf("%d", palindrome (s1));
}