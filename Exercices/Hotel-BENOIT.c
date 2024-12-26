#include <stdio.h>

#define MAX_RESERVATION 100
struct reservations {
    char Nom[50];
    char Prénom[50];
    int Jour;
    int Mois;
    int Annee;
    int nb_nuits;
};
typedef struct reservations reservations;
// Fonction pour mettre la première lettre en majuscule et les autres en minuscules
//PRE: La fonction reçoit un pointeur str, une chaîne de caractères représentant le nom ou le prénom.
//POST: La fonction transforme la première lettre de chaque mot en majuscule et le reste des lettres en minuscule.
void format_nom_prenom(char* str) {
    int i = 0;
    int first_letter = 1;

    while (str[i]) {
        if (first_letter || str[i-1] == '-') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
            }
            first_letter = 0;
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] - 'A' + 'a';
            }
        }
        i++;
    }
}

// Fonction pour vérifier si un caractère est une lettre ou un trait d'union
//PRE: Le caractère 'c' à tester.
//POST: Retourne 1 si c est une lettre (majuscule ou minuscule) ou un trait d'union ('-'), sinon retourne 0.
int est_une_lettre_ou_trait_union(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    if (c == '-') {
        return 1;
    }
    return 0;
}
// Fonction pour vérifier si une chaîne contient des caractères invalides (accents ou autres)
//PRE: La fonction reçoit une chaîne de caractères représentant un nom ou un prénom.
//POST: Retourne 1 si la chaîne contient des caractères invalides (accents ou autres), sinon retourne 0.
int contient_caracteres_invalides(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (!est_une_lettre_ou_trait_union(str[i])) {
            return 1;
        }
        i++;
    }
    return 0;
}

// Fonction pour calculer le prix de la réservation
//PRE: La fonction reçoit une réservation contenant la date d'arrivée et le nombre de nuits.
//POST: La fonction renvoie le prix total de la réservation en fonction des critères définis (tarif de base ou période estivale).
int calculer_prix(struct reservations res) {
    int prix_par_nuit = 40;
    if ((res.Mois > 6 || (res.Mois == 6 && res.Jour >= 15)) && (res.Mois < 9 || (res.Mois == 9 && res.Jour <= 30))) {
        prix_par_nuit = 60;
    }
    return prix_par_nuit * res.nb_nuits;
}

// Fonction pour ajouter une réservation
//PRE: La fonction reçoit un tableau de réservations et un index à mettre à jour.
//POST: La fonction enregistre une nouvelle réservation dans le tableau et met à jour l'index.
int réservation(reservations* tab_reservations, int* index) {
    printf("Entrez le nom: ");
    scanf("%s", tab_reservations[*index].Nom);
    if (contient_caracteres_invalides(tab_reservations[*index].Nom)) {
        printf("Nom invalide, la réservation n'est pas prise en compte.\n");
        return 0;
    }
    format_nom_prenom(tab_reservations[*index].Nom);
    printf("Entrez le prénom: ");
    scanf("%s", tab_reservations[*index].Prénom);
    if (contient_caracteres_invalides(tab_reservations[*index].Prénom)) {
        printf("Prénom invalide, la réservation n'est pas prise en compte.\n");
        return 0;
    }
    format_nom_prenom(tab_reservations[*index].Prénom);
    printf("Entrez la date d'arrivée (jour mois année): ");
    scanf("%d %d %d", &tab_reservations[*index].Jour, &tab_reservations[*index].Mois, &tab_reservations[*index].Annee);
    printf("Entrez le nombre de nuits: ");
    scanf("%d", &tab_reservations[*index].nb_nuits);
    int prix = calculer_prix(tab_reservations[*index]);
    printf("Réservation effectuée: %s %s, %d/%d/%d, %d nuits, %d euros\n", tab_reservations[*index].Nom, tab_reservations[*index].Prénom,tab_reservations[*index].Jour, tab_reservations[*index].Mois,tab_reservations[*index].Annee, tab_reservations[*index].nb_nuits, prix);
    (*index)++;
    return 0;
}

// Fonction pour afficher les réservations d'un client
//PRE: La fonction reçoit un tableau de réservations et un index qui contient le nombre de réservations.
//POST: La fonction affiche les réservations correspondant au nom et prénom du client spécifié.
void afficher_les_reservations(reservations* tab_reservations, int index) {
    char nom[50], prenom[50];
    printf("Entrez le nom du client: ");
    scanf("%s", nom);
    format_nom_prenom(nom);
    printf("Entrez le prénom du client: ");
    scanf("%s", prenom);
    format_nom_prenom(prenom);
    int found = 0;
    for (int i = 0; i < index; i++) {
        int match = 1;
        int j = 0;
        while (nom[j] != '\0' && tab_reservations[i].Nom[j] != '\0') {
            if (nom[j] != tab_reservations[i].Nom[j]) {
                match = 0;
            }
            j++;
        }
        j = 0;
        while (prenom[j] != '\0' && tab_reservations[i].Prénom[j] != '\0') {
            if (prenom[j] != tab_reservations[i].Prénom[j]) {
                match = 0;
            }
            j++;
        }
        if (match) {
            printf("%s %s, ", tab_reservations[i].Prénom,tab_reservations[i].Nom);
            printf("%d/%d/%d, ", tab_reservations[i].Jour, tab_reservations[i].Mois, tab_reservations[i].Annee);
            printf("%d nuits\n", tab_reservations[i].nb_nuits);
            found = 1;
        }
    }
    if (!found) {
        printf("Aucune réservation trouvée pour ce client.\n");
    }
}

int main() {
    int response = 0;
    reservations tab_reservations[MAX_RESERVATION];
    int index = 0;
    int quitter = 0;
    while (!quitter) {
        printf("Voulez-vous: 1) Réserver, 2) Afficher des réservations, 3) Quitter : ");
        scanf("%d", &response);
        if (response == 1) {
            if (index < MAX_RESERVATION) {
                réservation(tab_reservations, &index);
            } else {
                printf("Le système de réservation est plein.\n");
            }
        }
        else if (response == 2) {
            afficher_les_reservations(tab_reservations, index);
        }
        else if (response == 3) {
            printf("Au revoir!\n");
            quitter = 1;
        } else {
            printf("Choix invalide, essayez encore.\n");
        }
    }
    return 0;
}