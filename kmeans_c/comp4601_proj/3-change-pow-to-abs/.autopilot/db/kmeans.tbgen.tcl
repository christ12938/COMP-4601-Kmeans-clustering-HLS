set moduleName kmeans
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {kmeans}
set C_modelType { void 0 }
set C_modelArgList {
	{ centroids_x float 32 regular {array 2 { 2 2 } 1 1 } {global 2}  }
	{ centroids_y float 32 regular {array 2 { 2 2 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "centroids_x", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "centroids_x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}], "extern" : 1} , 
 	{ "Name" : "centroids_y", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "centroids_y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}], "extern" : 1} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ centroids_x_address0 sc_out sc_lv 1 signal 0 } 
	{ centroids_x_ce0 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_we0 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_d0 sc_out sc_lv 32 signal 0 } 
	{ centroids_x_q0 sc_in sc_lv 32 signal 0 } 
	{ centroids_x_address1 sc_out sc_lv 1 signal 0 } 
	{ centroids_x_ce1 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_we1 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_d1 sc_out sc_lv 32 signal 0 } 
	{ centroids_x_q1 sc_in sc_lv 32 signal 0 } 
	{ centroids_y_address0 sc_out sc_lv 1 signal 1 } 
	{ centroids_y_ce0 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_we0 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_d0 sc_out sc_lv 32 signal 1 } 
	{ centroids_y_q0 sc_in sc_lv 32 signal 1 } 
	{ centroids_y_address1 sc_out sc_lv 1 signal 1 } 
	{ centroids_y_ce1 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_we1 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_d1 sc_out sc_lv 32 signal 1 } 
	{ centroids_y_q1 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "centroids_x_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x", "role": "address0" }} , 
 	{ "name": "centroids_x_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x", "role": "ce0" }} , 
 	{ "name": "centroids_x_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x", "role": "we0" }} , 
 	{ "name": "centroids_x_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_x", "role": "d0" }} , 
 	{ "name": "centroids_x_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_x", "role": "q0" }} , 
 	{ "name": "centroids_x_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x", "role": "address1" }} , 
 	{ "name": "centroids_x_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x", "role": "ce1" }} , 
 	{ "name": "centroids_x_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x", "role": "we1" }} , 
 	{ "name": "centroids_x_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_x", "role": "d1" }} , 
 	{ "name": "centroids_x_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_x", "role": "q1" }} , 
 	{ "name": "centroids_y_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y", "role": "address0" }} , 
 	{ "name": "centroids_y_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y", "role": "ce0" }} , 
 	{ "name": "centroids_y_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y", "role": "we0" }} , 
 	{ "name": "centroids_y_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_y", "role": "d0" }} , 
 	{ "name": "centroids_y_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_y", "role": "q0" }} , 
 	{ "name": "centroids_y_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y", "role": "address1" }} , 
 	{ "name": "centroids_y_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y", "role": "ce1" }} , 
 	{ "name": "centroids_y_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y", "role": "we1" }} , 
 	{ "name": "centroids_y_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_y", "role": "d1" }} , 
 	{ "name": "centroids_y_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "centroids_y", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14"],
		"CDFG" : "kmeans",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1522", "EstimateLatencyMax" : "1562",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "centroids_x", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "centroids_y", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "x_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "y_data", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_data_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.y_data_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_cluster_id_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_faddfsub_3cud_U1", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_faddfsub_3cud_U2", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fsub_32ns_dEe_U3", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fsub_32ns_dEe_U4", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fdiv_32ns_eOg_U5", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fdiv_32ns_eOg_U6", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_sitofp_32nfYi_U7", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fcmp_32ns_g8j_U8", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fcmp_32ns_g8j_U9", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fcmp_32ns_g8j_U10", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_fcmp_32ns_g8j_U11", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kmeans {
		centroids_x {Type IO LastRead 2 FirstWrite 6}
		centroids_y {Type IO LastRead 2 FirstWrite 6}
		x_data {Type I LastRead -1 FirstWrite -1}
		y_data {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1522", "Max" : "1562"}
	, {"Name" : "Interval", "Min" : "1523", "Max" : "1563"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	centroids_x { ap_memory {  { centroids_x_address0 mem_address 1 1 }  { centroids_x_ce0 mem_ce 1 1 }  { centroids_x_we0 mem_we 1 1 }  { centroids_x_d0 mem_din 1 32 }  { centroids_x_q0 mem_dout 0 32 }  { centroids_x_address1 MemPortADDR2 1 1 }  { centroids_x_ce1 MemPortCE2 1 1 }  { centroids_x_we1 MemPortWE2 1 1 }  { centroids_x_d1 MemPortDIN2 1 32 }  { centroids_x_q1 MemPortDOUT2 0 32 } } }
	centroids_y { ap_memory {  { centroids_y_address0 mem_address 1 1 }  { centroids_y_ce0 mem_ce 1 1 }  { centroids_y_we0 mem_we 1 1 }  { centroids_y_d0 mem_din 1 32 }  { centroids_y_q0 mem_dout 0 32 }  { centroids_y_address1 MemPortADDR2 1 1 }  { centroids_y_ce1 MemPortCE2 1 1 }  { centroids_y_we1 MemPortWE2 1 1 }  { centroids_y_d1 MemPortDIN2 1 32 }  { centroids_y_q1 MemPortDOUT2 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
