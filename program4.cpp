#include <iostream>

using namespace namespace std;

int main()
{
    int i;
    int bil[5];
    cout << "Program Input dan Menampilkan Bilangan" << endl;
    for (i = 1; i <= 3; i++)
    {
        cout << "Masukan sembarang bilangan =" << endl;
        cin >> bil[i];
    }
    cout << "Bilangan yang diinput adalah " << endl;
    for (i = 1; i <= 3; i++)
    {
        cout << bil[i] << endl;
    }
    return 0;
}
