/********************************************************************
* Copyright (C) 2003-2018 Texas Instruments Incorporated.
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/
#ifndef CSLR_PCIESS_CFGTYPE0_H_
#define CSLR_PCIESS_CFGTYPE0_H_

/* CSL Modification:
 *  The file has been modified from the AUTOGEN file for the following
 *  reasons:-
 *      a) Modified the header file includes to be RTSC compliant
 */

#include <ti/csl/cslr.h>
#include <ti/csl/tistdtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Minimum unit = 1 byte */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint8 RSVD0[12];
    volatile Uint32 BIST_HEADER;
    volatile Uint32 BAR[6];
    volatile Uint8 RSVD1[4];
    volatile Uint32 SUBSYS_VNDR_ID;
    volatile Uint32 EXPNSN_ROM;
    volatile Uint32 CAP_PTR;
    volatile Uint8 RSVD2[4];
    volatile Uint32 INT_PIN;
} CSL_Pciess_cfgtype0Regs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* BIST_HEADER */

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_BISTCAPABLE_MASK (0x80000000u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_BISTCAPABLE_SHIFT (0x0000001Fu)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_BISTCAPABLE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_STARTBIST_MASK (0x40000000u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_STARTBIST_SHIFT (0x0000001Eu)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_STARTBIST_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_COMPLETIONCODE_MASK (0x0F000000u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_COMPLETIONCODE_SHIFT (0x00000018u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_COMPLETIONCODE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_MULTIFUNCTION_DEVICE_MASK (0x00800000u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_MULTIFUNCTION_DEVICE_SHIFT (0x00000017u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_MULTIFUNCTION_DEVICE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_HEADERTYPE_MASK (0x007F0000u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_HEADERTYPE_SHIFT (0x00000010u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_HEADERTYPE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_LATENCYTIMER_MASK (0x0000FF00u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_LATENCYTIMER_SHIFT (0x00000008u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_LATENCYTIMER_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_CACHELINE_SIZE_MASK (0x000000FFu)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_CACHELINE_SIZE_SHIFT (0x00000000u)
#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_CACHELINE_SIZE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BIST_HEADER_RESETVAL (0x00000000u)

/* BAR */

#define CSL_PCIESS_CFGTYPE0_BAR_BASEADDRESS_MASK (0xFFFFFF80u)
#define CSL_PCIESS_CFGTYPE0_BAR_BASEADDRESS_SHIFT (0x00000007u)
#define CSL_PCIESS_CFGTYPE0_BAR_BASEADDRESS_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BAR_PREFETCHABLE_MASK (0x00000008u)
#define CSL_PCIESS_CFGTYPE0_BAR_PREFETCHABLE_SHIFT (0x00000003u)
#define CSL_PCIESS_CFGTYPE0_BAR_PREFETCHABLE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BAR_TYPE_MASK (0x00000006u)
#define CSL_PCIESS_CFGTYPE0_BAR_TYPE_SHIFT (0x00000001u)
#define CSL_PCIESS_CFGTYPE0_BAR_TYPE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BAR_MEMORYSPACE_MASK (0x00000001u)
#define CSL_PCIESS_CFGTYPE0_BAR_MEMORYSPACE_SHIFT (0x00000000u)
#define CSL_PCIESS_CFGTYPE0_BAR_MEMORYSPACE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_BAR_RESETVAL (0x00000000u)

/* SUBSYS_VNDR_ID */

#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_SUBSYSTEM_ID_MASK (0xFFFF0000u)
#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_SUBSYSTEM_ID_SHIFT (0x00000010u)
#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_SUBSYSTEM_ID_RESETVAL (0x00000001u)

#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_SUBSYSTEM_VENDOR_ID_MASK (0x0000FFFFu)
#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_SUBSYSTEM_VENDOR_ID_SHIFT (0x00000000u)
#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_SUBSYSTEM_VENDOR_ID_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_SUBSYS_VNDR_ID_RESETVAL (0x00010000u)

/* EXPNSN_ROM */

#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_EXPANSIONROM_BASE_ADDRESS_MASK (0xFFFFF800u)
#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_EXPANSIONROM_BASE_ADDRESS_SHIFT (0x0000000Bu)
#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_EXPANSIONROM_BASE_ADDRESS_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_EXPANSIONROM_ENABLE_MASK (0x00000001u)
#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_EXPANSIONROM_ENABLE_SHIFT (0x00000000u)
#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_EXPANSIONROM_ENABLE_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_EXPNSN_ROM_RESETVAL (0x00000000u)

/* CAP_PTR */

#define CSL_PCIESS_CFGTYPE0_CAP_PTR_CAP_PTR_MASK (0x000000FFu)
#define CSL_PCIESS_CFGTYPE0_CAP_PTR_CAP_PTR_SHIFT (0x00000000u)
#define CSL_PCIESS_CFGTYPE0_CAP_PTR_CAP_PTR_RESETVAL (0x00000040u)

#define CSL_PCIESS_CFGTYPE0_CAP_PTR_RESETVAL (0x00000040u)

/* INT_PIN */

#define CSL_PCIESS_CFGTYPE0_INT_PIN_MAX_LATENCY_MASK (0xFF000000u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_MAX_LATENCY_SHIFT (0x00000018u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_MAX_LATENCY_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_INT_PIN_MIN_GRANT_MASK (0x00FF0000u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_MIN_GRANT_SHIFT (0x00000010u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_MIN_GRANT_RESETVAL (0x00000000u)

#define CSL_PCIESS_CFGTYPE0_INT_PIN_INT_PIN_MASK (0x0000FF00u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_INT_PIN_SHIFT (0x00000008u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_INT_PIN_RESETVAL (0x00000001u)

#define CSL_PCIESS_CFGTYPE0_INT_PIN_INT_LINE_MASK (0x000000FFu)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_INT_LINE_SHIFT (0x00000000u)
#define CSL_PCIESS_CFGTYPE0_INT_PIN_INT_LINE_RESETVAL (0x000000FFu)

#define CSL_PCIESS_CFGTYPE0_INT_PIN_RESETVAL (0x000001FFu)


#ifdef __cplusplus
}
#endif

#endif