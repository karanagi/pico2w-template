#include "pico/stdlib.h"
#include "blink.h"

void init();

int
main(void)
{
	init();

	while (1) {
		gpio_xor_mask(1 << LED_PIN);
		sleep_ms(SLEEP_TIME);
	}
}

void 
init()
{
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_HIGH);
	gpio_put(LED_PIN, GPIO_LOW);
}
