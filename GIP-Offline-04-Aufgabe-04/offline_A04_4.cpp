#include <iostream>

int main()
{
    int breite, hoehe;

    std::cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
    std::cin >> breite;

    std::cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
    std::cin >> hoehe;

    for (size_t h = 0; h < hoehe; h++)
    {
        if (h > 0)
        {
            for (size_t i = 0; i < h; i++)
            {
                std::cout << ".";
            }
        }

        for (size_t b = 0; b < breite; b++)
        {
            if (h > 0 && h < hoehe - 1 && b > 0 && b < breite - 1)
            {
                std::cout << "+";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}