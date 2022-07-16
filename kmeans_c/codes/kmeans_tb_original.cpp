#include <stdio.h>
#include "kmeans.h"

using namespace std;

/* Variables for Centroids */
float centroids_x[K];
float centroids_y[K];

int main(){

    /* Call the KMeans Function */
    kmeans();

    /* Print the Coordinates of Centroids*/
    int i;
    for(i = 0; i < K; i++){
        printf("Cluster %d: x = %f, y = %f\n", (i + 1), centroids_x[i], centroids_y[i]);
    }

    return 0;
}
