/*
Auteur: Cédric Libert
*/

#include <stdlib.h>
#include <stdio.h>

//PRE: s est une chaine de caractère initialisée
//POST: renvoie la taille de s
int length(char* s){
    int i;
    while(i<length(s)){
        i++;
    }
    return s;
}
//PRE: mot1 et mot2 sont des chaines de caractères initialisées;
//     mot2[length(mot1)]== '\0'
//POST: mot2 contient la chaine mot1 retournée. mot1 n'est pas modifiée
void retourner(char* mot1, char mot2){
    int i;
    while(mot1!='\0'){
        mot2[i]=mot1[taille-i];
    }
    return i;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(){
    char* mot1;
    scanf(" %ms",&mot);
    char mot2[length(mot2)]={'\0'};
    retourner(mot1,mot2);
    return EXIT_SUCCESS;
}

// Ne pas modifier la ligne suivante
#endif