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
unsigned int MyRectangle::get_x1() const
{
	return this->x1;
}

unsigned int MyRectangle::get_y1() const
{
	return this->y1;
}

unsigned int MyRectangle::get_x2() const
{
	return this->x2;
}

unsigned int MyRectangle::get_y2() const
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

void MyRectangle::draw()
{
	this->canvas_ptr->draw_rectangle(this->x1, this->y1, this->x2, this->y2);
}

MyRectangle& MyRectangle::operator * (unsigned int i)
{
	MyCanvas canvas{ this->canvas_ptr->get_size_x(), this->canvas_ptr->get_size_y() };
	MyRectangle r1(canvas, this->x1, this->y1, this->x1 + ((this->x2 - this->x1)*i), this->y1 + ((this->y2 - this->y1) * i));
	r1.draw();

	return r1;
}

MyRectangle::MyRectangle(const MyRectangle& orig)
{
	this->x1 = orig.x1;
	this->y1 = orig.y1;
	this->x2 = orig.x2;
	this->y2 = orig.y2;

	this->canvas_ptr = orig.get_canvas_ptr();
}
