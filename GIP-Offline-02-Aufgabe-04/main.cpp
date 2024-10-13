#include <iostream>

int sekundenrechner(int stunden, int minuten, int sekunden)
{
    int sekundenInsgesamt;

    sekundenInsgesamt = stunden * 3600 + minuten * 60 + sekunden;

    std::cout << stunden << ":" << minuten << " Uhr und " << sekunden << " Sekunden sind in Sekunden seit Mitternacht: "
              << sekundenInsgesamt << "\n\n";

    return sekundenInsgesamt;
}

void berechneDifferenz(int sekunden1, int sekunden2)
{
    int stunden, minuten, sekunden;
    int zeit = sekunden2 - sekunden1;

    stunden = zeit / 3600;
    zeit = zeit % 3600;
    minuten = zeit / 60;
    zeit = zeit % 60;
    sekunden = zeit;

    std::cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:\n"
              << stunden << " Stunden, " << minuten << " Minuten und "
              << sekunden << " Sekunden." << std::endl;
}

int main()
{
    int stunden, minuten, sekunden;

    std::cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
    std::cin >> stunden;

    std::cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? ";
    std::cin >> minuten;

    std::cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
    std::cin >> sekunden;

    int uhr1 = sekundenrechner(stunden, minuten, sekunden);

    std::cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
    std::cin >> stunden;

    std::cout << "Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? ";
    std::cin >> minuten;

    std::cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
    std::cin >> sekunden;

    int uhr2 = sekundenrechner(stunden, minuten, sekunden);

    berechneDifferenz(uhr1, uhr2);

    system("pause");
    return 0;
}