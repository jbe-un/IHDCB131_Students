#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX 100

bool palindrome(int taille, int tab[taille]){
    int i;
    bool pal = true;
    for(i=1;i<=taille;i++){
        if(tab[i]!=tab[taille-i]){
            pal=false;
        }
    }
    return pal;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(){
    printf("Entrez, lettre par lettre, un mot.  Terminez l'encodage avec '-':\n ");
    char mot[MAX];
    char lettre;
    scanf(" %c",&lettre);
    int i=1;
    while(i<MAX){
        mot[i]=lettre;
        scanf(" %c",&lettre);
    }
    printf("Entrez, des lettres.  Pour chacune, je vous dis combien d'occurrences il y en a dans le mot que vous avez tapé:\n ");

    scanf(" %c",&lettre);
    while(lettre!='-'){
        printf("Nombre d'occurrences de %c: %d\n",nb_occ(lettre,i,mot));
    }

    if(palindrome(i,mot)){
        printf("C'est un palindrome !\n");
    }

    return EXIT_SUCCESS;
}

// Ne pas modifier la ligne suivante
#endif