#include "MyFramedRectangle.h"

void MyFramedRectangle::draw()
{
	MyRectangle::draw();
	
	for (unsigned int row = y1; row <= y2; row++)
	{
		for (unsigned int col = x1; col <= x2; col++)
		{
			if ((col == x1 || col == x2) || (row == y1 || row == y2))
			{
				this->canvas_ptr->set(col, row, '+');
			}
		}
	}
}
