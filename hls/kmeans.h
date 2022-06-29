#ifndef KMEANS_H_
#define KMEANS_H_

#define K 5

typedef unsigned cluster_id_t;

typedef float x_coord_t;
typedef float y_coord_t;
typedef float dist_t;

enum Mode {
	TRAIN = 0,
	EVAL = 1
};

struct Point {
	x_coord_t x;
	y_coord_t y;
};

//static Point clusters[K];

void distance(
		x_coord_t const &x1,
		y_coord_t const &y1,
		x_coord_t const &x2,
		y_coord_t const &y2,
		dist_t &out);

void find_nearest_cluster(
		Point (&clusters)[K],
		x_coord_t const &dataX,
		y_coord_t const &dataY,
		cluster_id_t &out);

void kmeans(Mode const &mode, Point (&clusters)[K], Point const &data, unsigned int &out);

#endif