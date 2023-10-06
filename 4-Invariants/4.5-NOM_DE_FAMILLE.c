#include <stdio.h>

void longest_played_note(double* notes, int* length, int number_notes, double* pt_max_note, int* pt_max_length) {
    // Préconditions: notes est un pointeur vers un tableau de valeurs réelles, length est un pointeur vers un tableau de valeurs entières, number_notes est un entier, pt_max_note est un pointeur vers un réel et pt_max_length est un pointeur vers un entier

    // TODO: trouver la note jouée le plus longtemps ainsi que sa durée et stocker ces valeurs dans max_note et max_length
    // Dans les pointeurs, * permet d'accéder à la valeur d'une variable pointée par un pointeur. Par exemple, pt_max_note est un pointeur vers la variable max_note définie dans le main et
    // *pt_max_note permet d'accéder à la valeur de max_note.
    // Pour stocker une valeur dans un pointeur (par exemple pour pt_max_note): *pt_max_note = VALEUR; où VALEUR est la valeur que l'on veut lui attribuer (en fonction de la valeur de la variable pointée par le pointeur, ici un réel car max_note est de type double)

    // Postconditions: la variable max_length contient la durée de la note qui a été jouée le plus longtemps, la variable max_note contient la note jouée le plus longtemps
}

int number_change(double* notes, int number_notes) {
    int nb_change;
    // Préconditions: notes est un pointeur vers un tableau contenant des valeur réelles, number_notes est un entier

    // TODO: calculer le nombre de changements de sens du mouvement mélodique

    // Postconditions: la variable nb_change contient le nombre de changements de sens du mouvement mélodique
    return nb_change;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main() {
    int number_notes;
    // TODO: récupérer le nombre de notes que l'utilisateur va encoder


    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    double notes[number_notes];
    int length[number_notes];
    printf("Entrez successivement la fréquence et la durée de chaque note :\n");
    // Récupération de chaque note et sa durée correspondante et stockage des valeurs dans les tableaux notes et length
    for (int i = 0; i < number_notes; i++) {
        scanf("%lf %d", &notes[i], &length[i]);
    }

    double max_note;
    int max_length;
    // Appel à la fonction qui va rechercher la note jouée le plus longtemps et qui va stocker cette note et sa durée, respectivement dans max_note et max_length
    longest_played_note(notes, length, number_notes, &max_note, &max_length);
    int number_of_change = number_change(notes, number_notes);

    printf("Changements de sens: %d", number_of_change);
    printf("La note la plus longue est %f et a été jouée pendant %d ms", max_note, max_length);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif