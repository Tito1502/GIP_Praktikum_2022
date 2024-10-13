#include <iostream>

void Aufgabe1()
{
    int tag1, tag2, monat1, monat2, jahr1, jahr2;

    std::cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
    std::cin >> tag1;

    std::cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
    std::cin >> monat1;

    std::cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
    std::cin >> jahr1;

    std::cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
    std::cin >> tag2;

    std::cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
    std::cin >> monat2;

    std::cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
    std::cin >> jahr2;

    if (jahr1 < jahr2)
    {
        std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;
    }
    else if (jahr1 > jahr2)
    {
        std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
    }
    else
    {
        if (monat1 < monat2)
        {
            std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;
        }
        else if (monat1 > monat2)
        {
            std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
        }
        else
        {
            if (tag1 < tag2)
            {
                std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;
            }
            else if (tag1 > tag2)
            {
                std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
            }
            else
            {
                std::cout << "Beide Datumsangaben sind gleich." << std::endl;
            }
        }
    }
}

void Aufgabe2()
{
    int kleinsterWert, groessterWert, kleinsterWertStelle = 1, groessterWertStelle = 1;

    for (int i = 1; i <= 5; i++)
    {
        int Wert;

        std::cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
        std::cin >> Wert;

        if (i == 1)
        {
            kleinsterWert = Wert;
            groessterWert = Wert;
        }
        else
        {
            if (Wert < kleinsterWert)
            {
                kleinsterWert = Wert;
                kleinsterWertStelle = i;
            }
            else if (Wert > groessterWert)
            {
                groessterWert = Wert;
                groessterWertStelle = i;
            }
        }
    }

    std::cout << "Die " << kleinsterWertStelle << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << kleinsterWert << std::endl;
    std::cout << "Die " << groessterWertStelle << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << groessterWert << std::endl;
}

int main()
{
    Aufgabe2();
    system("pause");
    return 0;
}