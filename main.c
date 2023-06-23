#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25;

    // Initialize the Pico SDK
    stdio_init_all();

    // Set the LED pin as an output
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (1) {
        // Toggle the LED state
        gpio_put(LED_PIN, !gpio_get(LED_PIN));

        // Delay for 500 milliseconds
        sleep_ms(500);
    }

    return 0;
}