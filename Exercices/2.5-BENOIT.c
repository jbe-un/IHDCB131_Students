#include <stdio.h>

int main(void) {
    int ax, ay, bx, by, cx, cy, dx, dy;
    // TODO: afficher une phrase demandant d'encoder les coordonnées des points A, B, C et D et récupérer les valeurs
    printf("Encoder les coordonnées des points de A(ax ay)\n");
    scanf("%d %d",&ax,&ay);
    printf("Encoder les coordonnées des points de B(bx by)\n");
    scanf("%d %d",&bx,&by);
    printf("Encoder les coordonnées des points de C(bx by)\n");
    scanf("%d %d",&cx,&cy);
    printf("Encoder les coordonnées des points de D(bx by)\n");
    scanf("%d %d",&dx,&dy);
    // TODO: comparer les points et afficher s'ils sont confondus ou si les droites sont parallèles ou si aucun des deux
    //Comparer les points confondis si des points ont la même valeur (==)
    if ((ax == bx) && (ay == by)){
        printf ("Les points A et B sont confondus.\n");
    }
    else if ((cx == dx) && (cy == dy)){
        printf ("Les points C et D sont confondus.\n");
    }
    //Les droites sont parallèles si (AB = (by-ay)/(bx-ax) == CD = (dy-cy)/(dx-cx))
    else if (((by-ay)*(dx-cx))==((dy-cy)*(dx-ax))){
        printf ("Les droites AB et DC sont parrallèles.\n");
    }
    else {
        printf ("Les droites ne sont ni confondus ni parallèles.\n");
    }
    return 0;
}
