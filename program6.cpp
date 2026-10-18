#include <iostream>

using namespace namespace std;

int main()
{
    int i, n;
    int bil[100];
    cout << "Program Input dan Menampilkan Bilangan" << endl;
    cout << "Berapa banyak bilangan yang akan diinput = " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Masukan sembarang bilangan ke - " << i << endl;
        cin >> bil[i];
    }
    cout << "Bilangan yang diinput adalah " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << "Bilangan ke " << i << " = " << bil[i] << endl;
    }
    return 0;
}
