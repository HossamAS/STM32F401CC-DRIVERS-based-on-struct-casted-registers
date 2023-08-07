/**************************************/
/* Description : Keypad private h File*/
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 01:37:24  09 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef KEYPAD_PRIVATE_H
#define KEYPAD_PRIVATE_H
typedef struct {
	Pin_et aRowsPins_e[KEYPAD_ROWS_MAX_NUM];
	Pin_et aColumnsPins_e[KEYPAD_COLUMNS_MAX_NUM];
	uint8_kt RowsPinsNum;
	uint8_kt ColumnsPinsNum;
	uint8_kt au8AsciiMappingMatrix[KEYPAD_ROWS_MAX_NUM][KEYPAD_COLUMNS_MAX_NUM];
}KeypadConfig_st;

extern KeypadConfig_st au8KeypadConfig_s[];

#endif
