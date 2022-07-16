# 1 "kmeans.cpp"
# 1 "kmeans.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "E:/Xilinx2020.1/Vivado/2020.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "E:/Xilinx2020.1/Vivado/2020.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    void _ssdm_SetStreamDepth(...) __attribute__ ((nothrow));

    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "kmeans.cpp" 2
# 1 "./kmeans.h" 1








static float x_data[50] = {-1.5084522737735262, -1.095310323241979, -1.150505584352759, -0.0322389813801928, -0.6671414929613779, -1.4170391192273804, -0.5230889841708082, -0.580245728479432, -0.3364215275992159, -1.9493785548807512, -0.7278208782008815, -0.3022340406591919, -0.7371849270397239, -1.4821072360475935, -1.8266947514656484, -0.1789407822427202, -1.9206921130157848, -0.3914876864895686, -0.6144512969569209, -1.7476505116975518, -0.2798182366887731, -0.2641931957093693, -1.0311039619507298, -1.315639576372261, -1.6852115623504285, 1.365368224953966, 2.142793041799391, 2.54695776068783, 2.376772106729288, 1.7981298292825807, 1.3745483994137655, 1.7422698032531716, 1.25692062402795, 2.827938051099077, 2.896824887299513, 1.8892335810807304, 2.978032538694316, 1.8533711280211769, 2.806192817632697, 1.4134403729304732, 2.485787203496441, 1.930106803801388, 1.4275198597777086, 1.3411275227910562, 1.401029030555064, 2.9221901983078906, 1.0742234450539287, 1.729785707457218, 2.6653983736817723, 2.459491501585913};
static float y_data[50] = {-1.8476304479482155, -1.7033210321178698, -0.3116874828979086, -0.0692708411769553, -0.4883560187321381, -1.042068973249541, -1.347678270033896, -0.0159435843933972, -0.4966284923529751, -1.9060519649071133, -1.182083145951814, -1.9095944798357496, -1.2231140387040584, -0.8430322147628326, -0.4378312919427145, -0.7819214836068338, -1.24812089018845, -0.3141342889081202, -1.8677781397245663, -1.4347124998497078, -1.3098229854129988, -0.9018298497424118, -1.2772029022427571, -1.1447755794013643, -1.5340414984298432, 2.9946847191733035, 1.3741440691051214, 2.9691445112794845, 2.0165175228689094, 2.138925907860298, 1.5125954755495803, 1.2474228418765438, 2.29755183636731, 2.870337471695355, 1.1566224708681752, 2.13026091482972, 1.4080546735340445, 1.081212329617378, 2.241551461340733, 2.7190564478348014, 1.4476722158489428, 1.1608306843611067, 1.40338063020798, 1.3458375613033309, 1.4688775755868546, 2.3158842153684627, 2.323834094814788, 2.467041440511156, 1.2922052051746733, 2.3929873190498654};



extern float centroids_x[2];
extern float centroids_y[2];


extern void kmeans(void);
# 2 "kmeans.cpp" 2

float abs_custom(float number) {
  return number >= 0 ? number : -number;
}

void kmeans(void){

    int data_cluster_id[50];


    int i;
    int j;


    for(i = 0; i < 2; i++){
     centroids_x[i] = i;
     centroids_y[i] = i;
    }



    int interation;
    for(interation = 0; interation < 1; interation++){


        for(i = 0; i < 50; i++){
            float min_distance = abs_custom((x_data[i] - centroids_x[0])) + abs_custom((y_data[i] - centroids_y[0]));
            int closest_centroid_index = 0;
            for(j = 1; j < 2; j++){
                float distance = abs_custom((x_data[i] - centroids_x[j])) + abs_custom((y_data[i] - centroids_y[j]));
                if(distance < min_distance){
                    min_distance = distance;
                    closest_centroid_index = j;
                }
            }
            data_cluster_id[i] = closest_centroid_index;
        }


        for(i = 0; i < 2; i++){
            float mean_value_x = 0;
            float mean_value_y = 0;
            int count = 0;

            for(j = 0; j < 50; j++){
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
