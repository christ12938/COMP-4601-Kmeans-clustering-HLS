#include <stdio.h>
#include "kmeans.h"

int main(){

    /* Intialize the Centroids, Here it should be Random */
    /* I think this should be put inside kmeans.c */
    float centroids_x[K] = {0, 1};
    float centroids_y[K] = {0, 1};

    /* Call the KMeans Function */
    kmeans(centroids_x, centroids_y);

    /* Print the Coordinates of Centroids*/
    int i;
    for(i = 0; i < K; i++){
        printf("Cluster %d: x = %f, y = %f\n", (i + 1), centroids_x[i], centroids_y[i]);
    }

    return 0;
}