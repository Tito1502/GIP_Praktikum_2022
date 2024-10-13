#pragma once
#include <iostream>

#include "CharListenKnoten.h"

class MyString2
{
private:
	CharListenKnoten* anker;

public:
	MyString2() : anker{ nullptr } {};
	MyString2(std::string tmp);
	MyString2(const MyString2& orig);
	MyString2& operator = (const MyString2& orig);
	MyString2 operator + (char c) const;
	~MyString2();

	CharListenKnoten* get_anker() const { return this->anker; }
	unsigned int length() const;
	char at(unsigned int pos) const;
	std::string to_string() const;

	void set_anker(CharListenKnoten* tmp) {this->anker = tmp; }
};

