#ifndef CUST_FUNC_H
#define CUST_FUNC_H

// use uart0 for custom port

/**
  ʹ��PA2, PA3��Ϊ�ڶ������ڵ�pin��
  ��ʼ��ʱʹ��38400 ����
  ��setting mode��ʹ��9600��Ϊ�����轻���Ĵ�������
**/

#define CUST_UART_PORT         UART0_BASE
#define CUST_UART_BAUDRATE     38400

#define PERIPH_UART_BUADRATE   9600


#define SETTING_MODE_CODE   "ruff"

#define MAX_WAIT_TIME   6000/10

#define BUFFER_LENGTH   128

#define UNUSED_VARIABLE(X)  ((void)(X))


void cust_delay_2ms(void);

void cust_delay_10ms(void);

void cust_delay_100ms(int n);

void cust_uart_init(void);

void cust_uart_close(void);

void cust_uart_open(void);

void cust_uart_putChar(char ch);

// uart_print
void cust_uart_print( char *str, ...);


void wait_setting_mode( int time );


void periph_uart_init(void);

void periph_uart_open(void);


#endif //CUST_FUNC_H

