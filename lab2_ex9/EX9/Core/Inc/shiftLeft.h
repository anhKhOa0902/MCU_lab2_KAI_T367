/*
 * shiftLeft.h
 *
 *  Created on: Oct 8, 2024
 *      Author: LAPTOP
 */

#ifndef INC_SHIFTLEFT_H_
#define INC_SHIFTLEFT_H_
int matrix[8][8];
void cloneMatrix()
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			matrix[i][j] = matrixA[i][j];
		}
	}
}
void shiftLeft(int matrix[8][8])
{
	int a = 0;
	for(int i=0; i<8;i++)
	{
		a = matrix[i][0];
		for(int j=0; j<7; j++)
		{
			matrix[i][j] = matrix[i][j+1];
		}
		matrix[i][7] = a;
	}
}



#endif /* INC_SHIFTLEFT_H_ */
