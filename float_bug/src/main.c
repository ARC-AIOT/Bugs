#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "embARC.h"
#include "embARC_debug.h"
#include "board_config.h"
#include "arc_timer.h"
#include "hx_drv_spi_s.h"
#include "spi_slave_protocol.h"
#include "hardware_config.h"

#include "hx_drv_uart.h"
#define uart_buf_size 100

DEV_UART *uart0_ptr;
DEV_UART *uart1_ptr;

char uart_buf[uart_buf_size] = {0};
char str_buf[uart_buf_size] = {0};
char char_buf[10] = {0};
uint8_t char_cnt;
uint8_t uart_enter_flag;

int main(void) {
  float a, b;
  a = 3.141;
  b = 1.732;
  printf("Magic\n"); // Remove this line would cause bug.
  printf("%f %f", a, b);
  return 0;
}
