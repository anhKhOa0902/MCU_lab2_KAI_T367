/*
 * UpdateChar.h
 *
 *  Created on: Oct 7, 2024
 *      Author: LAPTOP
 */

#ifndef INC_UPDATECHARA_H_
#define INC_UPDATECHARA_H_

const int matrixA[8][8] = {
		{1, 1, 1, 0, 0, 1, 1, 1},
		{1, 1, 0, 1, 1, 0, 1, 1},
	 	{1, 0, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 0, 1},
		{1, 0, 1, 1, 1, 1, 0, 1}
};

GPIO_TypeDef* portArr[8] = {
		ROW0_GPIO_Port,
		ROW1_GPIO_Port,
		ROW2_GPIO_Port,
		ROW3_GPIO_Port,
		ROW4_GPIO_Port,
		ROW5_GPIO_Port,
		ROW6_GPIO_Port,
		ROW7_GPIO_Port
};

uint16_t pinArr[8] ={
		ROW0_Pin,
		ROW1_Pin,
		ROW2_Pin,
		ROW3_Pin,
		ROW4_Pin,
		ROW5_Pin,
		ROW6_Pin,
		ROW7_Pin
};
//ex9
/*void updateCharA(int index)
{
	switch(index)
		{
		case 0:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][0] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 1:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][1] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 2:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][2] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 3:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][3] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 4:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][4] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 5:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][5] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 6:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][6] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 7:
			for(int i = 0; i<8; i++)
			{
				if(matrixA[i][7] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
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
*/

void updateCharA(int index, int matrix[8][8])
{
	switch(index)
		{
		case 0:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][0] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 1:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][1] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 2:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][2] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 3:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][3] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 4:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][4] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 5:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][5] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 6:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][6] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 7:
			for(int i = 0; i<8; i++)
			{
				if(matrix[i][7] == 0)
				{
					HAL_GPIO_WritePin(portArr[i], pinArr[i], RESET);
				}
				else HAL_GPIO_WritePin(portArr[i], pinArr[i], SET);
			}
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
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
};

#endif /* INC_UPDATECHARA_H_ */
