/**
  Summary:
  This header file was created using Microchip Digital Compensator Design Tool (DCDT)
  and includes system summary and digital compensator coefficients. This file
  should be included in the MPLAB X project directory.

  File Name:     vmc_dcdt.h
  Project Name:  vmc
  Date:          3/14/2024
  Time:          16:39.09

  Software License Agreement

  Copyright ? 2024 Microchip Technology Inc.  All rights reserved.
  Microchip licenses to you the right to use, modify, copy and distribute
  Software only when embedded on a Microchip microcontroller or digital
  signal controller, which is integrated into your product or third party
  product (pursuant to the sublicense terms in the accompanying license
  agreement).

  You should refer to the license agreement accompanying this Software
  for additional information regarding your rights and obligations.

  SOFTWARE AND DOCUMENTATION ARE PROVIDED ¡°AS IS¡± WITHOUT WARRANTY OF ANY
  KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
  OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
  PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
  OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
  BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
  DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
  INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
  COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
  CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
  OR OTHER SIMILAR COSTS.
 **/
#ifndef _VMC_DCDT_DEFINES_H
#define _VMC_DCDT_DEFINES_H

/**
  Compensator Type:  2P2Z
      Entry                Value  
    ---------            ---------
  Pole 0                 5.0000e+01 Hz
  Pole 2                 5.0000e+04 Hz
  Zero 1                 3.0000e+03 Hz
  Gain(Kdc)              2.000
  Warp                   false
  PWM Frequency          5.9000e+04
  PWM Sampling Ratio     1
  Sampling Frequency     5.9000e+04
  PWM Max Resolution     2.0000e-09
  Computational Delay    1.3500e-06
  Gate Drive Delay       1.5000e-07
  Control Output Min.    5000
  Control Output Max.    10000
  Kuc Gain               3.2781e+01
  Use Kuc Gain           true


  PWM Calculations
      Name                Value  
    ---------           ---------
  Bits of Resolution    13.049
  Gain                  1.180e-04


  s-domain transfer function

               Wp0   Wp2(Wz1 + s)
  H(s) = Kdc X --- X ------------
                s    Wz1(Wp2 + s)

                  3.14e+02   3.14e+05(1.88e+04 + s)
  H(s) = 2.000 X -------- X ----------------------
                     s       1.88e+04(3.14e+05 + s)



  Digital Compensator Coefficients

  Name    Value     Normalized    Q15      Hex
  ----    -----     ----------    ---      ---
  a1      0.546     0.546         17894    0x45E6
  a2      0.454     0.454         14873    0x3A19
  b0      0.921     0.921         30186    0x75EA
  b1      0.254     0.254         8315     0x207B
  b2      -0.667    -0.667        -21870   0xAA92


  z-domain transfer function

         u(z)  B0 + B1z^(-1) + B2z^(-2)
  H(z) = --- = ------------------------
         e(z)  A0 - A1z^(-1) - A2z^(-2)

          (0.028) + (0.008)z^(-1) + (-0.020)z^(-2)
  H(z) = ---------------------------------------------
          1 - (0.546)z^(-1) - (0.454)z^(-2)

**/


// Compensator Coefficient Defines
#define VMC_COMP_2P2Z_COEFF_A1      0x45E6
#define VMC_COMP_2P2Z_COEFF_A2      0x3A19
#define VMC_COMP_2P2Z_COEFF_B0      0x75EA
#define VMC_COMP_2P2Z_COEFF_B1      0x207B
#define VMC_COMP_2P2Z_COEFF_B2      0xAA92
#define VMC_COMP_2P2Z_POSTSCALER    0x7FFF
#define VMC_COMP_2P2Z_POSTSHIFT     0x0000
#define VMC_COMP_2P2Z_PRESHIFT      0x0000


// Compensator Clamp Limits
#define VMC_COMP_2P2Z_MIN_CLAMP    0x1388
#define VMC_COMP_2P2Z_MAX_CLAMP    0x2710


#endif
