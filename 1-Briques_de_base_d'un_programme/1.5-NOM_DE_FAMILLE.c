#include <stdio.h>

double calcul_quantite_bois(double longueur_peinture, double largeur_peinture) {
    double quantite_bois;
    // Préconditions: longueur_peinture et largeur_peinture doivent être des réels positifs

    // TODO: calculer la quantité de bois nécessaire

    // Postconditions: la variable quantite_bois contient la valeur de la quantité de bois
    return quantite_bois;
}

double calcul_longueur_toile(double longueur_peinture) {
    double longueur_toile;
    // Préconditions: longueur_peinture doit être un réel positif

    // TODO: calculer la longueur de la toile

    // Postconditions: la variable longueur_toile contient la valeur de la longueur de la toile
    return longueur_toile;
}

double calcul_largeur_toile(double largeur_peinture) {
    double largeur_toile;
    // Préconditions: largeur_peinture doit être un réel positif

    // TODO: calculer la largeur de la toile

    // Postconditions: la variable largeur_toile contient la valeur de la largeur de la toile
    return largeur_toile;
}

double calcul_cout_bois(double longueur_peinture, double largeur_peinture, double cout_bois_cm) {
    double cout_bois;
    // Préconditions: longueur_peinture, largeur_peinture et cout_bois_cm doivent être des réels positifs

    // TODO: calculer le cout du bois

    // Postconditions: la variable cout_bois contient la valeur du cout du bois
    return cout_bois;
}

double calcul_cout_toile(double longueur_peinture, double largeur_peinture, double cout_toile_m2) {
    double cout_toile;
    // Préconditions: longueur_peinture, largeur_peinture et cout_toile_m2 doivent être des réels positifs

    // TODO: calculer le cout de la toile

    // Postconditions: la variable cout_toile contient la valeur du cout de la toile
    return cout_toile;
}

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
    double longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2, quantite_bois, longueur_toile, largeur_toile, cout_bois, cout_toile, cout_total;

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

    // Appel des fonctions définies ci-dessus pour calculer les différentes valeurs et afficher les résultats
    quantite_bois = calcul_quantite_bois(longueur_peinture, largeur_peinture);
    longueur_toile = calcul_longueur_toile(longueur_peinture);
    largeur_toile = calcul_largeur_toile(largeur_peinture);
    cout_bois = calcul_cout_bois(longueur_peinture, largeur_peinture, cout_bois_cm);
    cout_toile = calcul_cout_toile(longueur_peinture, largeur_peinture, cout_toile_m2);
    cout_total = calcul_cout_total(longueur_peinture, largeur_peinture, cout_bois_cm, cout_toile_m2);
    printf("Pour une peinture de %.1lf cm de longueur et %.1lf cm de largeur, vous devriez acheter %.2lf cm de bois.\n", longueur_peinture, largeur_peinture, quantite_bois);
    printf("La toile devra avoir une longueur de %.1lf cm et une largeur de %.1lf cm.\n", longueur_toile, largeur_toile);
    printf("Étant donné que le prix du bois est %.2lf euro par cm courant et que la toile coute %.2lf euro par mètre carré:\n", cout_bois_cm, cout_toile_m2);
    printf("Le bois coûtera %.2lf euro.\n", cout_bois);
    printf("La toile coûtera %.2lf euro.\n", cout_toile);
    printf("Le prix total des matériaux sera %.2lf euro.\n", cout_total);

    return 0;
}

// Ne pas modifier la ligne suivante
#endif