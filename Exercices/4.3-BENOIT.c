#include <stdio.h>

int sum_integer(int n) {
    // Préconditions: n est un entier
    int sum;
    int i = 0;
    // TODO: calculer la somme des n premiers naturels
for (i = 1,sum = 0; i <= n; i++){
        sum += i; // Ajout de i à la somme
    }
    // Postconditions: sum contient la somme des n premiers naturels
    return sum;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int n=0;
    // TODO: récupérer le naturel n utilisé pour calculer la somme
    scanf ("%i",&n);
    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------
    int sum = sum_integer(n);
    printf("La somme des %d premiers naturels est %d", n, sum);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif