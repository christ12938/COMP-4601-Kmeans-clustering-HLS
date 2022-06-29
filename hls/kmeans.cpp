#include "kmeans.h"

void distance(
		x_coord_t const &x1,
		y_coord_t const &y1,
		x_coord_t const &x2,
		y_coord_t const &y2,
		dist_t &out) {
	out = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

void find_nearest_cluster(
		Point (&clusters)[K],
		x_coord_t const &dataX,
		y_coord_t const &dataY,
		cluster_id_t &out) {

	dist_t cluster_dists[K];
	for (unsigned i = 0; i < K; ++i) {
		distance(clusters[i].x, clusters[i].y, dataX, dataY, cluster_dists[i]);
	}

	cluster_id_t closest_cluster = 0;
	dist_t min_dist = cluster_dists[0];
	for (unsigned i = 0; i < K; ++i) {
		if (cluster_dists[i] < min_dist) {
			closest_cluster = i;
			min_dist = cluster_dists[i];
		}
	}

	out = closest_cluster;
}

void kmeans(Mode const &mode, Point (&clusters)[K], Point const &data, unsigned int &out) {
	if (mode == TRAIN) {
		out = 0x1111;
	} else if (mode == EVAL) {
		find_nearest_cluster(clusters, data.x, data.y, out);
	}
}
