#ifndef KMEANS_H
#define KMEANS_H

#define AP

#ifdef AP
#include "ap_fixed.h"
typedef ap_fixed<17, 10, AP_TRN, AP_SAT_SYM> FIXED_WIDTH;
#else
typedef double FIXED_WIDTH;
#endif

#define DATA_LENGTH 100
#define K 2
#define N_INTERATION 1

/* Definition of fixed width type */
/* Normally the interger bits should be log2(max(data) * DATA_LENGTH * 2) */
/* But here i took half of the range */

/* Definition of trivial integers, assuming they are all unsigned */
typedef unsigned short TRIVIAL_TYPE;

/* Intialize the Centroids, Here it should be Random */
/* I think this should be put inside kmeans.c */
extern FIXED_WIDTH centroids_x[K];
extern FIXED_WIDTH centroids_y[K];

enum MODE {
	TRAIN,
	EVAL
};

/* Function of KMenas Algorithm */
extern void find_closest_centroid(FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH], TRIVIAL_TYPE output[DATA_LENGTH]);
extern void train(FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH]);
extern void kmeans(MODE mode, FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH], TRIVIAL_TYPE evals[DATA_LENGTH]);


#endif
