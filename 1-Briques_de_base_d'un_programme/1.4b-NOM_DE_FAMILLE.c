#include <stdio.h>

int age_utilisateur(int annee_naissance) {
    int age;
    // Préconditions: annee_naissance doit être un entier positif

    // TODO: calculer l'age de l'utilisateur

    // Postconditions: age contient l'age de l'utilisateur
    return age;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(void) {
    int annee_naissance, age;
    printf("Entrez votre année de naissance: ");
    // TODO: récupérer l'année de naissance de l'utilisateur

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    // Appel de la fonction age_utilisateur qui calcule l'age de l'utilisateur en fonction de son année de naissance
    age = age_utilisateur(annee_naissance);
    printf("L'utilisateur a %d ans.", age);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif