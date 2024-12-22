/*
Auteur: Cédric Libert
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_CLIENTS 100

struct Client {
    char* name;
    char* lastname;
    char* city;
};

typedef struct Client Client;

struct Date {
    int jour;
    int mois;
    int annee;
};

typedef struct Date Date;

int main(){
    int current_jour = 22;
    int current_mois = 12;
    int current_annee = 2024;
    printf("Encoder un client (o/n) ? ");
    Client clients[MAX_CLIENTS];
    Date date[MAX_CLIENTS];
    int i = 0;
    char encoder;
    scanf(" %c",&encoder);
    while(encoder=='o' &&  i<MAX_CLIENTS){
        printf("Nom: ");
        scanf(" %ms", &clients[i].name);
        printf("Prénom: ");
        scanf(" %ms", &clients[i].lastname);
        printf("Ville: ");
        scanf(" %ms", &clients[i].city);
        printf("Date de naissance (jj/mm/aaaa): ");
        scanf(" %d/%d/%d", &date[i].jour, &date[i].mois, &date[i].annee);
        printf("Encoder un client (o/n) ? ");
        scanf(" %c",&encoder);
        i++;
    }

    for(int c=0;c<i;c++){
        int age = current_annee - date[c].annee;
        if (current_mois < date[c].mois || (current_mois == date[c].mois && current_jour < date[c].jour)){
            age--;
        }
        printf("[%s %s (%s) (%d ans)]\n", clients[c].name,clients[c].lastname, clients[c].city, age);
    }

    return EXIT_SUCCESS;
}