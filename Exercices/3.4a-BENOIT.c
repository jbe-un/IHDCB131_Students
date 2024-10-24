#include <stdio.h>

//int main(void) {
//    int taille;
//    scanf("%i", &taille);
//    int i = 0;
//    while (i <= taille) {
//        printf("*");
//    }
//    return 0;
//}
int main(void){
int nombre;
int i = 0;
int j = 0;
//Prendre l'entrée utilisateur de nombre
scanf("%d",&nombre);
//Création d'une boucle contenant prinf de * multiplié par "nombre"
    while (j != nombre){
        for (;i != nombre;i++){
            printf("*");
        }
//répétition de la bouche pour atteindre nombre * nombre
    printf ("\n");
    j++;
    i = 0;  
    }
return 0;
}
