#include <iostream>

using namespace namespace std;

int main()
{
    int b, k, n;
    int entri[10][10];
    cout << "Matriks nxn" << endl;
    cout << "Masukkan banyak baris yang akan diinput" << endl;
    cin >> n;
    for (b = 0; b < n; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << "Masukan entri matriks ke " << b + 1 << k + 1 << endl;
            cin >> entri[b][k];
        }
    }
    cout << "Matriks yang diinput" << endl;
    for (b = 0; b < n; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << entri[b][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
