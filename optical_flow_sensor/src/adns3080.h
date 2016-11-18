#ifndef ADNS_H_
#define ADNS_H_

#include "defaults.h"
#include "global.h"
#include "spi.h"
#include "uart.h"
#include <util/delay.h>
#include <stdio.h>

// ADNS3080 Registers
#define PRODUCT_ID 0x00
#define MOTION 0x02
#define DELTA_X 0x03
#define DELTA_Y 0x04
#define SQUAL 0x05
#define PIXEL_SUM 0x06
#define MAXIMUM_PIXEL 0x07
#define CONFIGURATION_BITS 0x0A
#define EXTENDEND_CONFIG 0x0B
#define DATA_OUT_LOWER 0x0C
#define DATA_OUT_UPPER 0x0D
#define SHUTTER_LOWER 0x0E
#define SHUTTER_UPPER 0x0F
#define FRAME_PERIOD_LOWER 0x10
#define FRAME_PERIOD_UPPER 0x11
#define MOTION_CLEAR 0x12
#define FRAME_CAPTURE 0x13
#define INVERSE_PRODUCT_ID 0x3F
#define PIXEL_BURST 0x40
#define MOTION_BURST 0x50

#define RESOLUTION 30

void configuration_read_and_write_test(void);
uint8_t getConfigurationBits(void);
void getFrame(uint8_t *image);
void getFrameBurst(uint8_t *image);
uint8_t getInverseProductId(void);
void getMotion(int8_t *motion);
void getMotionBurst(uint8_t *burst);
uint8_t getProductId(void);
void printFrame(uint8_t *image);
void printFrameBinary(uint8_t *image);
void printFrameFromPixelBuffer(uint8_t *image);
void printMotion(int8_t *motion);
void printMotionBurst(int8_t *motion);
void printMotionBurstInRobot(int8_t *motion);
void printPixelBuffer(uint8_t *image);
uint8_t read(uint8_t address);
void reset(void);
void setConfigurationBits(uint8_t conf);
void write(uint8_t address, uint8_t value);

#endif