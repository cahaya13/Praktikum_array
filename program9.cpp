#include <iostream>

using namespace namespace std;

int main()
{
    int b, k, m, n;
    int entri[10][10];
    cout << "Matriks mxn" << endl;
    cout << "Masukkan banyak baris yang akan diinput" << endl;
    cin >> m;
    cout << "Masukkan banyak kolom yang akan diinput" << endl;
    cin >> n;
    for (b = 0; b < m; b++)
    {
        for (k = 0; k < n; k++)
        {
            cout << "Masukan entri matriks ke " << b + 1 << k + 1 << endl;
            cin >> entri[b][k];
        }
    }
    cout << "Matriks yang diinput berordo" << m << "x" << n << endl;
    for (b = 0; b < m; b++)
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
