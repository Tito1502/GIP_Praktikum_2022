#pragma once

class CharListenKnoten
{
private:
	char data;
	CharListenKnoten* next;
	int my_id;

public:
	static int next_available_id;
	static int object_count;

	CharListenKnoten(char tmp, CharListenKnoten* knoten = nullptr);
	CharListenKnoten(const CharListenKnoten& orig);
	~CharListenKnoten();

	char get_data() const { return this->data; }
	CharListenKnoten* get_next() const { return this->next; }
	int get_my_id() const { return this->my_id; }

	void set_data(char tmp) { data = tmp; }
	void set_next(CharListenKnoten* tmp) { next = tmp; }
};

void hinten_anfuegen(CharListenKnoten*& anker, const char wert);

void loesche_alle(CharListenKnoten*& anker);

CharListenKnoten* deep_copy(CharListenKnoten* orig);

