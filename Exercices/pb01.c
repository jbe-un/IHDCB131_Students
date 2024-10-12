#include <stdio.h>

int main(void) {
    int ax, ay, bx, by, cx, cy, dx, dy;
    int PAB = ((by-ay)/(bx-ax)); 
    int PCD = ((dy-cy)/(dx-cx));
    // TODO: afficher une phrase demandant d'encoder les coordonnées des points A, B, C et D et récupérer les valeurs
    printf("Encoder les coordonnées des points de A\n");
    printf("Encoder le point ax\n");
    scanf("%i",&ax);
    printf("Encoder le point ay\n");
    scanf("%i",&ay);
    printf("Encoder les coordonnées des points de B\n");
    printf("Encoder le point bx\n");
    scanf("%i",&bx);
    printf("Encoder le point by\n");
    scanf("%i",&by);    
    printf("Encoder les coordonnées des points de C\n");
    printf("Encoder le point cx\n");
    scanf("%i",&cx);
    printf("Encoder le point cy\n");
    scanf("%i",&cy);
    printf("Encoder les coordonnées des points de D\n");
    printf("Encoder le point dx\n");
    scanf("%i",&ax);
    printf("Encoder le point dy\n");
    scanf("%i",&ay);
    // TODO: comparer les points et afficher s'ils sont confondus ou si les droites sont parallèles ou si aucun des deux
    //Comparer les points confondis si des points ont la même valeur (==)
    if ((ax == bx) && (ay == by)){
        printf ("Les droites A et B sont confondus.\n");
    }
    if ((cx == dx) && (cy == dy)){
        printf ("Les droites C et D sont confondus.\n");
    }
    //Les droites sont parallèles si (AB = (by-ay)/(bx-ax) == CD = (dy-cy)/(dx-cx))
    if ((ax != bx || ay != dy ) && (cx != dx || cy != dy)){
        if (PAB == PCD){        
        printf ("Les droites AB et DC sont parrallèles.\n");
        } 
        else {
        printf ("Les droites ne sont ni confondus ni parallèles.\n");
        }
    }
    return 0;
}
