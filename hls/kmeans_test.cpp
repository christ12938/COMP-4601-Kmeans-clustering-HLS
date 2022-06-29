#include <iostream>

#include "kmeans.h"

using namespace std;

int main(void) {
	unsigned err_cnt = 0;

	unsigned int out = 0;

	Point clusters[K] = { Point{1.0, 1.0}, Point{2.0, 2.0}, Point{3.0, 3.0}, Point{4.0, 4.0}, Point{5.0, 5.0} };
	kmeans(EVAL, clusters, Point{1.0, 1.5}, out);

	if (out == 0) {
		cout << "Success!" << endl;
	} else {
		cout << out << endl;
		err_cnt++;
	}

	cout << "The value of \"out\" is " << out << endl;

	return 0;
}
