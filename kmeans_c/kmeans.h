#ifndef KMEANS_H
#define KMEANS_H

#define DATA_LENGTH 50
#define K 2
#define N_INTERATION 100

/* Data Points from sample_x_y.csv */
static float x_data[DATA_LENGTH] = {-1.5084522737735262, -1.095310323241979, -1.150505584352759, -0.0322389813801928, -0.6671414929613779, -1.4170391192273804, -0.5230889841708082, -0.580245728479432, -0.3364215275992159, -1.9493785548807512, -0.7278208782008815, -0.3022340406591919, -0.7371849270397239, -1.4821072360475935, -1.8266947514656484, -0.1789407822427202, -1.9206921130157848, -0.3914876864895686, -0.6144512969569209, -1.7476505116975518, -0.2798182366887731, -0.2641931957093693, -1.0311039619507298, -1.315639576372261, -1.6852115623504285, 1.365368224953966, 2.142793041799391, 2.54695776068783, 2.376772106729288, 1.7981298292825807, 1.3745483994137655, 1.7422698032531716, 1.25692062402795, 2.827938051099077, 2.896824887299513, 1.8892335810807304, 2.978032538694316, 1.8533711280211769, 2.806192817632697, 1.4134403729304732, 2.485787203496441, 1.930106803801388, 1.4275198597777086, 1.3411275227910562, 1.401029030555064, 2.9221901983078906, 1.0742234450539287, 1.729785707457218, 2.6653983736817723, 2.459491501585913};
static float y_data[DATA_LENGTH] = {-1.8476304479482155, -1.7033210321178698, -0.3116874828979086, -0.0692708411769553, -0.4883560187321381, -1.042068973249541, -1.347678270033896, -0.0159435843933972, -0.4966284923529751, -1.9060519649071133, -1.182083145951814, -1.9095944798357496, -1.2231140387040584, -0.8430322147628326, -0.4378312919427145, -0.7819214836068338, -1.24812089018845, -0.3141342889081202, -1.8677781397245663, -1.4347124998497078, -1.3098229854129988, -0.9018298497424118, -1.2772029022427571, -1.1447755794013643, -1.5340414984298432, 2.9946847191733035, 1.3741440691051214, 2.9691445112794845, 2.0165175228689094, 2.138925907860298, 1.5125954755495803, 1.2474228418765438, 2.29755183636731, 2.870337471695355, 1.1566224708681752, 2.13026091482972, 1.4080546735340445, 1.081212329617378, 2.241551461340733, 2.7190564478348014, 1.4476722158489428, 1.1608306843611067, 1.40338063020798, 1.3458375613033309, 1.4688775755868546, 2.3158842153684627, 2.323834094814788, 2.467041440511156, 1.2922052051746733, 2.3929873190498654};

/* Intialize the Centroids, Here it should be Random */
/* I think this should be put inside kmeans.c */
extern float centroids_x[K];
extern float centroids_y[K];

/* Function of KMenas Algorithm */
extern void kmeans(void);

#endif
