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

int function_ret;

int main(void) {
  printf("QQ\n"); // If you remove this line, the code failed to show "This is
                  // Lab1_Uart" in terminal
  uart0_ptr = hx_drv_uart_get_dev(USE_SS_UART_0);

  uart0_ptr->uart_open(UART_BAUDRATE_115200); // UART0 can't change baud

  sprintf(uart_buf, "This is Lab1_UART\r\n");
  uart0_ptr->uart_write(uart_buf, strlen(uart_buf));
  board_delay_ms(1000);
  return 0;
}
