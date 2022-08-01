#include "kmeans_non_static.h"

FIXED_WIDTH abs_custom(FIXED_WIDTH number) {
	if (number < 0){
		number = -number;
	}
	return number;
}

void kmeans(MODE mode, FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH], TRIVIAL_TYPE evals[DATA_LENGTH]) {
	if (mode == TRAIN) {
		train(x_data, y_data);
	} else if (mode == EVAL) {
		find_closest_centroid(x_data, y_data, evals);
	}
}

void find_closest_centroid(FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH], TRIVIAL_TYPE output[DATA_LENGTH]) {
	TRIVIAL_TYPE i, j;

KMEANS_DISTANCE_OUTER:
	for (i = 0; i < DATA_LENGTH; i++) {
		// initialize to distance from first centroid is sensible
		FIXED_WIDTH min_distance = abs_custom((x_data[i] - centroids_x[0])) + abs_custom((y_data[i] - centroids_y[0]));
		TRIVIAL_TYPE closest_centroid_index = 0;

KMEANS_DISTANCE_INNER:
		for(j = 1; j < K; j++){
			FIXED_WIDTH distance = abs_custom((x_data[i] - centroids_x[j])) + abs_custom((y_data[i] - centroids_y[j]));
			if(distance < min_distance){
				min_distance = distance;
				closest_centroid_index = j;
			}
		}

		output[i] = closest_centroid_index;
	}
}

void train(FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH]){
    /* The Cluster that the data belongs to */
	TRIVIAL_TYPE data_cluster_id[DATA_LENGTH];

    /* Variables for loops */
	TRIVIAL_TYPE i;
	TRIVIAL_TYPE j;
    
    /* Initialize the Centroids, Here it should be Random */
INTIALIZE_CENTROIDS:
    for(i = 0; i < K; i++){
    	centroids_x[i] = i;
    	centroids_y[i] = i;
    }

    /* Start the KMeans Clustering Algorithm */
    TRIVIAL_TYPE iteration;

    FIXED_WIDTH sum_x[K] = {0};
	FIXED_WIDTH sum_y[K] = {0};
	TRIVIAL_TYPE count[K] = {0};

	TRIVIAL_TYPE id = 0;

    /* The stopping condition should be until centroids don't change. Here I set it to run for a certain iteration */
ITERATION_LOOP:
    for(iteration = 0; iteration < N_INTERATION; iteration++){
    
        /* First, calculate the distance between points and centroids, and assign the points to the closest centroids cluster */
KMEANS_DISTANCE_OUTER:
		for (i = 0; i < DATA_LENGTH; i++) {
			// initialize to distance from first centroid is sensible
			FIXED_WIDTH min_distance = abs_custom((x_data[i] - centroids_x[0])) + abs_custom((y_data[i] - centroids_y[0]));
			TRIVIAL_TYPE closest_centroid_index = 0;

KMEANS_DISTANCE_INNER:
			for(j = 1; j < K; j++){
				FIXED_WIDTH distance = abs_custom((x_data[i] - centroids_x[j])) + abs_custom((y_data[i] - centroids_y[j]));
				if(distance < min_distance){
					min_distance = distance;
					closest_centroid_index = j;
				}
			}

			// variables to help calculate new centroid position
			sum_x[closest_centroid_index] = sum_x[closest_centroid_index] + x_data[i];
			sum_y[closest_centroid_index] = sum_y[closest_centroid_index] + y_data[i];
			count[closest_centroid_index]++;

			data_cluster_id[i] = closest_centroid_index;
		}

ASSIGN_NEW_CENTROID_VALUE:
        for (i = 0; i < K; i++) {
            if(count[i] != 0){
                centroids_x[i] = sum_x[i] / count[i];
                centroids_y[i] = sum_y[i] / count[i];
            }

            // reset sum_x, y, count for each centroid now since we're looping anyway
            // this is in preparation for the next loop
            sum_x[i] = 0;
            sum_y[i] = 0;
            count[i] = 0;
        }
    }
}
