#include <stdbool.h>

// Préconditions: nb est un nombre entier
// Postconditions: si nb est premier, retourne true. Sinon, retourne false
bool estPremier(int nb){
    int i=2;
    while(nb>1 && nb%i!=0){
        i++;
    }
    return nb==i;
}

// Préconditions: a et b sont des entiers
// Postconditions: pgcd contient le PGCD de a et b
int pgcd(int a, int b) {
    int pgcd;

    // TODO: calculer le PGCD en décomposant en facteurs premiers

    return pgcd;
}

// Préconditions: a et b sont des entiers
// Postconditions: ppcm contient le PPCM entre a et b
int ppcm(int a, int b) {
    int ppcm;

    // TODO: calculer le PPCM entre a et b

    return ppcm;
}

int main() {
    int nb1, nb2;
    // TODO: récupérer les deux nombres encodés par l'utilisateur, calculer le PGCD et PPCM de ces deux nombres et les afficher

    return 0;
}