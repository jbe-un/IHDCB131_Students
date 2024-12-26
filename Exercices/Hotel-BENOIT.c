#include <stdio.h>



// On vous a demandé de créer un programme pour gérer les réservations dans un petit hotel namurois.
// Les fonctionnalités du programme sont les suivantes:
// • l’utilisateur peut choisir s’il veut faire une réservation ou afficher les réservations d’un client
// • pour faire une nouvelle réservation, il doit entrer un nom, un prénom, une date d’arrivée (jour mois annee sur une seule ligne) et un nombre de nuits.
// • le programme prend cette réservation en compte et l’enregistre dans la base de donnée uniquement
// si elle est correcte , c’est-à-dire que le nom et le prénom ne contiennent que des lettres entre A et Z et entre a et z, ainsi qu’un trait d’union pour les prénoms composés (pas
// d’accents, ni d’autres signes diacritiques), si la date est une date valide (nombre de jours du
// mois, année bissextile le cas échéant) et que le nombre de jour est correct.
// • le programme transforme le nom et le prénom pour que la première lettre soit une majuscule
// (ainsi que celles qui suivent un-) et les autres des minuscules
// • si la réservation est correcte, le programme calcule et affiche le prix: 40 euros par nuit, mais
// toute réservation dont le premier jour se situe dans la période du 15 juin au 31 août coute 60
// euros par nuit.
// • si l’utilisateur choisit d’afficher les réservations d’un client, il lui demande son nom et son prénom
// et affiche, en retour, les dates et nombres de jours déjà réservés.


int réservation(){

}

int afficher les réservations(){

}

int menu (){
    int response = 0;
    printf("Voulez vous réserver (1), afficher des réservations (2) ou quitter (3)");
    scanf(" %d";&response);
    if (response == 1){
        réservation;
    }
    else if (response == 2){

    }
    else if (response == 3){
        return 0;
    }
}

int main(){
    menu;
}