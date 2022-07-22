#include "kmeans_non_static.h"

FIXED_WIDTH abs_custom(FIXED_WIDTH number) {
	if (number < 0){
		number = -number;
	}
	return number;
}

void kmeans(FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH]){
    /* The Cluster that the data belongs to */
	TRIVIAL_TYPE data_cluster_id[DATA_LENGTH];

    /* Varaibles for loops */
	TRIVIAL_TYPE i;
	TRIVIAL_TYPE j;
    
    /* Intialize the Centroids, Here it should be Random */
    for(i = 0; i < K; i++){
    	centroids_x[i] = i;
    	centroids_y[i] = i;
    }

    /* Start the KMeans Clustering Algorithm */
    /* The stopping condition should be until centroids dont change. Here I set it to run for a certain iteration */
    TRIVIAL_TYPE interation;
ITERATION_LOOP:
    for(interation = 0; interation < N_INTERATION; interation++){
    
        /* First, calculate the distance between points and centroids, and assign the points to the closest centroids cluster */
ASSIGN_CENTROID_LOOP:
        for(i = 0; i < DATA_LENGTH; i++){
        	FIXED_WIDTH min_distance = abs_custom((x_data[i] - centroids_x[0])) + abs_custom((y_data[i] - centroids_y[0]));
        	TRIVIAL_TYPE closest_centroid_index = 0;
FIND_CLOSEST_CENTROID_LOOP:
            for(j = 1; j < K; j++){
            	FIXED_WIDTH distance = abs_custom((x_data[i] - centroids_x[j])) + abs_custom((y_data[i] - centroids_y[j]));
                if(distance < min_distance){
                    min_distance = distance;
                    closest_centroid_index = j;
                }
            }
            data_cluster_id[i] = closest_centroid_index;
        }

        /* Then, calculate the mean for points within each cluster, and compute the new centroid */
        // TODO: try rewriting this loop so that loop over points is outside and loop over centroid is inside.
        // then unroll centroid loop
CALCULATE_NEW_CENTROID_LOOP:
        for(i = 0; i < K; i++){
        	FIXED_WIDTH mean_value_x = 0;
        	FIXED_WIDTH mean_value_y = 0;
        	TRIVIAL_TYPE count = 0;

CALCULATE_MEAN_VALUE_LOOP:
            for(j = 0; j < DATA_LENGTH; j++){
                if(data_cluster_id[j] == i){
                    mean_value_x = mean_value_x + x_data[j];
                    mean_value_y = mean_value_y + y_data[j];
                    count++;
                }
            }
            
            // could be cute with this and skip the if check and divide by count != 0 ? count : 1
            // is there any value to doing that though?
            if(count != 0){
                centroids_x[i] = mean_value_x / count;
                centroids_y[i] = mean_value_y / count;
            }
        }
    }
}
