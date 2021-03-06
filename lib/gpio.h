/*
 * gpio.h:
 *      Copyright (c) 2015 David Mandala <david.mandala@linaro.org
 *
 ***********************************************************************
 * This file is part of 96BoardsGPIO:
 * https://
 *
 * This library (96BoardsGPIO) is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of the
 * License.
 * 
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 ***********************************************************************
 */
 
#define HIGH 1
#define LOW 0

struct GPIO_INFO {
    int SoC_number;
    int direction_fd;;
    int value_fd;
    char * gpio;
    char * path;
};

extern int init_96Boards_GPIO_library(char * );
extern int open_GPIO_Board_pin_number( int, struct GPIO_INFO * );
extern int open_GPIO_SoC_number( int, struct GPIO_INFO * );
extern int close_GPIO( struct GPIO_INFO * );
extern int setup_GPIO( struct GPIO_INFO *, char * );
extern int digitalRead( struct GPIO_INFO * );
extern int digitalWrite( struct GPIO_INFO *, int );
