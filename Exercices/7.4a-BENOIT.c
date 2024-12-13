#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX 100

bool palindrome(int taille, char tab[taille]){
    int i;
    bool pal = true;
    for( i = 0 ; i < taille / 2 ; i++ ){
        if(tab[i]!=tab[taille-i-1]){
            pal=false;
        }
    }
    return pal;
}
int nb_occ(char lettre, char mot[], int taille) {
    int nb_occurence = 0;
    for (int j = 0; j < taille; j++) {
        if (mot[j] == lettre) {
            nb_occurence++;
        }
    }
    return nb_occurence;
}


// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(){
    printf("Entrez, lettre par lettre, un mot.  Terminez l'encodage avec '-':\n ");
    char mot[MAX];
    char lettre;
    int i = 0;
    int j = 0;
    scanf(" %c",&lettre);
    while(i < MAX - 1 && lettre != '-'){
        mot[i]=lettre;
        i++;
        scanf(" %c",&lettre);
    }
    printf("Entrez, des lettres.  Pour chacune, je vous dis combien d'occurrences il y en a dans le mot que vous avez tapé:\n ");

    
    while( j < i ){
        scanf(" %c",&lettre);
        printf("Nombre d'occurrences de %c: %d\n",mot[j],nb_occ(lettre,mot,i));
        j++;
    }

    if(palindrome(i,mot)){
        printf("C'est un palindrome !\n");
    }

    return EXIT_SUCCESS;
}

// Ne pas modifier la ligne suivante
#endif