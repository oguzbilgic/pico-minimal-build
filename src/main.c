#include <stdio.h>

#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/irq.h"

#define UART_ID uart0
#define BAUD_RATE 9600
#define UART_TX_PIN 0
#define UART_RX_PIN 1
#define MAX_MESSAGE_LENGTH 256


void  main() {
  gpio_init(25);

  gpio_set_dir(25, GPIO_OUT);


   stdio_init_all();

    // Setup UART
    uart_init(UART_ID, BAUD_RATE);

    // Set the GPIO pins for UART
    gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);

        char buffer[MAX_MESSAGE_LENGTH];


  while (true) {
    gpio_put(25, !gpio_get(25));


    // // Transmit a message via UART
    // const char *message = "Hello from Pico!\n";
    // uart_puts(UART_ID, message);


    // Check if data is available
    if (uart_is_readable(UART_ID)) {
        // Read data into buffer
        // uart_read_blocking
         uart_read_blocking(UART_ID, buffer, 1);
        
        // Echo the received data back
        // uart_write_blocking(UART_ID, buffer, length);
        printf("%s", buffer);
        sleep_ms(100);
    } else {
      printf("No data available\n");
    // Wait for a bit
    sleep_ms(1000);
    }
  }
}
