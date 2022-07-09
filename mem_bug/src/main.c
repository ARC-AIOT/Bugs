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
  int arr[10];
  int *arr2 = malloc(sizeof(int) * 10);
  int *arr3 = calloc(1, sizeof(int) * 10);

  for (int i = 0; i < 10; i++) {
    arr[i] = (1 << i);
    arr2[i] = (1 << i);
    arr3[i] = (1 << i);
  }
  printf("Use array index:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d %d %d\n", arr[i], arr2[i], arr[i]);
    board_delay_ms(100);
  }
  printf("Use relative ptr:\n");

  for (int i = 0; i < 10; i++) {
    printf("%d %d %d\n", *(arr + i), *(arr2 + i), *(arr + i));
    board_delay_ms(100);
  }

  return 0;
}
