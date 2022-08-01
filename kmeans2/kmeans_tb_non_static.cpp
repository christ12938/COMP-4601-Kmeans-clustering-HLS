#include <errno.h>
#include <stdio.h>
#include "kmeans_non_static.h"

using namespace std;

#define IN_FILE "new_dataset/dataset1_100_2.txt"
#define OUT_FILE "new_dataset/dataset1_100_2-eval.txt"

/* Variables for Centroids */
FIXED_WIDTH centroids_x[K];
FIXED_WIDTH centroids_y[K];

int main(){
	int errors = 0;

	/* Data Points */
	FIXED_WIDTH x_data[DATA_LENGTH] = {0};
	FIXED_WIDTH y_data[DATA_LENGTH] = {0};
    FILE *in_file = fopen(IN_FILE, "r");

    double tmp;
    while (fscanf(in_file, "%lf, ", &tmp) != EOF) {
        for (int i = 0; i < DATA_LENGTH; i++) {
            x_data[i] = FIXED_WIDTH(tmp);
            fscanf(in_file, "%lf, ", &tmp);
        }

        for (int i = 0; i < DATA_LENGTH; i++) {
            y_data[i] = FIXED_WIDTH(tmp);
            fscanf(in_file, "%lf, ", &tmp);
        }

        break;
    }

    fclose(in_file);
//    for (int i = 0; i < DATA_LENGTH; i++) {
//    	printf("%d,%lf,%lf\n", i, double(x_data[i]), double(y_data[i]));
//    }

    /* Call the KMeans Function */
    TRIVIAL_TYPE evals[DATA_LENGTH] = {0};
    kmeans(TRAIN, x_data, y_data, evals);

    /* Print the Coordinates of Centroids*/
    int i;
    for(i = 0; i < K; i++){
        printf("Cluster %d: x = %f, y = %f\n", (i + 1), float(centroids_x[i]), float(centroids_y[i]));
    }

    /* get clusters of points */
    kmeans(EVAL, x_data, y_data, evals);

    FILE *out_file = fopen(OUT_FILE, "w+");
    for (int i = 0; i < DATA_LENGTH; i++) {
    	fprintf(out_file, "%d, ", evals[i]);
    }

    fclose(out_file);

    printf("\n");
    for (int i = 0; i < DATA_LENGTH; i++) {
    	printf("%d,%lf,%lf\n", i, double(x_data[i]), double(y_data[i]));
    }

    return errors;
}
