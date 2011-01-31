/***********************************************************************
Copyright (c) 2006-2010, Skype Limited. All rights reserved. 
Redistribution and use in source and binary forms, with or without 
modification, (subject to the limitations in the disclaimer below) 
are permitted provided that the following conditions are met:
- Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.
- Neither the name of Skype Limited, nor the names of specific 
contributors, may be used to endorse or promote products derived from 
this software without specific prior written permission.
NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED 
BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
CONTRIBUTORS ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND 
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF 
USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***********************************************************************/

/**********************************************/
/* This file has been automatically generated */
/*                                            */
/* ROM usage:  0.11 + 0.90 kB                 */
/**********************************************/

#include "SKP_Silk_structs.h"
#include "SKP_Silk_tables.h"
#include "SKP_Silk_tables_NLSF_CB.h"

const SKP_uint8 SKP_Silk_NLSF_MSVQ_CB1_10_CDF[ NLSF_MSVQ_CB1_10_VECTORS ] =
{
          176,
          144,
          119,
          102,
           92,
           85,
           79,
           73,
           68,
           63,
           58,
           53,
           49,
           45,
           41,
           37,
           34,
           30,
           27,
           24,
           22,
           19,
           17,
           15,
           13,
           12,
           10,
            8,
            6,
            4,
            2,
            0,
          149,
           93,
           71,
           55,
           40,
           26,
           12,
            0,
          121,
          100,
           80,
           61,
           45,
           29,
           14,
            0,
          133,
          110,
           88,
           67,
           48,
           30,
           13,
            0,
          199,
          152,
          111,
           76,
           53,
           32,
           15,
            0,
          161,
          109,
           88,
           68,
           49,
           30,
           14,
            0,
          211,
          171,
          134,
           98,
           63,
           37,
           11,
            0
};

const SKP_uint8 * const SKP_Silk_NLSF_MSVQ_CB1_10_CDF_start_ptr[ NLSF_MSVQ_CB1_10_STAGES ] =
{
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[   0 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  32 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  40 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  48 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  56 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  64 ],
     &SKP_Silk_NLSF_MSVQ_CB1_10_CDF[  72 ]
};

const SKP_uint8 SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[ NLSF_MSVQ_CB1_10_VECTORS ] =
{
               27,               48,
               54,               63,
               74,               84,
               85,               89,
               91,               91,
               91,               91,
               94,               95,
               96,               97,
              100,              101,
              102,              104,
              106,              106,
              113,              113,
              113,              113,
              113,              113,
              113,              113,
              113,              113,
               20,               35,
               57,               64,
               66,               66,
               67,               71,
               15,               58,
               58,               61,
               64,               64,
               65,               68,
               17,               55,
               57,               58,
               60,               61,
               63,               68,
               35,               39,
               43,               46,
               56,               58,
               63,               65,
               23,               37,
               57,               59,
               60,               61,
               63,               68,
               40,               43,
               45,               45,
               46,               53,
               53,               73
};

const SKP_int SKP_Silk_NLSF_MSVQ_CB1_10_ndelta_min_Q15[ 10 + 1 ] =
{
              488,
               31,
              249,
              268,
              153,
               20,
               12,
               15,
                9,
                3,
              685
};

const SKP_int8 SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 * NLSF_MSVQ_CB1_10_VECTORS ] =
{
             -112,              -92,
              -67,              -43,
              -20,                3,
               28,               52,
               78,              100,
             -113,             -100,
              -76,              -53,
              -30,               -7,
               20,               45,
               72,               97,
              -97,              -81,
              -58,              -34,
              -10,               11,
               37,               59,
               83,              104,
             -110,             -100,
              -80,              -61,
              -38,              -15,
               12,               38,
               66,               90,
             -114,             -107,
              -81,              -50,
              -23,                2,
               28,               51,
               77,              101,
              -92,              -80,
              -59,              -42,
              -18,                2,
               26,               50,
               77,               97,
             -102,              -83,
              -56,              -29,
               -8,               23,
               48,               73,
               98,              111,
              -98,              -78,
              -48,              -19,
                7,               32,
               54,               73,
               92,              107,
             -105,              -90,
              -69,              -42,
               -4,               20,
               38,               57,
               77,               97,
             -113,             -101,
              -71,              -40,
              -14,               11,
               42,               65,
               89,              108,
             -109,              -99,
              -84,              -61,
              -17,                0,
               19,               46,
               65,               97,
             -109,             -100,
              -85,              -49,
              -25,              -10,
               21,               35,
               79,               97,
             -109,             -101,
              -81,              -33,
              -10,                6,
               28,               46,
               81,               99,
             -115,              -84,
              -58,              -32,
              -11,               11,
               36,               61,
               84,              104,
             -114,             -106,
              -88,              -68,
              -39,               -3,
               25,               44,
               66,               97,
              -79,              -68,
              -46,              -29,
               -7,               13,
               36,               58,
               82,              101,
             -106,              -87,
              -69,              -51,
              -27,              -11,
               15,               52,
               74,               92,
              -99,              -87,
              -70,              -55,
              -40,              -13,
               31,               52,
               78,              101,
             -109,              -98,
              -83,              -66,
              -52,              -28,
               23,               46,
               74,               99,
             -111,             -103,
              -87,              -57,
               -2,               19,
               33,               53,
               72,               97,
             -113,              -99,
              -62,              -21,
                5,               27,
               47,               65,
               86,              103,
              -99,              -79,
              -37,              -16,
                3,               19,
               37,               62,
               83,              101,
              -92,              -79,
              -57,              -41,
              -25,              -10,
                8,               30,
               68,               96,
             -104,              -92,
              -77,              -56,
              -39,              -23,
               -7,               21,
               72,               95,
              -78,              -65,
              -34,              -16,
               10,               30,
               51,               71,
               90,              106,
             -104,              -76,
              -38,               -5,
               27,               52,
               66,               77,
               89,              101,
             -106,              -79,
              -50,              -24,
               15,               40,
               43,               35,
               47,              102,
             -103,              -71,
              -40,               -6,
               22,               22,
               26,               37,
               66,               99,
             -106,              -78,
              -53,              -30,
               -3,               40,
               63,               69,
               57,               75,
             -106,              -79,
              -51,              -33,
               -1,               17,
               51,               89,
              108,              121,
             -107,              -82,
              -56,              -37,
               -7,               17,
               68,               86,
               86,               88,
             -102,              -76,
              -47,              -13,
               -3,                3,
               10,               43,
               77,              105,
               -2,               -2,
               -1,               -1,
                0,                0,
               -1,                0,
                0,                0,
                2,                4,
                4,                3,
                4,                5,
                4,                3,
                2,                2,
               -1,               -3,
               -5,                0,
               -5,               -9,
               -4,               -1,
               -4,               -6,
                1,                1,
                0,                2,
               -4,               -6,
               -2,               -4,
                9,                5,
               -3,               -6,
               -9,              -12,
                2,                0,
                0,                2,
                0,               -1,
                0,               -1,
                2,                9,
                6,                2,
               -4,               -9,
               -7,               -3,
                9,                9,
                7,                3,
               -3,               -6,
               -3,               -5,
               -8,               -2,
                1,                0,
               -3,               -8,
              -12,                4,
                4,                7,
                7,                0,
               -1,                0,
                0,                0,
                0,                1,
                0,                1,
                1,                1,
                3,                3,
                2,               -5,
               -8,               -3,
               -3,               -1,
               -1,               -3,
                3,                3,
                4,                4,
                2,               -4,
               -9,               -1,
               -2,               -2,
                2,                2,
                2,                4,
                5,                5,
                3,                0,
               -5,               -7,
               -1,               -2,
               -6,               -5,
               -1,               -6,
                1,               -1,
               -6,                5,
               -5,              -10,
                4,                2,
                2,                0,
                0,                1,
                1,                0,
                2,                1,
               -1,                3,
                3,               -1,
               12,                3,
                3,                3,
                0,               -2,
               -4,               -4,
               -4,                5,
               -1,               -9,
                1,                0,
               -1,                0,
               -1,                0,
                0,                0,
                1,                0,
               -1,               -2,
                0,               -1,
               -2,               -1,
               -1,                0,
                2,                8,
                4,                4,
                6,                4,
                0,               -2,
               -2,                0,
                0,               -1,
               -2,                1,
                2,                0,
               -3,               -2,
                7,                1,
                1,               -1,
               -3,                2,
               -1,               -3,
               -4,                6,
                0,                1,
               -3,               -1,
                5,                0,
                0,               -2,
                1,               -2,
               -2,               -2,
               -6,               -2,
                2,                5,
                0,               -2,
               10,                5,
               -1,                1,
                0,                0,
               -1,               -1,
               -1,                7,
                5,               -2,
                0,                0,
                0,               -4,
               -1,               -3,
               -2,               -1,
               -2,               -3,
                1,               -1,
               -1,               -2,
                3,                0,
                0,                0,
                1,                1,
               -2,               -5,
                1,                1,
                0,                2,
                2,                1,
                1,               -3,
                1,                2,
                0,                3,
                0,               -2,
                2,                1,
                2,                3,
                1,                0,
               -1,               -3,
                0,               -1,
               -1,               -2,
                0,                0,
                1,                3,
                5,                1,
               -1,                1,
               -4,                5,
                0,                2,
                1,                1,
                0,                0,
               -1,                0,
                0,               -2,
               -1,                1,
                2,                0,
               -5,                4,
               -1,                0,
                1,                0,
               -2,                1,
               -6,                4,
                0,                0,
               -2,                0,
                0,               -1,
                1,               -1,
               -1,               -1,
                0,               -3,
               -2,                0,
                1,                1,
               -1,                4,
                1,                0,
                0,                2,
               -1,                2,
               -3,                0,
                3,                0,
                1,                0,
                1,                4,
                2,                0,
                2,                0,
                1,                0,
                0,                1,
                1,               -1,
                6,                2,
                0,                3,
               -1,               -3,
                0,               -2,
               -2,                1,
                1,                0,
                0,                0,
               -1,               -1,
                1,                6,
               -1,                0,
                0,               -1,
                1,                0,
                0,                1,
                0,               -1,
                1,                1,
                0,               -7,
               -1,               -3,
               -4,               -1,
               -2,                0,
                0,                1,
                0,                1,
                2,                1,
               -3,                0,
                0,                0,
                0,               -1,
                1,               -1,
               -1,                1,
                1,               -1,
                0,                2,
                0,                0,
                0,                3,
                1,                0,
                1,                1,
               -3,                0,
               -2,                1,
                1,                0,
                0,                0,
                1,                0,
                3,               -2,
                0,                0,
                1,                0,
               -1,                0,
                0,               -1,
                0,                0,
               -1,                0,
               -4,               -1,
               -2,               -3,
                0,                1,
                0,                0,
                0,               -1,
                1,                0,
                0,                1,
                0,                0,
               -1,                0,
                5,                0,
                1,               -1,
                2,               -3,
                1,               -1,
                0,                0,
                0,                0,
                0,                0
};

const SKP_Silk_NLSF_CBS SKP_Silk_NLSF_CB1_10_Stage_info[ NLSF_MSVQ_CB1_10_STAGES ] =
{
        {  32, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *   0 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[   0 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *  32 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[  32 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *  40 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[  40 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *  48 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[  48 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *  56 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[  56 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *  64 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[  64 ] },
        {   8, &SKP_Silk_NLSF_MSVQ_CB1_10_Q8[ 10 *  72 ], &SKP_Silk_NLSF_MSVQ_CB1_10_rates_Q4[  72 ] }
};

const SKP_Silk_NLSF_CB_struct SKP_Silk_NLSF_CB1_10 =
{
        NLSF_MSVQ_CB1_10_STAGES,
        SKP_Silk_NLSF_CB1_10_Stage_info,
        SKP_Silk_NLSF_MSVQ_CB1_10_ndelta_min_Q15,
        SKP_Silk_NLSF_MSVQ_CB1_10_CDF,
        SKP_Silk_NLSF_MSVQ_CB1_10_CDF_start_ptr
};

