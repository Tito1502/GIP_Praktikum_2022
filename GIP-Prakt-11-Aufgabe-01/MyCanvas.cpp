#include <iostream>
#include "MyCanvas.h"

MyCanvas::MyCanvas(unsigned int size_x_tmp, unsigned int size_y_tmp)
{
	this->size_x = size_x_tmp;
	this->size_y = size_y_tmp;
	this->canvas_array_ptr = new char[size_x_tmp * size_y_tmp];

	init();
}

MyCanvas& MyCanvas::operator = (const MyCanvas& orig)
{
	delete canvas_array_ptr;

	int len = 0;
	while (orig.canvas_array_ptr[len] != '\0') len++;

	canvas_array_ptr = new char[len + 1];

	while (len >= 0)
	{
		canvas_array_ptr[len] = orig.canvas_array_ptr[len];
		len--;
	}

	this->size_x = orig.size_x;
	this->size_y = orig.size_y;

	return *this;
}

MyCanvas::MyCanvas(const MyCanvas& orig_MyCanvas)
{
	this->size_x = orig_MyCanvas.size_x;
	this->size_y = orig_MyCanvas.size_y;

	int len = 0;
	while (orig_MyCanvas.canvas_array_ptr[len] != '\0') len++;

	canvas_array_ptr = new char[len + 1];

	while (len >= 0)
	{
		canvas_array_ptr[len] = orig_MyCanvas.canvas_array_ptr[len];
		len--;
	}
}

MyCanvas::MyCanvas::~MyCanvas()
{
	delete canvas_array_ptr;
}




void MyCanvas::init()
{
	for (size_t i = 0; i < size_x * size_y; i++)
	{
		this->canvas_array_ptr[i] = '.';
	}
}


void MyCanvas::set(unsigned int x, unsigned int y, char c)
{
	this->canvas_array_ptr[y * this->size_x + x] = c;
}

char MyCanvas::get(unsigned int x, unsigned int y) const
{
	return this->canvas_array_ptr[y * this->size_x + x];
}

std::string MyCanvas::to_string() const
{
	std::string output = "";

	for (size_t i = 0; i < size_x * size_y; i++)
	{
		output += this->canvas_array_ptr[i];

		
		if ((i + 1) % size_x == 0)
		{
			output += '\n';
		}
	}

	return output;
}

void MyCanvas::print() const
{
	std::cout << to_string() << std::endl;
}

unsigned int MyCanvas::get_size_x() const
{
	return this->size_x;
}
unsigned int MyCanvas::get_size_y() const
{
	return this->size_y;
}

char* MyCanvas::get_canvas_array_ptr() const
{
	return this->canvas_array_ptr;
}

void MyCanvas::set_size_x(unsigned int size)
{
	this->size_x = size;
}

void MyCanvas::set_size_y(unsigned int size)
{
	this->size_y = size;
}



void MyCanvas::set_canvas_array_ptr(char* canvas_array)
{
	this->canvas_array_ptr = canvas_array;
}

void MyCanvas::draw_rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
	for (unsigned int row = y1; row <= y2; row++)
	{
		for (unsigned int col = x1; col <= x2; col++)
		{
			this->set(col, row, '#');
		}
	}
}

