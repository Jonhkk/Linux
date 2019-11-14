/*
 * main.c
 *
 *  Created on: 23.10.2019
 *      Author: Johannes Koski
 */

#include <errno.h>
#include "timers_init.h"
#include "ioconfig.h"

int main (void){
	io_init();
	io_interrupt_init();
    timers_init();
    //while (1) {
    	//sleep(1);
    //}
    return 0;
}
