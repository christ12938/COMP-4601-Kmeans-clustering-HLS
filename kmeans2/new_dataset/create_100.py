from sklearn.datasets import make_blobs
import matplotlib.pyplot as plt
from math import floor
import random

random.seed(1)

def make_data_multiple_k(size=250, rows_of_plots=5, cols_of_plots=5, sep=5):
    centers = list()
    cluster_std = list()
    for i in range(- floor(rows_of_plots/2) * sep, floor(rows_of_plots/2) * sep + 1, sep):
        for j in range(- floor (cols_of_plots/2) * sep, floor(cols_of_plots/2) * sep + 1, sep):
            centers.append((i, j))
            cluster_std.append(1)

    # Ref: https://stackoverflow.com/questions/47115025/using-python-to-generate-clusters-of-data
    # X are points, y determines to which cluster a point belongs to
    X, y = make_blobs(n_samples=size, cluster_std=cluster_std, centers=centers, n_features=2, random_state=1)

    with open("dataset1_" + str(size) + "_" + str(rows_of_plots * cols_of_plots) + ".txt", "w+") as file:
        for coords in X:
            file.write(str(coords[0]) + ", ")

        file.write("\n")
        for coords in X:
            file.write(str(coords[1]) + ", ")

        # file.write("\n")
        # for cluster in y:
        #     file.write(str(cluster) + ", ")

    plt.subplot(1, 1, 1)
    plt.scatter(X[y == 0, 0], X[y == 0, 1], color="red", s=10, label="cluster1")
    plt.scatter(X[y == 1, 0], X[y == 1, 1], color="blue", s=10, label="cluster2")
    for i in range (0, rows_of_plots * cols_of_plots):
        if i == 0:
            color="#000000"
        elif i == 1:
            color="#0a0a0a"
        else:
            color = "#" + "".join([random.choice('0123456789ABCDEF') for j in range(6)])

        plt.scatter(X[y==i, 0], X[y==i, 1], color=color)


def main():
    n=3
    size = 100
    make_data_multiple_k(size, n, n, 6)
    plt.show()


if __name__ == "__main__":
    main()
