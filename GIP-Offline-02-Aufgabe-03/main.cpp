#include <iostream>

int main()
{
    double gesamtzahl, ersterKandidat, zweiterKandidat, dritterKandidat;

    std::cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
    std::cin >> gesamtzahl;

    std::cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
    std::cin >> ersterKandidat;

    std::cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
    std::cin >> zweiterKandidat;

    dritterKandidat = gesamtzahl - ersterKandidat - zweiterKandidat;

    std::cout << "Auf den dritten Kandidaten sind somit " << dritterKandidat << " Stimmen entfallen." << std::endl;

    std::cout << "Kandidat 1 erhielt " << (ersterKandidat / gesamtzahl) * 100 << "% der Stimmen." << std::endl;
    std::cout << "Kandidat 2 erhielt " << (zweiterKandidat / gesamtzahl) * 100 << "% der Stimmen." << std::endl;
    std::cout << "Kandidat 3 erhielt " << (dritterKandidat / gesamtzahl) * 100 << "% der Stimmen." << std::endl;

    system("pause");
    return 0;
}