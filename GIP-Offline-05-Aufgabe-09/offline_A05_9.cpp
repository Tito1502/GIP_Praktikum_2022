#include <iostream>
#include <string>
using namespace std;

string trimme(string s)
{
    int counter = 0;
    int counter2 = 0;

    string tmp = "";

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '+')
        {
            counter2++;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < s.length() - counter2; i++)
    {
        if (s[i] == '+')
        {
            counter++;
        }
        else
        {
            break;
        }
    }

    for (int i = counter; i < s.length() - counter2; i++)
    {
        tmp += s[i];
    }
    
    return tmp;
}

int main()
{
    string s = "";

    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s);

    cout << "Vorher: " << s << endl;
    cout << "Nachher: " << trimme(s) << endl;
    system("PAUSE");
    return 0;
}