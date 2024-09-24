#include <stdio.h>

double calcul_cout_total(double longueur_peinture, double largeur_peinture, double cout_bois_cm, double cout_toile_m2) {
    double cout_total;
    // Préconditions: longueur_peinture, largeur_peinture, cout_bois_cm et cout_toile_m2 doivent être des réels positifs

    // TODO: calculer le cout total

    // Postconditions: la variable cout_total contient la valeur du cout total des matériaux
    return cout_total;
}

// Ne pas modifier la ligne suivante
#ifndef TEST_IHDCB131

int main(void) {
    double longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2, cout_total;

    // Récupération des données entrées par l'utilisateur
    printf("Donnez la longueur et la largeur de la peinture: ");
    // TODO: récupérer la longueur et la largeur

    printf("Donnez le cout par centimètre du bois pour le châssis: ");
    // TODO: récupérer le cout par cm du bois

    printf("Donnez le cout par mètre carré de la toile: ");
    // TODO: récupérer le cout par mètre carré de la toile

    // ----------------------------------
    // NE PAS MODIFIER LE CODE CI-DESSOUS
    // ----------------------------------

    // Appel de la fonction "calcul_cout_total" définie ci-dessus qui calcule le cout total des matériaux et le stocke dans la variable "cout_total"
    cout_total = calcul_cout_total(longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2);
    printf("Le prix total des matériaux sera %.2lf euro.", cout_total);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif