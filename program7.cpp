#include <iostream>

using namespace namespace std;

int main()
{
    int b, k;
    int entri[10][10];
    cout << "Matriks 2x2" << endl;
    for (b = 0; b < 2; b++)
    {
        for (k = 0; k < 2; k++)
        {
            cout << "Masukan entri matriks ke " << b + 1 << k + 1 << endl;
            cin >> entri[b][k];
        }
    }
    cout << "Matriks yang diinput" << endl;
    for (b = 0; b < 2; b++)
    {
        for (k = 0; k < 2; k++)
        {
            cout << entri[b][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
