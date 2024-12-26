#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Réalisez l'exercice décrit dans l'énoncé ci-joint.
// Soyez particulièrement attentifs à:
// -la propreté du code: indentation régulière, noms de variables et de fonctions judicieusement choisis
// -le découpage en fonctions doit être logique.  Chaque fonction fait une chose, correctement.  Idéalement, vos fonctions sont spécifiées (pré/post conditions)
// -la définition de la structure de donnée est soignée, les champs ont des noms judicieux
// -le programme est simple à comprendre.  Réfléchissez avant de coder, ça donnera un code plus simple.  Procédez en raffinements successifs.
// -le programme fait exactement ce qui est demandé et uniquement ce qui est demandé (lisez bien l'énoncé)
// -gérez correctement les cas limite d'utilisation du programme

// navet (0-3), mauvais nanar (4-6), œuvre nanarde (7-8), nanar culte (9-10).
// Chaque nanar a un titre, une durée (en minutes), une note et l’identifiant du client qui le loue (qui vaut 0 s’il n’est pas loué).
// Écrivez un programme qui permet d’encoder tous les nanars présents dans la nanardothèque. Pour ce
// faire, le gérant doit d’abord indiquer le nombre total de nanars qu’il va encoder, puis, pour chacun
// des nanars, il indiquera son titre, sa durée (en minutes) et sa note (de 0 à 10). Notez que, lors de
// l’encodage, l’identifiant de client associé au nanar vaut automatiquement zéro. Après chaque encodage,
// le programme affiche la catégorie dans laquelle se trouve le nanar (navet, mauvais nanar, œuvre nanarde
// ou nanar culte).
// Exemple : Combien de Nanar voulez-vous encoder ?
// 3
// Lorna la Lionne du désert
// 86
// 6
// C’est un mauvais nanar !
// Crocodile Fury
// 85
// 9
// C’est un nanar culte !
// Mega Piranha
// 92
// 8
// C’est une oeuvre nanarde !

// Après l’encodage, le gérant doit pouvoir gérer l’emprunt de nanar en indiquant l’identifiant du client
// qui souhaite emprunter un nanar et le titre du nanar. Si le nanar n’est pas déjà loué, le programme doit
// l’indiquer comme loué et afficher ok. Sinon, le programme doit indiquer l’identifiant du client qui l’a
// loué, et proposer de louer, à la place, un des nanars libres dont la durée est la plus proche de celui que
// le client souhaitait louer. Il suffit alors au gérant d’indiquer si oui (o) ou non (n) le client est d’accord
// de louer ce nanar. Le programme se termine lorsque l’identifiant entré pour un client est négatif
// Exemple :
// Identifiant du client:
// 11
// Titre du nanar à emprunter:
// Mega Piranha
// ok !
// Exercice récapitulatif
// Dest : Étudiants
// Auteur : CL
// Identifiant du client:
// 14
// Titre du nanar à emprunter:
// Mega Piranha
// Ce nanar est déjà loué par le client 11
// Voulez-vous plutôt emprunter Lorna la Lionne du Désert ?
// o
// ok !
// Identifiant du client:-1
// Au revoir !
// Créez au moins une fonction auxiliaire pour résoudre ce problème et une structure pour représenter
// un nanar. On considère qu’il n’y aura pas d’erreur lors de l’encodage des données.
#define MAX_MOVIES 100
// Création de la structure de la nanardothèques
struct nanardothèques {
    char nom_du_film[MAX_MOVIES];
    int durée;
    int note; 
    bool emprunt;
    int id_client;   
};

// Définition de structure
typedef struct nanardothèques nanardothèques;

// le programme affiche la catégorie dans laquelle se trouve le nanar (navet, mauvais nanar, œuvre nanarde ou nanar culte).
// navet (0-3), mauvais nanar (4-6), œuvre nanarde (7-8), nanar culte (9-10).
// PRE Reçoit la note du film (nombre entier)
// POST Donne en printf() la catégorie du film
int score_movie (int note){
    if (note >= 0 && note < 4){
        printf("C’est un navet\n");
    }
    else if (note >= 4 && note < 7){
        printf("C'est un mauvais nanar\n");
    }
    else if (note >= 7 && note < 9){
        printf("C'est une oeuvre nanarde\n");
    }
    else if (note >= 9 && note <= 10){
        printf("C'est un nanar culte\n");
    }
}

// Fonction d'encodage des informations
// PRE N/A
// POST Intègre les informations données dans la structure nanardothèques et  return nb_movies
int input_user(struct nanardothèques nanardothèques[]) {
    int nb_movies = 0;
    printf("Combien de Nanar voulez-vous encoder ?\n");
    scanf("%d", &nb_movies);    
    for (int i = 0; i < nb_movies; i++) {
        printf("Titre du film : ");
        scanf(" %[^\n]", nanardothèques[i].nom_du_film);        
        printf("Durée (en minutes) : ");
        scanf(" %d", &nanardothèques[i].durée);        
        printf("Note (entre 0 et 10) : ");
        scanf(" %d", &nanardothèques[i].note);
        nanardothèques[i].emprunt = 0; 

        // Vérification d'implémentation des données dans la structure nanardothèque à l'input
        //printf("\nVous avez saisi :\n");
        //printf("Film : %s\n", nanardothèques[i].nom_du_film);
        //printf("Durée : %d minutes\n", nanardothèques[i].durée);
        //printf("Note : %d\n", nanardothèques[i].note);
        
        score_movie(nanardothèques[i].note);
        printf("\n");
    }
    return nb_movies;
}
// Après l’encodage, le gérant doit pouvoir gérer l’emprunt de nanar en indiquant l’identifiant du client
// qui souhaite emprunter un nanar et le titre du nanar. Si le nanar n’est pas déjà loué, le programme doit
// l’indiquer comme loué et afficher ok. Sinon, le programme doit indiquer l’identifiant du client qui l’a
// loué, et proposer de louer, à la place, un des nanars libres dont la durée est la plus proche de celui que
// le client souhaitait louer. Il suffit alors au gérant d’indiquer si oui (o) ou non (n) le client est d’accord
// de louer ce nanar. Le programme se termine lorsque l’identifiant entré pour un client est négatif

// PRE reçoit la structure nanardothèques
// POST Affiche si le titre est déjà emprunter ou non et gère la gestion d'emprunt des films
int gestion_client(struct nanardothèques nanardothèques[],int nb_movies){
    int id = 1;
    char Titre[100];
    char réponse = 'a';
    while (id > 0){
        printf("Identifiant du client: \n");
        scanf ("%d", &id);
        printf("Titre du nanar à emprunter: \n");
        scanf(" %[^\n]", Titre);
        if (id < 0){
            printf("Aurevoir !");
        } else {
            int movie = -1;
            for (int i = 0; i < nb_movies ; i++){
                if (strcmp(Titre, nanardothèques[i].nom_du_film) == 0){
                    if (nanardothèques[i].emprunt == 0){
                        nanardothèques[i].emprunt = 1;
                        nanardothèques[i].id_client = id;
                        printf("OK!\n");
                    }
                    else if (nanardothèques[i].emprunt == 1){
                        int time_durée = nanardothèques[i].durée;
                        int result = time_durée;
                        int nb_négative = -1;
                            for (int j = 0; j < nb_movies ; j++){
                                if (nanardothèques[j].emprunt == 0){
                                    if (time_durée - nanardothèques[j].durée >= 0){
                                        if (time_durée - nanardothèques[j].durée <= result){
                                            result = time_durée - nanardothèques[j].durée;
                                            movie = j;                          
                                        }
                                    } else if (time_durée - nanardothèques[j].durée < 0 ) {
                                        if ((time_durée - nanardothèques[j].durée) * nb_négative <= result){
                                            if (nanardothèques[j].emprunt == 0){
                                                result = time_durée - nanardothèques[j].durée;
                                                movie = j;
                                            }
                                        }  
                                    } 
                                }                 
                            }
                        if (movie != -1){  
                            printf("Ce nanar est déjà par le client : %d \n", nanardothèques[i].id_client);
                            printf("Voulez vous empruntez plutot %s \n",nanardothèques[movie].nom_du_film);
                            scanf(" %c", &réponse);
                            if (réponse == 'o'){
                            nanardothèques[movie].emprunt = 1;
                            nanardothèques[movie].id_client = id;
                            printf("OK!\n");
                            } else if (réponse != 'o'){
                                printf("Ben fallait mettre 'o', maintenant le programme se coupe ! Parce que c'est pas prévu qu'on mette autre chose que 'o'\n");
                                continue;
                                }
                        }           
                    }
                }
            }
        }
    }
}

int main(){
    int nb_movies = 0;
    struct nanardothèques nanardothèques[MAX_MOVIES];
    nb_movies = input_user(nanardothèques);
    gestion_client(nanardothèques, nb_movies);
    return 0;
}