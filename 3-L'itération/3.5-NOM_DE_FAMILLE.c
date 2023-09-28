#include <stdio.h>

// Fonction pour calculer le pourcentage d'hommes et de femmes
void calculer_pourcentage(int nombreSemaines, double *pourcentageHommes, double *pourcentageFemmes) {
    // Préconditions:
    // - nombreSemaines est un entier positif
    // - pourcentageHommes et pourcentageFemmes sont des pointeurs respectivement vers pourcentageHommes et pourcentageFemmes (dans le main)

    int hommes = 0;
    int femmes = 0;

    for (int semaine = 0; semaine < nombreSemaines; semaine++) {
        // TODO : récupérer le genre de chaque semaine (attention au mauvais format de remplissage du genre!)
    }

    // TODO: calculer le pourcentage de présence pour chaque genre

    // Postconditions: *pourcentageHommes et *pourcentageFemmes contiennent les pourcentages de présence des hommes et des femmes en fonction du nombre de semaines fourni en entrée
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int nombreSemaines;
    double pourcentageHommes, pourcentageFemmes;

    // TODO: récupérer le nombre de semaines

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------
    // Calcul du pourcentage de présence des hommes et des femmes en fonction du nombre de semaines
    calculer_pourcentage(nombreSemaines, &pourcentageHommes, &pourcentageFemmes);

    printf("Tu as hébergé %.2lf%% d'hommes et %.2lf%% de filles sur les %d dernières semaines.\n",
           pourcentageHommes, pourcentageFemmes, nombreSemaines);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif