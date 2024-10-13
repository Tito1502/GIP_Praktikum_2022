#pragma once
#include "MyCanvas.h"

class MyRectangle
{
protected:
	unsigned int x1, y1, x2, y2;
	MyCanvas* canvas_ptr;

public:
	MyRectangle(MyCanvas &canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);

	int get_x1() const;
	int get_y1() const;
	int get_x2() const;
	int get_y2() const;
	MyCanvas* get_canvas_ptr() const;


	void set_x1(unsigned int number);
	void set_y1(unsigned int number);
	void set_x2(unsigned int number);
	void set_y2(unsigned int number);
	void set_canvas_ptr(MyCanvas* canvas_ptr);

	void draw();

};
