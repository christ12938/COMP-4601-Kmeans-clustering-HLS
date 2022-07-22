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
	{ centroids_x_V int 17 regular {array 2 { 2 2 } 1 1 } {global 2}  }
	{ centroids_y_V int 17 regular {array 2 { 2 2 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "centroids_x_V", "interface" : "memory", "bitwidth" : 17, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":16,"cElement": [{"cName": "centroids_x.V","cData": "int17","bit_use": { "low": 0,"up": 16},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}], "extern" : 1} , 
 	{ "Name" : "centroids_y_V", "interface" : "memory", "bitwidth" : 17, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":16,"cElement": [{"cName": "centroids_y.V","cData": "int17","bit_use": { "low": 0,"up": 16},"cArray": [{"low" : 0,"up" : 1,"step" : 1}]}]}], "extern" : 1} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ centroids_x_V_address0 sc_out sc_lv 1 signal 0 } 
	{ centroids_x_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_V_we0 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_V_d0 sc_out sc_lv 17 signal 0 } 
	{ centroids_x_V_q0 sc_in sc_lv 17 signal 0 } 
	{ centroids_x_V_address1 sc_out sc_lv 1 signal 0 } 
	{ centroids_x_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_V_we1 sc_out sc_logic 1 signal 0 } 
	{ centroids_x_V_d1 sc_out sc_lv 17 signal 0 } 
	{ centroids_x_V_q1 sc_in sc_lv 17 signal 0 } 
	{ centroids_y_V_address0 sc_out sc_lv 1 signal 1 } 
	{ centroids_y_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_V_we0 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_V_d0 sc_out sc_lv 17 signal 1 } 
	{ centroids_y_V_q0 sc_in sc_lv 17 signal 1 } 
	{ centroids_y_V_address1 sc_out sc_lv 1 signal 1 } 
	{ centroids_y_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_V_we1 sc_out sc_logic 1 signal 1 } 
	{ centroids_y_V_d1 sc_out sc_lv 17 signal 1 } 
	{ centroids_y_V_q1 sc_in sc_lv 17 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "centroids_x_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "address0" }} , 
 	{ "name": "centroids_x_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "ce0" }} , 
 	{ "name": "centroids_x_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "we0" }} , 
 	{ "name": "centroids_x_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "d0" }} , 
 	{ "name": "centroids_x_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "q0" }} , 
 	{ "name": "centroids_x_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "address1" }} , 
 	{ "name": "centroids_x_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "ce1" }} , 
 	{ "name": "centroids_x_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "we1" }} , 
 	{ "name": "centroids_x_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "d1" }} , 
 	{ "name": "centroids_x_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_x_V", "role": "q1" }} , 
 	{ "name": "centroids_y_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "address0" }} , 
 	{ "name": "centroids_y_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "ce0" }} , 
 	{ "name": "centroids_y_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "we0" }} , 
 	{ "name": "centroids_y_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "d0" }} , 
 	{ "name": "centroids_y_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "q0" }} , 
 	{ "name": "centroids_y_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "address1" }} , 
 	{ "name": "centroids_y_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "ce1" }} , 
 	{ "name": "centroids_y_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "we1" }} , 
 	{ "name": "centroids_y_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "d1" }} , 
 	{ "name": "centroids_y_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "centroids_y_V", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5"],
		"CDFG" : "kmeans",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "412", "EstimateLatencyMax" : "452",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "centroids_x_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "centroids_y_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "x_data_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "y_data_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x_data_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.y_data_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_cluster_id_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_sdiv_18s_1cud_U1", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kmeans_sdiv_18s_1cud_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kmeans {
		centroids_x_V {Type IO LastRead 2 FirstWrite 1}
		centroids_y_V {Type IO LastRead 2 FirstWrite 1}
		x_data_V {Type I LastRead -1 FirstWrite -1}
		y_data_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "412", "Max" : "452"}
	, {"Name" : "Interval", "Min" : "413", "Max" : "453"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	centroids_x_V { ap_memory {  { centroids_x_V_address0 mem_address 1 1 }  { centroids_x_V_ce0 mem_ce 1 1 }  { centroids_x_V_we0 mem_we 1 1 }  { centroids_x_V_d0 mem_din 1 17 }  { centroids_x_V_q0 mem_dout 0 17 }  { centroids_x_V_address1 MemPortADDR2 1 1 }  { centroids_x_V_ce1 MemPortCE2 1 1 }  { centroids_x_V_we1 MemPortWE2 1 1 }  { centroids_x_V_d1 MemPortDIN2 1 17 }  { centroids_x_V_q1 MemPortDOUT2 0 17 } } }
	centroids_y_V { ap_memory {  { centroids_y_V_address0 mem_address 1 1 }  { centroids_y_V_ce0 mem_ce 1 1 }  { centroids_y_V_we0 mem_we 1 1 }  { centroids_y_V_d0 mem_din 1 17 }  { centroids_y_V_q0 mem_dout 0 17 }  { centroids_y_V_address1 MemPortADDR2 1 1 }  { centroids_y_V_ce1 MemPortCE2 1 1 }  { centroids_y_V_we1 MemPortWE2 1 1 }  { centroids_y_V_d1 MemPortDIN2 1 17 }  { centroids_y_V_q1 MemPortDOUT2 0 17 } } }
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
