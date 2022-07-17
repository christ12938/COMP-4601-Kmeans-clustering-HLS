#ifndef KMEANS_H
#define KMEANS_H

#include "ap_fixed.h"

#define DATA_LENGTH 50
#define K 2
#define N_INTERATION 1

/* Definition of fixed width type */
/* Normally the interger bits should be log2(max(data) * DATA_LENGTH * 2) */
/* But here i took half of the range */
typedef ap_fixed<17, 7> FIXED_WIDTH;

/* Definition of trivial integers, assuming they are all unsigned */
typedef unsigned short TRIVIAL_TYPE;

/* Intialize the Centroids, Here it should be Random */
/* I think this should be put inside kmeans.c */
extern FIXED_WIDTH centroids_x[K];
extern FIXED_WIDTH centroids_y[K];

/* Function of KMenas Algorithm */
extern void kmeans(FIXED_WIDTH x_data[DATA_LENGTH], FIXED_WIDTH y_data[DATA_LENGTH]);

#endif
