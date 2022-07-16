#include <stdio.h>
#include "kmeans.h"

using namespace std;

/* Variables for Centroids */
FIXED_WIDTH centroids_x[K];
FIXED_WIDTH centroids_y[K];

int main(){

    /* Call the KMeans Function */
    kmeans();

    /* Print the Coordinates of Centroids*/
    int i;
    for(i = 0; i < K; i++){
        printf("Cluster %d: x = %f, y = %f\n", (i + 1), float(centroids_x[i]), float(centroids_y[i]));
    }

    return 0;
}
