
#ifndef USER_GEMM_SOURCE_INCLUDES_H
#define USER_GEMM_SOURCE_INCLUDES_H
#include <cstddef>

//#ifdef AUTOGEMM_USE_PRE_COMPILED_KERNELS
//#include "AutoGemmKernelBinaries/sgemm_Col_NT_B1_MX128_NX128_KX16_bin.cpp"
//#endif

//**** compiler flags
//**** online compilation flags
const char * const User_srcBuildOptions = "-cl-std=CL2.0";
const char * const User_binBuildOptions = "-cl-std=CL2.0";


extern const unsigned int sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_workGroupNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_workGroupNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_microTileNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_microTileNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_unroll;
extern const char * const sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_src;
extern unsigned char *sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_bin;
extern size_t sgemm_Col_NT_B1_MX032_NX064_KX16_ROW_binSize;


extern const unsigned int sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_workGroupNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_workGroupNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_microTileNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_microTileNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_unroll;
extern const char * const sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_src;
extern unsigned char *sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_bin;
extern size_t sgemm_Col_NT_B1_MX064_NX032_KX16_COLUMN_binSize;

extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_workGroupNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_workGroupNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_microTileNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_microTileNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_unroll;
extern const char * const sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_src;
extern unsigned char *sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_bin;
extern size_t sgemm_Col_NT_B1_MX032_NX032_KX16_SINGLE_binSize;

extern const unsigned int sgemm_Col_NT_B1_MX128_NX128_KX16_workGroupNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX128_NX128_KX16_workGroupNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX128_NX128_KX16_microTileNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX128_NX128_KX16_microTileNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX128_NX128_KX16_unroll;
extern const char * const sgemm_Col_NT_B1_MX128_NX128_KX16_src;
extern unsigned char *sgemm_Col_NT_B1_MX128_NX128_KX16_bin;
extern size_t sgemm_Col_NT_B1_MX128_NX128_KX16_binSize;

extern const unsigned int sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_workGroupNumRows;
extern const unsigned int sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_workGroupNumCols;
extern const unsigned int sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_microTileNumRows;
extern const unsigned int sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_microTileNumCols;
extern const unsigned int sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_unroll;
extern const char * const sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_src;
extern unsigned char *sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_bin;
extern size_t sgemm_Col_NN_B1_MX032_NX032_KX16_BRANCH_binSize;

extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_workGroupNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_workGroupNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_microTileNumRows;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_microTileNumCols;
extern const unsigned int sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_unroll;
extern const char * const sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_src;
extern unsigned char *sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_bin;
extern size_t sgemm_Col_NT_B1_MX032_NX032_KX16_BRANCH_binSize;

extern const unsigned int sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_workGroupNumRows;
extern const unsigned int sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_workGroupNumCols;
extern const unsigned int sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_microTileNumRows;
extern const unsigned int sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_microTileNumCols;
extern const unsigned int sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_unroll;
extern const char * const sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_src;
extern unsigned char *sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_bin;
extern size_t sgemm_Col_TN_B1_MX032_NX032_KX16_BRANCH_binSize;

#endif
