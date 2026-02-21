#ifndef		__BLINK_H
#define		__BLINK_H

#include <stdbool.h>

#define LED_PIN			15
#define SLEEP_TIME		500

enum {
	GPIO_LOW = false,
	GPIO_HIGH = true,
};

enum {
	GPIO_DIR_IN = false,
	GPIO_DIR_OUT = true,
};

#endif
