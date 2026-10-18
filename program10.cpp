#include <iostream>

using namespace namespace std;

int main()
{
    int b, k, m, n;
    int entri1[10][10], entri2[10][10];
    cout << "Matriks mxn" << endl;
    cout << "Masukkan banyak baris yang akan diinput" << endl;
    cin >> m;
    cout << "Masukkan banyak kolom yang akan diinput" << endl;
    cin >> n;
    cout << endl;
    cout << "Input entri-entri Matriks ke-1" << endl;
    for (b = 0; b < m; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << "Masukan entri matriks ke " << b + 1 << k + 1 << endl;
            cin >> entri1[b][k];
        }
    }
    cout << endl;
    cout << "Input entri-entri Matriks ke-2" << endl;
    for (b = 0; b < m; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << "Masukan entri matriks ke " << b + 1 << k + 1 << endl;
            cin >> entri2[b][k];
        }
    }
    cout << endl;
    cout << "Matriks yang diinput berordo" << m << "x" << n << endl;
    cout << "Matriks ke 1" << endl;
    for (b = 0; b < m; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << entri1[b][k] << " ";
        }
        cout << endl;
    }
    cout << "Matriks ke 2" << endl;
    for (b = 0; b < m; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << entri2[b][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
