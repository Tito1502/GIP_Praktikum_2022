#include <iostream>


int zeichenkette_suchen_rekursiv(std::string text, std::string zkette, size_t text_pos, size_t text_such_pos, size_t zkette_such_pos)
{

    if (text[text_such_pos] == zkette[zkette_such_pos])
    {
        if (zkette.length() - 1 == zkette_such_pos)
        {
            return text_pos;
        }
        
        return zeichenkette_suchen_rekursiv(text, zkette, text_pos, text_such_pos +1, zkette_such_pos +1);
    }
    else if (text_pos < text.length())
    {
        return zeichenkette_suchen_rekursiv(text, zkette, text_pos + 1,text_pos + 1 , 0);
    }
    
    return -1;
}
