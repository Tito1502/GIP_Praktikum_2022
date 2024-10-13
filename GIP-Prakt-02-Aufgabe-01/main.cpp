#include <iostream>

void celsiusToFahreneinheit()
{
    double celsius;
    std::cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
    std::cin >> celsius;
    std::cout << "Die Temperatur in Fahrenheit lautet: " << celsius * 1.8 + 32 << std::endl;
}

void meterToFuss()
{
    double meter;
    std::cout << "Bitte geben Sie die Laenge in Metern ein: ? ";
    std::cin >> meter;
    std::cout << "Die Laenge in Fuss lautet: " << meter * 3.2808 << std::endl;
}

void euroToDollar()
{
    double euro;
    std::cout << "Bitte geben Sie die Geldmenge in Euro ein: ? ";
    std::cin >> euro;
    std::cout << "Die Geldmenge in US Dollar lautet: " << euro * 1.2957 << std::endl;
}

void Aufgabe4()
{
    double eingabe;
    int auswahl;
    double ergebnis;

    std::cout << "Ihre Eingabe: ? ";
    std::cin >> eingabe;
    std::cout << "\nIhre Auswahl der Umwandlung:\n"
                 " 1 - Celsius in Fahrenheit\n"
                 " 2 - Meter in Fuss\n"
                 " 3 - Euro in US Dollar\n";
    std::cin >> auswahl;

    ergebnis = (eingabe * 1.8 + 32) * (((auswahl - 2) * (auswahl - 3)) / 2) +
               (eingabe * 3.2808) * (((auswahl - 1) * (auswahl - 3)) * -1) +
               (eingabe * 1.2957) * (((auswahl - 1) * (auswahl - 2)) / 2);

    std::cout << "Das Ergebnis lautet: " << ergebnis << "\n\n";
}

void positionImAlphabet()
{
    char buchstabe;
    std::cout << "Bitte geben Sie den Buchstaben ein: ? ";
    std::cin >> buchstabe;
    std::cout << "Der Buchstabe " << buchstabe << " hat die Position " << int(buchstabe) - 96 << " im Alphabet." << std::endl;
}

void test()
{
    int auswahl = 2;
    int test = ((auswahl - 2) * (auswahl - 3)) / 2;
    int test2 = (auswahl - 1) * (auswahl - 3) * -1;
    int test3 = ((auswahl - 1) * (auswahl - 2)) / 2;

    std::cout << test2 << std::endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}