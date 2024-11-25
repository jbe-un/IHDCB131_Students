#include <stdio.h>
#include <stdbool.h>

// PRE: nb est un nombre entier
// POST: si nb est premier, retourne true. Sinon, retourne false
bool est_premier(int nb) {
    if (nb <= 1) return false;
    
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0) return false;
    }
    
    return true;
}

// PRE: a et b sont des entiers
// POST: pgcd contient le PGCD de a et b
int pgcd(int a, int b) {
    int pgcd = 1;
    
    for (int i = 2; i <= a && i <= b; i++) {
        while (est_premier(i) && a % i == 0 && b % i == 0) {
            pgcd *= i;
            a /= i;
            b /= i;
        }
    }
    
    return pgcd;
}

// PRE: a et b sont des entiers
// POST: ppcm contient le PPCM entre a et b
int ppcm(int a, int b) {
    return (a * b) / pgcd(a, b);
}

int main(void) {
    int nb1, nb2, pgcd_result, ppcm_result;

    // TODO: récupérer les deux nombres encodés par l'utilisateur
    scanf("%d %d",&nb1,&nb2);
    pgcd_result = pgcd(nb1,nb2);
    ppcm_result = ppcm(nb1,nb2);

    // TODO: calculer le PGCD et le PPCM de ces deux nombres en faisant des appels de fonctions
    printf("Le PGCD de %d et %d est %d\n", nb1, nb2, pgcd_result);
    printf("Le PPCM de %d et %d est %d\n", nb1, nb2, ppcm_result);

    return 0;
}