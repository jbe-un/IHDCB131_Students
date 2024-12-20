/*
Auteur: Cédric Libert
*/

#include <stdio.h>

// PRE: s est une chaine de caractère initialisée
// POST: renvoie la taille de s
int length(char* s) {
    int i = 0 ;
    while (s[i] != '\0'){
        i++;
    }
    return i;
}

// PRE: mot1 et mot2 sont des chaines de caractères initialisées;
//      mot2[length(mot1)]== '\0'
// POST: mot2 contient la chaine mot1 retournée. mot1 n'est pas modifiée
char* retourner(char* mot1, char* mot2) {
//    int i;
//    while (mot1[i] != '\0') {
//        mot2[i] = mot1[taille-i];
//    }
    int taille;
    taille = length(mot1);
    for (int i = 0 ; mot1[i] != '\0' ; i++){
        mot2[i] = mot1[taille - i -1];
    }
    return mot2;
}

int main(void) {
    char* mot1;
    int taille;
    printf("Entrez un mot :");
    scanf(" %ms", &mot1);
    taille = length(mot1);
    char mot2[taille];
    printf(" %s", retourner(mot1,mot2));

    return 0;
}