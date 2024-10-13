#include <iostream>
#include <string>

using namespace std;

void sudoku()
{
    int sudoku[9][9] = {0};
    string eingabe[11];

    string line = "";

    cout << "Bitte geben Sie das Sudoku ein:" << endl;

    for (int i = 0; i < 11; i++)
    {
        getline(cin, line);

        eingabe[i] = line;
    }

    int row = 0;

    for (int i = 0; i < 11; i++)
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

    cout << "\nDas Sudoku lautet: " << endl;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cout << ';' << sudoku[i][j];
            if ((j + 1) % 3 == 0 && j < 8)
            {
                cout << ";//";
            }
        }
        cout << endl;
        if ((i + 1) % 3 == 0 && i < 8)
        {
            cout << "=======//=======//=======" << endl;
        }
    }
}

int main()
{
    sudoku();
    system("pause");
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


;5;1;4;//;8;6;9;//;7;2;3
;8;7;2;//;3;4;5;//;6;1;9
;9;6;3;//;2;1;7;//;5;4;8
=======//=======//=======
;6;2;8;//;1;3;4;//;9;5;7
;1;9;7;//;6;5;2;//;8;3;4
;4;3;5;//;7;9;8;//;1;6;2
=======//=======//=======
;2;4;6;//;9;7;1;//;3;8;5
;7;5;1;//;4;8;3;//;2;9;6
;3;8;9;//;5;2;6;//;4;7;1
*/