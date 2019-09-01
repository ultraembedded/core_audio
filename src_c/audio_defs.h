//-----------------------------------------------------------------
//                      Audio Controller
//                           V0.1
//                     Ultra-Embedded.com
//                     Copyright 2012-2019
//
//                 Email: admin@ultra-embedded.com
//
//                         License: GPL
// If you would like a version with a more permissive license for
// use in closed source commercial applications please contact me
// for details.
//-----------------------------------------------------------------
//
// This file is open source HDL; you can redistribute it and/or 
// modify it under the terms of the GNU General Public License as 
// published by the Free Software Foundation; either version 2 of 
// the License, or (at your option) any later version.
//
// This file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public 
// License along with this file; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//-----------------------------------------------------------------

//-----------------------------------------------------------------
//                          Generated File
//-----------------------------------------------------------------

#ifndef __AUDIO_DEFS_H__
#define __AUDIO_DEFS_H__

#define AUDIO_CFG         0x0
    #define AUDIO_CFG_INT_THRESHOLD_SHIFT        0
    #define AUDIO_CFG_INT_THRESHOLD_MASK         0xffff

    #define AUDIO_CFG_BYTE_SWAP                  16
    #define AUDIO_CFG_BYTE_SWAP_SHIFT            16
    #define AUDIO_CFG_BYTE_SWAP_MASK             0x1

    #define AUDIO_CFG_CH_SWAP                    17
    #define AUDIO_CFG_CH_SWAP_SHIFT              17
    #define AUDIO_CFG_CH_SWAP_MASK               0x1

    #define AUDIO_CFG_TARGET_SHIFT               18
    #define AUDIO_CFG_TARGET_MASK                0x3

    #define AUDIO_CFG_VOL_CTRL_SHIFT             24
    #define AUDIO_CFG_VOL_CTRL_MASK              0x7

    #define AUDIO_CFG_BUFFER_RST                 31
    #define AUDIO_CFG_BUFFER_RST_SHIFT           31
    #define AUDIO_CFG_BUFFER_RST_MASK            0x1

#define AUDIO_STATUS      0x4
    #define AUDIO_STATUS_LEVEL_SHIFT             16
    #define AUDIO_STATUS_LEVEL_MASK              0xffff

    #define AUDIO_STATUS_FULL                    1
    #define AUDIO_STATUS_FULL_SHIFT              1
    #define AUDIO_STATUS_FULL_MASK               0x1

    #define AUDIO_STATUS_EMPTY                   0
    #define AUDIO_STATUS_EMPTY_SHIFT             0
    #define AUDIO_STATUS_EMPTY_MASK              0x1

#define AUDIO_CLK_DIV     0x8
    #define AUDIO_CLK_DIV_WHOLE_CYCLES_SHIFT     0
    #define AUDIO_CLK_DIV_WHOLE_CYCLES_MASK      0xffff

#define AUDIO_CLK_FRAC    0xc
    #define AUDIO_CLK_FRAC_NUMERATOR_SHIFT       0
    #define AUDIO_CLK_FRAC_NUMERATOR_MASK        0xffff

    #define AUDIO_CLK_FRAC_DENOMINATOR_SHIFT     16
    #define AUDIO_CLK_FRAC_DENOMINATOR_MASK      0xffff

#define AUDIO_FIFO_WRITE  0x20
    #define AUDIO_FIFO_WRITE_CH_B_SHIFT          0
    #define AUDIO_FIFO_WRITE_CH_B_MASK           0xffff

    #define AUDIO_FIFO_WRITE_CH_A_SHIFT          16
    #define AUDIO_FIFO_WRITE_CH_A_MASK           0xffff

#endif