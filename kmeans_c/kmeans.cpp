#include <math.h>
#include "kmeans.h"

void kmeans(void){
    /* The Cluster that the data belongs to */
    int data_cluster_id[DATA_LENGTH];

    /* Varaibles for loops */
    int i;
    int j;
    
    /* Intialize the Centroids, Here it should be Random */
    for(i = 0; i < K; i++){
    	centroids_x[i] = i;
    	centroids_y[i] = i;
    }

    /* Start the KMeans Clustering Algorithm */
    /* The stopping condition should be until centroids dont change. Here I set it to run for a certain iteration */
    int interation;
    for(interation = 0; interation < N_INTERATION; interation++){
    
        /* First, calculate the distance between points and centroids, and assign the points to the closest centroids cluster */
        for(i = 0; i < DATA_LENGTH; i++){
            float min_distance = pow((x_data[i] - centroids_x[0]), 2) + pow((y_data[i] - centroids_y[0]), 2);
            int closest_centroid_index = 0;
            for(j = 1; j < K; j++){
                float distance = pow((x_data[i] - centroids_x[j]), 2) + pow((y_data[i] - centroids_y[j]), 2);
                if(distance < min_distance){
                    min_distance = distance;
                    closest_centroid_index = j;
                }
            }
            data_cluster_id[i] = closest_centroid_index;
        }

        /* Then, calculate the mean for points within each cluster, and compute the new centroid */
        for(i = 0; i < K; i++){
            float mean_value_x = 0;
            float mean_value_y = 0;
            int count = 0;

            for(j = 0; j < DATA_LENGTH; j++){
                if(data_cluster_id[j] == i){
                    mean_value_x = mean_value_x + x_data[j];
                    mean_value_y = mean_value_y + y_data[j];
                    count++;
                }
            }
            
            if(count != 0){
                centroids_x[i] = mean_value_x / count;
                centroids_y[i] = mean_value_y / count;
            }
        }
    }
}
