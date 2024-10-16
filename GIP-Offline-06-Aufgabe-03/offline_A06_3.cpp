#include <iostream>
using namespace std;

const char empty_pixel = '.';
const char filled_pixel = '#';
const int canvas_size = 40;

void init_canvas(char canvas[][canvas_size])
{
    for (int x = 0; x < canvas_size; x++)
        for (int y = 0; y < canvas_size; y++)
            canvas[x][y] = empty_pixel;
}
void print_canvas(char canvas[][canvas_size])
{
    for (int y = 0; y < canvas_size; y++)
    {
        for (int x = 0; x < canvas_size; x++)
        {
            cout << canvas[x][y];
        }
        cout << endl;
    }
    cout << endl;
}

void linie(int x1, int y1, int x2, int y2,
           char canvas[][canvas_size])
{
    if ((x1 + 1 == x2 || x1 - 1 == x2 || x1 == x2) && (y1 + 1 == y2 || y1 - 1 == y2 || y1 == y2))
    {
        canvas[x1][y1] = filled_pixel;
        canvas[x2][y2] = filled_pixel;
    }
    else
    {
        // Berechne die ganzzahligen Koordinaten des
        // Punktes in der Mitte zwischen den beiden
        // Ausgangspunkten:
        int x_mitte = (x1 + x2) / 2;
        int y_mitte = (y1 + y2) / 2;
        // Rekursive Aufrufe:
        // 1. Linie vom ersten Punkt bis zur Mitte 2. Linie von der Mitte bis zum zweiten Punkt
        linie(x1, y1, x_mitte, y_mitte, canvas);
        linie(x2, y2, x_mitte, y_mitte, canvas);
    }
}

int main()
{
    char canvas[canvas_size][canvas_size];
    init_canvas(canvas);
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    do
    {
        cout << "Bitte geben Sie den ersten Punkt ein: ? ";
        cin >> x1 >> y1;
    } while (x1 < 0 || x1 >= canvas_size || y1 < 0 || y1 >= canvas_size);
    do
    {
        cout << "Bitte geben Sie den zweiten Punkt ein: ? ";
        cin >> x2 >> y2;
    } while (x2 < 0 || x2 >= canvas_size || y2 < 0 || y2 >= canvas_size);
    linie(x1, y1, x2, y2, canvas);
    print_canvas(canvas);
    system("PAUSE");
    return 0;
}