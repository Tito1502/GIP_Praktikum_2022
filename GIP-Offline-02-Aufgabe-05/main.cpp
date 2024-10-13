#include <iostream>

int main()
{
    char buchstabe;

    std::cout << "Bitte geben Sie den Kleinbuchstaben ein: ? ";
    std::cin >> buchstabe;

    std::cout << "Der entsprechende Grossbuchstabe lautet: " << char(int(buchstabe) - 32) << std::endl;

    system("pause");
    return 0;
}