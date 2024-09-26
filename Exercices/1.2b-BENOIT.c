#include <stdio.h>

#define PHI 1.61803398875
//Définition du nombre d'or

int main(){
    printf("Quelle est la largeur du rectangle d'or dont vous voulez connaître la longueur ? ");
    float largeur;
    //Déclaration de la variable "Largeur"
    scanf("%f",&largeur);
    //Affectation de la valeur donné à la variable "Largeur"
    printf("La longueur du rectangle d'or vaut: %f\n", largeur*PHI);
    //Renvoi de la valeur calculée de la longueur du rectangle d'or
    return 0;
}