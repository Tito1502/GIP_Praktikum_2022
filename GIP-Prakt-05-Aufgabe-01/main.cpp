#include <iostream>
#include <string>
using namespace std;

const int sudoku_groesse = 9;
const int eingabe_groesse = 11;

bool pruefe_spalten(int sudoku[][sudoku_groesse])
{
    bool gueltig = true;
    //Durch die Spalten gehen
    for (int column = 0; column < sudoku_groesse; column++)
    {
        //Jede Nummer von 1-9 durchgehen
        for (int number = 1; number <= sudoku_groesse; number++)
        {
            int counter = 0;

            // Jede Reihe in der Spalte nach der zahl überprüfen
            for (int row = 0; row < sudoku_groesse; row++)
            {
                if (number == sudoku[row][column])
                {
                    counter++;
                }
            }

            // Ausgabe ob eine Zahl mehrmals vorkommt oder garnicht vorkommt
            if (counter == 0)
            {
                cout << "Spalte " << column << ": Zahl " << number << " kommt nicht vor." << endl;
                gueltig = false;
            }
            else if (counter > 1)
            {
                cout << "Spalte " << column << ": Zahl " << number << " kommt mehrfach vor." << endl;
                gueltig = false;
            }
        }
    }

    return gueltig;
}

bool pruefe_zeilen(int sudoku[][sudoku_groesse])
{
    bool gueltig = true;

    //Durch die Reiehen gehen
    for (int row = 0; row < sudoku_groesse; row++)
    {   
        //Jede Nummer von 1-9 durchgehen
        for (int number = 1; number <= sudoku_groesse; number++)
        {
            int counter = 0;
            
            // Jede Spalte in der Reihe nach der zahl überprüfen
            for (int column = 0; column < sudoku_groesse; column++)
            {
                if (number == sudoku[row][column])
                {
                    counter++;
                }
            }

            // Ausgabe ob eine Zahl mehrmals vorkommt oder garnicht vorkommt
            if (counter == 0)
            {
                cout << "Zeile " << row << ": Zahl " << number << " kommt nicht vor." << endl;
                gueltig = false;
            }
            else if (counter > 1)
            {
                cout << "Zeile " << row << ": Zahl " << number << " kommt mehrfach vor." << endl;
                gueltig = false;
            }
        }
    }

    return gueltig;
}

bool pruefe_bloecke(int sudoku[][sudoku_groesse])
{
    bool gueltig = true;

    //Durch jeden Block gehen
    for (int block = 0; block < sudoku_groesse; block++)
    {   
        //Jede Nummer von 1-9 durchgehen
        for (int number = 1; number <= sudoku_groesse; number++)
        {
            int counter = 0;

            //Durch die Reihen gehen
            for (int row = block / 3 * 3; row <= block / 3 * 3 + 2; row++)
            {   
                //Durch die Spalten gehen
                for (int column = block % 3 * 3; column <= block % 3 * 3 + 2; column++)
                {
                    if (number == sudoku[row][column])
                    {
                        counter++;
                    }
                }
            }

            // Ausgabe ob eine Zahl mehrmals vorkommt oder garnicht vorkommt
            if (counter == 0)
            {
                cout << "Block " << block << ": Zahl " << number << " kommt nicht vor." << endl;
                gueltig = false;
            }
            else if (counter > 1)
            {
                cout << "Block " << block << ": Zahl " << number << " kommt mehrfach vor." << endl;
                gueltig = false;
            }
        }
    }

    return gueltig;
}

void konvertiere(string eingabe[], int sudoku[][sudoku_groesse])
{
    int row;

    for (int i = 0; i < eingabe_groesse; i++)
    {
        int column = 0;

        if (eingabe[i][0] == '-')
        {
            continue;
        }

        for (int a = 0; a < eingabe[i].length(); a++)
        {
            if (eingabe[i][a] != '.' && eingabe[i][a] != '|')
            {
                sudoku[row][column] = int(eingabe[i][a] - '0');

                column++;
            }
        }
        row++;
    }
}

int main()
{
    int sudoku[sudoku_groesse][sudoku_groesse] = {0};
    string eingabe[eingabe_groesse];

    cout << "Bitte geben Sie das Sudoku ein:" << endl;
    for (int i = 0; i < eingabe_groesse; i++)
        getline(cin, eingabe[i]);

    konvertiere(eingabe, sudoku);

    bool ps = pruefe_spalten(sudoku);
    bool pz = pruefe_zeilen(sudoku);
    bool pb = pruefe_bloecke(sudoku);

    if (ps && pz && pb)
        cout << "Das Sudoku ist gueltig." << endl;
    system("PAUSE");
    return 0;
}

/*
.5.1.4.|.8.6.9.|.7.2.3
.8.7.2.|.3.4.5.|.6.1.9
.9.6.3.|.2.1.7.|.5.4.8
-------|-------|-------
.6.2.8.|.1.3.4.|.9.5.7
.1.9.7.|.6.5.2.|.8.3.4
.4.3.5.|.7.9.8.|.1.6.2
-------|-------|-------
.2.4.6.|.9.7.1.|.3.8.5
.7.5.1.|.4.8.3.|.2.9.6
.3.8.9.|.5.2.6.|.4.7.1
*/