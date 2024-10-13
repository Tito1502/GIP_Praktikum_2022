#include <iostream>

unsigned int laenge(const char* ptr)
{
    unsigned int counter = 0;
    while (ptr[counter] != '\0')
    {
        counter++;
    }

    return counter;
}

char* my_strconcat(const char* ptr1, const char* ptr2)
{
    char* output = new char[40];

    for (size_t i = 0; i < laenge(ptr1); i++)
    {
        if (ptr1[i] == '\0')
        {
            break;
        }

        output[i] = ptr1[i];
    }

    for (size_t a = 0; a < laenge(ptr2); a++)
    {
        if (ptr2[a] == '\0')
        {
            break;
        }

        output[laenge(ptr1) + a] = ptr2[a];
    }

    output[laenge(ptr1) + laenge(ptr2)] = '\0';

    return output;
}

int main()
{
    char input1[20], input2[20];

    std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";

    std::cin.getline(input1, 20);

    std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::cin.getline(input2, 20);

    char* ergebnis = my_strconcat(input1, input2);

    std::string tmp;
    for (size_t i = 0; i < laenge(ergebnis) + 1; i++)
    {
        if (ergebnis[i] == '\0')
        {
            break;
        }

        tmp += ergebnis[i];
    }
    std::cout << "Ergebnis my_strconcat(): " << tmp << std::endl;

    delete ergebnis;

    system("pause");
    return 0;
}