#include <stdbool.h>
#include <stdio.h>

bool estPremier(int nb) {
    if (nb <= 1) return false;
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0) return false;
    }
    return true;
}

int nombreChiffresPairs(int nb) {
    int nombre = 0;
    while (nb > 0) {
        if ((nb % 10) % 2 == 0) {
            nombre++;
        }
        nb = nb / 10;
    }
    return nombre;
}

int main() {
    int max_pairs = 0;
    int resultat = 0;

    for (int nombre = 2000; nombre <= 3000; nombre++) {
        if (estPremier(nombre)) {
            int nb_pairs = nombreChiffresPairs(nombre);
            if (nb_pairs > max_pairs) {
                max_pairs = nb_pairs;
                resultat = nombre;
            }
        }
    }

    printf("Le nombre est %d avec %d chiffres pairs\n", resultat, max_pairs);
    return 0;
}