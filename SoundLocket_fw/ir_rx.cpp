/*
 * ir_rx.cpp
 *
 *  Created on: 24 мар. 2019 г.
 *      Author: Kreyl
 */

#include "ir_rx.h"
#include "board.h"
#include "kl_lib.h"



void IrRx_Init() {
    PinSetupOut(SNS_PWR_EN, omPushPull);
    PinSetLo(SNS_PWR_EN); // Enable power

}


