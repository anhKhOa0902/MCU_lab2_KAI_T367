/*
 * updateLEDMatrix.h
 *
 *  Created on: Oct 7, 2024
 *      Author: LAPTOP
 */

#ifndef INC_UPDATELEDMATRIX_H_
#define INC_UPDATELEDMATRIX_H_



const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
void updateLEDMatrix(int index){
	switch(index)
	{
	case 0:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	}
}



#endif /* INC_UPDATELEDMATRIX_H_ */
