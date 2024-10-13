#include <iostream>

const int morse_data_len = 45;

struct T_Morse_Data
{
    char letter;
    std::string morse_code;
};
const T_Morse_Data morse_data[] = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."},
    {'0', "-----"},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    {' ', "///"},
    {'.', ".-.-.-"},
    {',', "--..--"},
    {':', "---..."},
    {'?', "..--.."},
    {'-', "-....-"},
    {'/', "-..-."},
    {'@', ".--.-."},
    {'=', "-...-"}};

int main()
{
    std::string input = "";

    std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::getline(std::cin, input);

    for (size_t i = 0; i < input.length(); i++)
    {
        for (size_t a = 0; a < morse_data_len; a++)
        {
            if (char(std::tolower(input[i])) == morse_data[a].letter)
            {
                std::cout << morse_data[a].morse_code << '#';
            }
        }
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}