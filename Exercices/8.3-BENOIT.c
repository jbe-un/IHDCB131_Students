#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX_WORD 100

//PRE: m1 et m2 sont des chaines de caractères
//POST: renvoie le nombre de lettres uniques communes dans m1 et m2
//par exemple, papillon et plume ont deux lettres uniques communes, p et l...
//même si il y a plusieurs p et plusieurs l !

int common_letters(char* m1, char* m2){
    int i = 0;
    int letter_equal = 0 ;
    while(m1[i]!='\0'){
        int j = 0;
        while(m2[j]!='\0'){
            if (m1[j] == m2[i]){
                letter_equal++;
                i++;
            }
            j++;
            }
        i++;           
    }
    return letter_equal;
}

//PRE: Reçoit le mot 1 et le mot 2
//POST: return true si les mots sont de même longueur sinon renvoit false
bool are_equals(char* word1, char* word2) {
    int premier_mot = 0;
    int deuxieme_mot = 0;
    int i = 0;
    while (word1[i] != '\0'){
            premier_mot++;
            i++;
        }
    i = 0;
    while (word2[i] != '\0'){
            deuxieme_mot++;
            i++;
        }
    if (premier_mot == deuxieme_mot){
        return true;
    } else {
        return false;
    }
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(int argc, char **argv){
    printf("Mot 1:");
    char m1[MAX_WORD];
    scanf(" %99s",m1);
    printf("Mot 2:");
    char m2[MAX_WORD];
    scanf(" %99s",m2);
    printf("%i\n",common_letters(m1,m2));
    if (are_equals(m1,m2)){
        printf("Les mots sont égaux.");
    } else {
        printf("Les mots ne sont pas égaux.");
    }
    return EXIT_SUCCESS;
}

// Ne pas modifier la ligne suivante
#endif