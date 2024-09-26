#include <stdio.h>

int division_entiere(int dividende, int diviseur) {
    int resultat;
    // Préconditions: dividende et diviseur sont des entiers, diviseur est différent de 0

    // TODO: calculer le résultat de la division
    resultat = dividende / diviseur;
    // Postcondition: la variable resultat contient le résultat de la division entre le dividende et le diviseur
    return resultat;
}

int reste_division_entiere(int dividende, int diviseur) {
    int reste;
    // Préconditions: dividende et diviseur sont des entiers, diviseur est différent de 0

    // TODO: calculer le reste de la division
    reste = dividende % diviseur;
    // Postconditions: la variable reste contient le reste de la division entière entre le dividende et le diviseur
    return reste;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(void) {
    int dividende, diviseur, resultat, reste;
    printf("Encodez le dividende et le diviseur: ");
    // TODO: récupérer la valeur du dividende et la valeur du diviseur
    scanf("%i\n",&dividende);
    scanf("%i\n",&diviseur);

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    // Appel à la fonction division_entiere qui calcule le résultat de la division entre un dividende et un diviseur
    resultat = division_entiere(dividende, diviseur);
    // Appel à la fonction reste_division_entiere qui calcule le reste de la division entière entre un dividende et un diviseur
    reste = reste_division_entiere(dividende, diviseur);

    printf("Le résultat de la division entre %d et %d est %d, avec un reste de %d.", dividende, diviseur, resultat, reste);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif