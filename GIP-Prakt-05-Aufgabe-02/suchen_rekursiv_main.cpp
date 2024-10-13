#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
using namespace std;

#include "suchen_rekursiv.h"

int main()
{
    Catch::Session().run();

    string text, zkette;

    cout << "Bitte geben Sie den Text ein: ";
    getline(cin, text);

    cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
    getline(cin, zkette);

    int ergebnis = zeichenkette_suchen_rekursiv(text, zkette);

    if ( ergebnis == -1)
    {
        cout << "Die Zeichenkette '" << zkette <<"' ist NICHT in dem Text '" << text <<"' enthalten." << endl;
    }
    else
    {
        cout << "Die Zeichenkette '" << zkette << "' ist in dem Text '"<< text <<"' enthalten." << endl;
        cout << "Sie startet ab Zeichen "<< ergebnis << " (bei Zaehlung ab 0)." << endl;
    }

    system("PAUSE");
    return 0;
}

/*
g++ -o main.exe test_suchen_rekursiv.cpp  suchen_rekursiv.cpp suchen_rekursiv_main.cpp
*/