/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define CMP_CMN 2
#define CMP_CMP 0
#define DOM_CC_NX_OR_Y 1
#define WCGR1 97
#define DOM_CC_X_OR_Y 2
#define NUM_OF_COND_CMP 4
#define CC_REGNUM 100
#define WCGR3 99
#define SP_REGNUM 13
#define R1_REGNUM 1
#define PC_REGNUM 15
#define WCGR0 96
#define VFPCC_REGNUM 101
#define WCGR2 98
#define R0_REGNUM 0
#define CMN_CMP 1
#define LR_REGNUM 14
#define DOM_CC_X_AND_Y 0
#define CMN_CMN 3
#define IP_REGNUM 12
#define LAST_ARM_REGNUM 15

enum unspec {
  UNSPEC_PUSH_MULT = 0,
  UNSPEC_PIC_SYM = 1,
  UNSPEC_PIC_BASE = 2,
  UNSPEC_PRLG_STK = 3,
  UNSPEC_REGISTER_USE = 4,
  UNSPEC_CHECK_ARCH = 5,
  UNSPEC_WSHUFH = 6,
  UNSPEC_WACC = 7,
  UNSPEC_TMOVMSK = 8,
  UNSPEC_WSAD = 9,
  UNSPEC_WSADZ = 10,
  UNSPEC_WMACS = 11,
  UNSPEC_WMACU = 12,
  UNSPEC_WMACSZ = 13,
  UNSPEC_WMACUZ = 14,
  UNSPEC_CLRDI = 15,
  UNSPEC_WALIGNI = 16,
  UNSPEC_TLS = 17,
  UNSPEC_PIC_LABEL = 18,
  UNSPEC_PIC_OFFSET = 19,
  UNSPEC_GOTSYM_OFF = 20,
  UNSPEC_THUMB1_CASESI = 21,
  UNSPEC_RBIT = 22,
  UNSPEC_SYMBOL_OFFSET = 23,
  UNSPEC_MEMORY_BARRIER = 24,
  UNSPEC_UNALIGNED_LOAD = 25,
  UNSPEC_UNALIGNED_STORE = 26,
  UNSPEC_PIC_UNIFIED = 27,
  UNSPEC_LL = 28,
  UNSPEC_VRINTZ = 29,
  UNSPEC_VRINTP = 30,
  UNSPEC_VRINTM = 31,
  UNSPEC_VRINTR = 32,
  UNSPEC_VRINTX = 33,
  UNSPEC_VRINTA = 34,
  UNSPEC_PROBE_STACK = 35,
  UNSPEC_WADDC = 36,
  UNSPEC_WABS = 37,
  UNSPEC_WQMULWMR = 38,
  UNSPEC_WQMULMR = 39,
  UNSPEC_WQMULWM = 40,
  UNSPEC_WQMULM = 41,
  UNSPEC_WQMIAxyn = 42,
  UNSPEC_WQMIAxy = 43,
  UNSPEC_TANDC = 44,
  UNSPEC_TORC = 45,
  UNSPEC_TORVSC = 46,
  UNSPEC_TEXTRC = 47,
  UNSPEC_ASHIFT_SIGNED = 48,
  UNSPEC_ASHIFT_UNSIGNED = 49,
  UNSPEC_CRC32B = 50,
  UNSPEC_CRC32H = 51,
  UNSPEC_CRC32W = 52,
  UNSPEC_CRC32CB = 53,
  UNSPEC_CRC32CH = 54,
  UNSPEC_CRC32CW = 55,
  UNSPEC_AESD = 56,
  UNSPEC_AESE = 57,
  UNSPEC_AESIMC = 58,
  UNSPEC_AESMC = 59,
  UNSPEC_SHA1C = 60,
  UNSPEC_SHA1M = 61,
  UNSPEC_SHA1P = 62,
  UNSPEC_SHA1H = 63,
  UNSPEC_SHA1SU0 = 64,
  UNSPEC_SHA1SU1 = 65,
  UNSPEC_SHA256H = 66,
  UNSPEC_SHA256H2 = 67,
  UNSPEC_SHA256SU0 = 68,
  UNSPEC_SHA256SU1 = 69,
  UNSPEC_VMULLP64 = 70,
  UNSPEC_LOAD_COUNT = 71,
  UNSPEC_VABD_F = 72,
  UNSPEC_VABD_S = 73,
  UNSPEC_VABD_U = 74,
  UNSPEC_VABDL_S = 75,
  UNSPEC_VABDL_U = 76,
  UNSPEC_VADD = 77,
  UNSPEC_VADDHN = 78,
  UNSPEC_VRADDHN = 79,
  UNSPEC_VADDL_S = 80,
  UNSPEC_VADDL_U = 81,
  UNSPEC_VADDW_S = 82,
  UNSPEC_VADDW_U = 83,
  UNSPEC_VBSL = 84,
  UNSPEC_VCAGE = 85,
  UNSPEC_VCAGT = 86,
  UNSPEC_VCALE = 87,
  UNSPEC_VCALT = 88,
  UNSPEC_VCEQ = 89,
  UNSPEC_VCGE = 90,
  UNSPEC_VCGEU = 91,
  UNSPEC_VCGT = 92,
  UNSPEC_VCGTU = 93,
  UNSPEC_VCLS = 94,
  UNSPEC_VCONCAT = 95,
  UNSPEC_VCVT = 96,
  UNSPEC_VCVT_S = 97,
  UNSPEC_VCVT_U = 98,
  UNSPEC_VCVT_S_N = 99,
  UNSPEC_VCVT_U_N = 100,
  UNSPEC_VCVT_HF_S_N = 101,
  UNSPEC_VCVT_HF_U_N = 102,
  UNSPEC_VCVT_SI_S_N = 103,
  UNSPEC_VCVT_SI_U_N = 104,
  UNSPEC_VCVTH_S = 105,
  UNSPEC_VCVTH_U = 106,
  UNSPEC_VCVTA_S = 107,
  UNSPEC_VCVTA_U = 108,
  UNSPEC_VCVTM_S = 109,
  UNSPEC_VCVTM_U = 110,
  UNSPEC_VCVTN_S = 111,
  UNSPEC_VCVTN_U = 112,
  UNSPEC_VCVTP_S = 113,
  UNSPEC_VCVTP_U = 114,
  UNSPEC_VEXT = 115,
  UNSPEC_VHADD_S = 116,
  UNSPEC_VHADD_U = 117,
  UNSPEC_VRHADD_S = 118,
  UNSPEC_VRHADD_U = 119,
  UNSPEC_VHSUB_S = 120,
  UNSPEC_VHSUB_U = 121,
  UNSPEC_VLD1 = 122,
  UNSPEC_VLD1_LANE = 123,
  UNSPEC_VLD2 = 124,
  UNSPEC_VLD2_DUP = 125,
  UNSPEC_VLD2_LANE = 126,
  UNSPEC_VLD3 = 127,
  UNSPEC_VLD3A = 128,
  UNSPEC_VLD3B = 129,
  UNSPEC_VLD3_DUP = 130,
  UNSPEC_VLD3_LANE = 131,
  UNSPEC_VLD4 = 132,
  UNSPEC_VLD4A = 133,
  UNSPEC_VLD4B = 134,
  UNSPEC_VLD4_DUP = 135,
  UNSPEC_VLD4_LANE = 136,
  UNSPEC_VMAX = 137,
  UNSPEC_VMAX_U = 138,
  UNSPEC_VMAXNM = 139,
  UNSPEC_VMIN = 140,
  UNSPEC_VMIN_U = 141,
  UNSPEC_VMINNM = 142,
  UNSPEC_VMLA = 143,
  UNSPEC_VMLA_LANE = 144,
  UNSPEC_VMLAL_S = 145,
  UNSPEC_VMLAL_U = 146,
  UNSPEC_VMLAL_S_LANE = 147,
  UNSPEC_VMLAL_U_LANE = 148,
  UNSPEC_VMLS = 149,
  UNSPEC_VMLS_LANE = 150,
  UNSPEC_VMLSL_S = 151,
  UNSPEC_VMLSL_U = 152,
  UNSPEC_VMLSL_S_LANE = 153,
  UNSPEC_VMLSL_U_LANE = 154,
  UNSPEC_VMLSL_LANE = 155,
  UNSPEC_VFMA_LANE = 156,
  UNSPEC_VFMS_LANE = 157,
  UNSPEC_VMOVL_S = 158,
  UNSPEC_VMOVL_U = 159,
  UNSPEC_VMOVN = 160,
  UNSPEC_VMUL = 161,
  UNSPEC_VMULL_P = 162,
  UNSPEC_VMULL_S = 163,
  UNSPEC_VMULL_U = 164,
  UNSPEC_VMUL_LANE = 165,
  UNSPEC_VMULL_S_LANE = 166,
  UNSPEC_VMULL_U_LANE = 167,
  UNSPEC_VPADAL_S = 168,
  UNSPEC_VPADAL_U = 169,
  UNSPEC_VPADD = 170,
  UNSPEC_VPADDL_S = 171,
  UNSPEC_VPADDL_U = 172,
  UNSPEC_VPMAX = 173,
  UNSPEC_VPMAX_U = 174,
  UNSPEC_VPMIN = 175,
  UNSPEC_VPMIN_U = 176,
  UNSPEC_VPSMAX = 177,
  UNSPEC_VPSMIN = 178,
  UNSPEC_VPUMAX = 179,
  UNSPEC_VPUMIN = 180,
  UNSPEC_VQABS = 181,
  UNSPEC_VQADD_S = 182,
  UNSPEC_VQADD_U = 183,
  UNSPEC_VQDMLAL = 184,
  UNSPEC_VQDMLAL_LANE = 185,
  UNSPEC_VQDMLSL = 186,
  UNSPEC_VQDMLSL_LANE = 187,
  UNSPEC_VQDMULH = 188,
  UNSPEC_VQDMULH_LANE = 189,
  UNSPEC_VQRDMULH = 190,
  UNSPEC_VQRDMULH_LANE = 191,
  UNSPEC_VQDMULL = 192,
  UNSPEC_VQDMULL_LANE = 193,
  UNSPEC_VQMOVN_S = 194,
  UNSPEC_VQMOVN_U = 195,
  UNSPEC_VQMOVUN = 196,
  UNSPEC_VQNEG = 197,
  UNSPEC_VQSHL_S = 198,
  UNSPEC_VQSHL_U = 199,
  UNSPEC_VQRSHL_S = 200,
  UNSPEC_VQRSHL_U = 201,
  UNSPEC_VQSHL_S_N = 202,
  UNSPEC_VQSHL_U_N = 203,
  UNSPEC_VQSHLU_N = 204,
  UNSPEC_VQSHRN_S_N = 205,
  UNSPEC_VQSHRN_U_N = 206,
  UNSPEC_VQRSHRN_S_N = 207,
  UNSPEC_VQRSHRN_U_N = 208,
  UNSPEC_VQSHRUN_N = 209,
  UNSPEC_VQRSHRUN_N = 210,
  UNSPEC_VQSUB_S = 211,
  UNSPEC_VQSUB_U = 212,
  UNSPEC_VRECPE = 213,
  UNSPEC_VRECPS = 214,
  UNSPEC_VREV16 = 215,
  UNSPEC_VREV32 = 216,
  UNSPEC_VREV64 = 217,
  UNSPEC_VRSQRTE = 218,
  UNSPEC_VRSQRTS = 219,
  UNSPEC_VSHL_S = 220,
  UNSPEC_VSHL_U = 221,
  UNSPEC_VRSHL_S = 222,
  UNSPEC_VRSHL_U = 223,
  UNSPEC_VSHLL_S_N = 224,
  UNSPEC_VSHLL_U_N = 225,
  UNSPEC_VSHL_N = 226,
  UNSPEC_VSHR_S_N = 227,
  UNSPEC_VSHR_U_N = 228,
  UNSPEC_VRSHR_S_N = 229,
  UNSPEC_VRSHR_U_N = 230,
  UNSPEC_VSHRN_N = 231,
  UNSPEC_VRSHRN_N = 232,
  UNSPEC_VSLI = 233,
  UNSPEC_VSRA_S_N = 234,
  UNSPEC_VSRA_U_N = 235,
  UNSPEC_VRSRA_S_N = 236,
  UNSPEC_VRSRA_U_N = 237,
  UNSPEC_VSRI = 238,
  UNSPEC_VST1 = 239,
  UNSPEC_VST1_LANE = 240,
  UNSPEC_VST2 = 241,
  UNSPEC_VST2_LANE = 242,
  UNSPEC_VST3 = 243,
  UNSPEC_VST3A = 244,
  UNSPEC_VST3B = 245,
  UNSPEC_VST3_LANE = 246,
  UNSPEC_VST4 = 247,
  UNSPEC_VST4A = 248,
  UNSPEC_VST4B = 249,
  UNSPEC_VST4_LANE = 250,
  UNSPEC_VSTRUCTDUMMY = 251,
  UNSPEC_VSUB = 252,
  UNSPEC_VSUBHN = 253,
  UNSPEC_VRSUBHN = 254,
  UNSPEC_VSUBL_S = 255,
  UNSPEC_VSUBL_U = 256,
  UNSPEC_VSUBW_S = 257,
  UNSPEC_VSUBW_U = 258,
  UNSPEC_VTBL = 259,
  UNSPEC_VTBX = 260,
  UNSPEC_VTRN1 = 261,
  UNSPEC_VTRN2 = 262,
  UNSPEC_VTST = 263,
  UNSPEC_VUZP1 = 264,
  UNSPEC_VUZP2 = 265,
  UNSPEC_VZIP1 = 266,
  UNSPEC_VZIP2 = 267,
  UNSPEC_MISALIGNED_ACCESS = 268,
  UNSPEC_VCLE = 269,
  UNSPEC_VCLT = 270,
  UNSPEC_NVRINTZ = 271,
  UNSPEC_NVRINTP = 272,
  UNSPEC_NVRINTM = 273,
  UNSPEC_NVRINTX = 274,
  UNSPEC_NVRINTA = 275,
  UNSPEC_NVRINTN = 276,
  UNSPEC_VQRDMLAH = 277,
  UNSPEC_VQRDMLSH = 278,
  UNSPEC_VRND = 279,
  UNSPEC_VRNDA = 280,
  UNSPEC_VRNDI = 281,
  UNSPEC_VRNDM = 282,
  UNSPEC_VRNDN = 283,
  UNSPEC_VRNDP = 284,
  UNSPEC_VRNDX = 285
};
#define NUM_UNSPEC_VALUES 286
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_LDRD_ATOMIC = 21,
  VUNSPEC_SC = 22,
  VUNSPEC_LAX = 23,
  VUNSPEC_SLX = 24,
  VUNSPEC_LDA = 25,
  VUNSPEC_STL = 26,
  VUNSPEC_GET_FPSCR = 27,
  VUNSPEC_SET_FPSCR = 28,
  VUNSPEC_PROBE_STACK_RANGE = 29
};
#define NUM_UNSPECV_VALUES 30
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */