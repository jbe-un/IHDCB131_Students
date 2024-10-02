#include <stdio.h>
#include <stdbool.h>

bool trouverCubes(int nombre, int *nb1, int *nb2) {
    // Préconditions:
    // - nombre est un entier positif
    // - nb1 et nb2 sont des pointeurs respectivement vers a et b
    // *nb1 contient la valeur de a et *nb 2 contient la valeur de b
    bool solution_trouvee;

    // TODO: chercher et trouver si nombre peut être décomposé en la somme de deux cubes de deux nombres positifs et si oui, récupérer ces deux nombres et afficher le résultat

    // Postconditions:
    // - renvoie true si une solution existe, false sinon
    // - modifie *nb1 et *nb2 pour contenir les deux nombres trouvés si une solution existe
    return solution_trouvee;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int nombre, a, b;
    bool solution_trouvee;

    // TODO: afficher une phrase permettant d'encoder le nombre, et récupérer sa valeur


    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------
    // Appel à la fonction trouverCubes qui renvoie un booléen en fonction de si le nombre peut être décomposé en la somme de deux cubes ou non, et récupère le cas échéant les deux nombres
    solution_trouvee = trouverCubes(nombre, &a, &b);
    if (!solution_trouvee) {
        printf("Aucune paire de nombres positifs n'a été trouvée.");
    }

    return 0;
}

// Ne pas modifier la ligne suivante
#endif