/*
 * ioconfig.h
 *
 *  Created on: 23.10.2019
 *      Author: Jonttu
 */


#ifndef IOCONFIG_H_
#define IOCONFIG_H_

#define EXT_INT_PIN_1 8
#define DEBUG_PIN_1 9

int io_init(void);
void ext_int1_handler(void);
int io_interrupt_init(void);

#endif /* IOCONFIG_H_ */
