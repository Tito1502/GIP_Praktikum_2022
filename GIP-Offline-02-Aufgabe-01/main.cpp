#include <iostream>

int main()
{
    double seitenlaenge;

    std::cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
    std::cin >> seitenlaenge;
    std::cout << "Der Umfang des Quadrats betraegt (in cm): " << seitenlaenge * 4 << std::endl;
    std::cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << seitenlaenge * seitenlaenge << std::endl;

    system("pause");
    return 0;
}