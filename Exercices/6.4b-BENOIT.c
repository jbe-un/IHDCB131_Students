#include <stdio.h>

// TODO: définir la fonction "displayRowOfStars" qui prend en argument un entier et qui affiche sur une ligne le nombre d'étoiles correspondant à cet entier

// PRE reçoit un nombre entier
// POST Affiche le nombre d'étoile correspondant au nombre entier de l'utilisateur sur une ligne
int display_row_of_stars (int a){
    for (int i = 0 ; i != a ; i ++){
        printf("*");
    }
}

// TODO: définir la fonction "displaySquareOfStars" qui prend en argument un entier et qui affiche un carré de taille n avec uniquement des étoiles
// PRE reçoit un nombre entier
// POST affiche le carré du nombre en étoile part display_row_of_star qui affichera la ligne de a nombre
int display_square_of_stars (int a){
//  int j = 1;
    for (int i = 1 ; i <= a ; i ++){
//      for (; j <= a ; j ++){
//          printf("*");
        display_row_of_stars(a);
//      }
        printf("\n");
//      j=1;
    }
}
int input_user (){
    int a;
    scanf("%d", &a);
    return a;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    // TODO: récupérer les deux bornes et afficher tous les carrés d'étoiles dont la taille se situe entre les deux bornes entrées
    int borneMin;
    int borneMax;
    borneMin = input_user();
    borneMax = input_user();
    int borneMed = borneMin;
    while (borneMed <= borneMax){
        display_square_of_stars(borneMed);
        borneMed ++;
    }

    return 0;
}

// Ne pas modifier la ligne suivante
#endif