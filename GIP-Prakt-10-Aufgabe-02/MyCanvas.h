#pragma once
#include <iostream>

class MyCanvas
{
protected:
	unsigned int size_x;
	unsigned int size_y;
	char* canvas_array_ptr;



public:
	MyCanvas(unsigned int size_x_tmp, unsigned int size_y_tmp);

	void init();

	int get_size_x() const;
	int get_size_y() const;
	char* get_canvas_array_ptr() const;


	void set_size_x(unsigned int size);
	void set_size_y(unsigned int size);
	void set_canvas_array_ptr(char* canvas_array);

	void set(unsigned int x, unsigned int y, char c);
	char get(unsigned int x, unsigned int y) const;
	std::string to_string() const;
	void print() const;
	void draw_rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);

	MyCanvas& operator = (const MyCanvas& orig);
	MyCanvas(const MyCanvas& orig_MyCanvas);
	~MyCanvas();


};
