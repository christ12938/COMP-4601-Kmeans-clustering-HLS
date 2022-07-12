import pandas as pd
import matplotlib.pyplot as plt

#Put the result here
centroid_1_x, centroid_1_y = -0.950602, -1.065545
centroid_2_x, centroid_2_y = 2.028218, 1.911065

df = pd.read_csv('sample_x_y.csv')
x_value = df.iloc[:, 1].tolist()
y_value = df.iloc[:, 2].tolist()
plt.scatter(x_value, y_value)

plt.scatter(centroid_1_x, centroid_1_y, color="orange")
plt.scatter(centroid_2_x, centroid_2_y, color="red")
plt.show()