#include "CharListenKnoten.h"

int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;

CharListenKnoten::CharListenKnoten(char data, CharListenKnoten* knoten) : data{ data }, next{ knoten }
{ 
	my_id = next_available_id;
	next_available_id++;
	object_count++;
}

CharListenKnoten::~CharListenKnoten()
{
	object_count--;
}

CharListenKnoten::CharListenKnoten(const CharListenKnoten& orig)
{
    this->data = orig.get_data();
    this->my_id = this->next_available_id;
    this->next_available_id++;

    this->object_count++;

     this->next = orig.get_next();
}

void hinten_anfuegen(CharListenKnoten*& anker, const char wert)
{
    CharListenKnoten* neuer_eintrag = new CharListenKnoten(wert);

    if (anker == nullptr)
    {
        anker = neuer_eintrag;
    }
    else
    {
        CharListenKnoten* ptr = anker;
        while (ptr->get_next() != nullptr)
        {
            ptr = ptr->get_next();
        }
        ptr->set_next(neuer_eintrag);
    }
}

void loesche_alle(CharListenKnoten*& anker)
{
    while (anker != nullptr)
    {
        CharListenKnoten* next = anker->get_next();
        delete anker;
        anker = next;
    }

    anker = nullptr;
}


CharListenKnoten* deep_copy(CharListenKnoten* orig)
{
    if (orig == nullptr)
    {
        return nullptr;
    }

    CharListenKnoten* copy_anker = new CharListenKnoten(orig->get_data());
    CharListenKnoten* copy_current = copy_anker;
    CharListenKnoten* orig_current = orig->get_next();

    while (orig_current != nullptr)
    {
        copy_current->set_next(new CharListenKnoten(orig_current->get_data()));
        copy_current = copy_current->get_next();
        orig_current = orig_current->get_next();
    }

    return copy_anker;
}