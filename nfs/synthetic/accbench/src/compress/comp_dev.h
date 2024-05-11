#ifndef _INCLUDE_COMP_DEV_H_
#define _INCLUDE_COMP_DEV_H_


// #define DPDK_COMP_OUTPUT_BUFS_MAX 1024
#define DPDK_COMP_NUM_MAX_XFORMS 16
#define DPDK_COMP_NUM_MAX_INFLIGHT_OPS 512
#define DPDK_COMP_MAX_RANGE_LIST		32

enum comp_operation {
	COMPRESS_ONLY,
	DECOMPRESS_ONLY,
	COMPRESS_DECOMPRESS
};

#endif /* _INCLUDE_COMP_DEV_H_ */