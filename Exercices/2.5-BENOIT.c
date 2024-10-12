#include <stdio.h>
int main(void) {
    float ax, ay, bx, by, cx, cy, dx, dy;
    // TODO: afficher une phrase demandant d'encoder les coordonnées des points A, B, C et D et récupérer les valeurs
    printf("Encoder les coordonnées des points de A(ax ay)\n");
    scanf("%f %f",&ax,&ay);
    printf("Encoder les coordonnées des points de B(bx by)\n");
    scanf("%f %f",&bx,&by);
    printf("Encoder les coordonnées des points de C(bx by)\n");
    scanf("%f %f",&cx,&cy);
    printf("Encoder les coordonnées des points de D(bx by)\n");
    scanf("%f %f",&dx,&dy);
    // TODO: comparer les points et afficher s'ils sont confondus ou si les droites sont parallèles ou si aucun des deux
    //Comparer les points confondis si des points ont la même valeur (==)
    //float capd1 = (by-ay)*(dx-cx);    
    //float capd2 = (dy-cy)*(dx-ax);
    if ((ax == bx) && (ay == by)){
        printf ("Les points A et B sont confondus.\n");
    }
    else if ((cx == dx) && (cy == dy)){
        printf ("Les points C et D sont confondus.\n");
    }
    else {
            float PAB = (by-ay)/(bx-ax); 
            float PCD = (dy-cy)/(dx-cx);
            if (PAB == PCD){
        printf ("Les droites AB et CD sont parallèles.\n");
            }
    //Les droites sont parallèles si (AB = (by-ay)/(bx-ax) == CD = (dy-cy)/(dx-cx))
            else {
            printf ("Les droites AB et CD ne sont pas parallèles.\n");
    }
    }
    return 0;
}