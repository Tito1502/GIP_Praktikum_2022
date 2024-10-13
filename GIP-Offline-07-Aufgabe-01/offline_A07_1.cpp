#include <iostream>

std::string input[4] = {};

void getinput()
{
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << +"Textzeile = ? ";
        std::getline(std::cin, input[i]);
        if (input[i] == "")
        {
            break;
        }
    }
}

void get_longest(int &longest)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (input[i] == "")
        {
            break;
        }

        if (input[i].length() > longest)
        {
            longest = input[i].length();
        }
    }
}

void output()
{
    int longest = 0;
    get_longest(longest);

    for (size_t i = 0; i < 4; i++)
    {
        std::string tmp = "";

        if (input[i] == "")
        {
            break;
        }

        for (size_t a = 0; a < longest - input[i].length(); a++)
        {
            tmp += '#';
        }

        tmp += input[i];

        std::cout << tmp << std::endl;
    }
}

int main()
{
    getinput();
    if (input[0] == "")
    {
        system("pause");
        return 0;
    }
    output();

    system("pause");
    return 0;
}