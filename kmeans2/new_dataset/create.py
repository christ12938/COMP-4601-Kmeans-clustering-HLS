from sklearn.datasets import make_blobs
import matplotlib.pyplot as plt


def make_data(size, no_of_plots, plot_no):
    centers = [(-2, -2), (2, 2)]
    cluster_std = [1, 1]

    # Ref: https://stackoverflow.com/questions/47115025/using-python-to-generate-clusters-of-data
    # X are points, y determines to which cluster a point belongs to
    X, y = make_blobs(n_samples=size, cluster_std=cluster_std, centers=centers, n_features=2, random_state=1)

    with open("dataset1_" + str(size) + "_2.txt", "w+") as file:
        for coords in X:
            file.write(str(coords[0]) + ", ")

        file.write("\n")
        for coords in X:
            file.write(str(coords[1]) + ", ")

        # file.write("\n")
        # for cluster in y:
        #     file.write(str(cluster) + ", ")

    plt.subplot(1, no_of_plots, plot_no)
    plt.scatter(X[y == 0, 0], X[y == 0, 1], color="red", s=10, label="cluster1")
    plt.scatter(X[y == 1, 0], X[y == 1, 1], color="blue", s=10, label="cluster2")


def main():
    decades = 6
    for i in range(1, decades+1):
        make_data(pow(10, i), decades, i)

    plt.show()


if __name__ == "__main__":
    main();
