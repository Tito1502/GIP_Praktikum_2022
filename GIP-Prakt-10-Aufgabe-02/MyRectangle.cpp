#include "MyRectangle.h"
#include "MyCanvas.h"

MyRectangle::MyRectangle(MyCanvas &canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
	this->canvas_ptr = &canvas;
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

// Getter
int MyRectangle::get_x1() const
{
	return this->x1;
}

int MyRectangle::get_y1() const
{
	return this->y1;
}

int MyRectangle::get_x2() const
{
	return this->x2;
}

int MyRectangle::get_y2() const
{
	return this->y2;
}

MyCanvas* MyRectangle::get_canvas_ptr() const
{
	return this->canvas_ptr;
}

// Setter
void MyRectangle::set_x1(unsigned int number)
{
	this->x1 = number;
}

void MyRectangle::set_y1(unsigned int number)
{
	this->y1 = number;
}

void MyRectangle::set_x2(unsigned int number)
{
	this->x2 = number;
}

void MyRectangle::set_y2(unsigned int number)
{
	this->y2 = number;
}

void MyRectangle::set_canvas_ptr(MyCanvas* canvas_ptr)
{
	this->canvas_ptr = canvas_ptr;
}

//
void MyRectangle::draw()
{
	this->canvas_ptr->draw_rectangle(this->x1, this->y1, this->x2, this->y2);
}
