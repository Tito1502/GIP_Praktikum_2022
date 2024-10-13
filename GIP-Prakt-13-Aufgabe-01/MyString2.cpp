#include <iostream>
#include "MyString2.h"
#include "CharListenKnoten.h"

MyString2::MyString2(std::string tmp) : anker{ nullptr }
{
	for (size_t i = 0; i < tmp.length(); i++)
	{
		hinten_anfuegen(anker, tmp[i]);
	}
}

MyString2::MyString2(const MyString2& orig)
{
	this->anker = deep_copy(orig.get_anker());
}

MyString2& MyString2::operator = (const MyString2& orig)
{
	loesche_alle(anker);

	this->anker = deep_copy(orig.get_anker());

	return *this;
}

MyString2 MyString2::operator+(char c) const
{
	MyString2 tmp(*this);

	hinten_anfuegen(tmp.anker, c);

	return tmp;
}

MyString2::~MyString2()
{
	loesche_alle(this->anker);
}


unsigned int MyString2::length() const
{
	unsigned int counter = 0;

	CharListenKnoten* ptr = this->anker;

	while (ptr != nullptr)
	{
		ptr = ptr->get_next();
		counter++;
	}

	return counter;
}

char MyString2::at(unsigned int pos) const
{
	if (length() <= pos)
	{
		return '\0';
	}

	CharListenKnoten* ptr = this->anker;

	for (size_t i = 0; i < pos; i++)
	{
		ptr = ptr->get_next();
	}

	return ptr->get_data();
}

std::string MyString2::to_string() const
{
	std::string tmp;

	CharListenKnoten* ptr = this->anker;

	while (ptr != nullptr)
	{
		tmp += ptr->get_data();
		ptr = ptr->get_next();	
	}
	
	return tmp;
}