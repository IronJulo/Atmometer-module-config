/*
 * i2c_slave.h
 *
 *  Created on: Jun 25, 2024
 *      Author: jules
 */

#ifndef INC_MODULE_AVAILABLE_H_
#define INC_MODULE_AVAILABLE_H_

#define MODULE_TYPE_NOT_CONFIGURED	0x00

#define MODULE_TYPE_DHT11_T			0x01
#define MODULE_TYPE_DHT11_H			0x02
#define MODULE_TYPE_DHT22_T			0x03
#define MODULE_TYPE_DHT22_H			0x04

#define MODULE_TYPE_PMS7003_1_0_um	0x05
#define MODULE_TYPE_PMS7003_2_5_um	0x06
#define MODULE_TYPE_PMS7003_10_um	0x07

#define MODULE_TYPE_MH_Z19			0x08

#define MODULE_ID_NOT_CONFIGURED	0xFF

#define MODULE_ADDRESS_NOT_CONFIGURED 0x00

#endif /* INC_MODULE_AVAILABLE_H_ */
