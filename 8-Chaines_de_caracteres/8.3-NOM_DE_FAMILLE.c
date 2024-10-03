/*

Auteur: Cédric Libert
Description:

*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//PRE: m1 et m2 sont des chaines de caractères
//POST: renvoie le nombre de lettres uniques communes dans m1 et m2
//par exemple, papillon et plume ont deux lettres uniques communes, p et l...
//même si il y a plusieurs p et plusieurs l !

int common_letters(char* m1, char* m2){
    int i = 0;
    while(m1[i]!='\0'){
        int j = 0;
        while(m2[j]!='\0'){
            //...
        }
    }
}

//PRE: TODO
//POST: TODO
bool are_equals(char* word1, char* word2) {
    // TODO: à compléter
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(int argc, char **argv){
    printf("Mot 1:");
    char m1[MAX_WORD];
    scanf("%s",&m1);
    printf("Mot 2:");
    char m2[MAX_WORD];
    scanf("%s,&m2");

    printf("Nombre de lettres communes: %i\n",common_letters(m1,m2));
    return EXIT_SUCCESS;
}

// Ne pas modifier la ligne suivante
#endif