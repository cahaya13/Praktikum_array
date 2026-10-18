#include <iostream>

using namespace namespace std;

int main()
{
    int bil, i;
    cout << "Program Input dan Menampilkan Bilangan" << endl;
    for (i = 1; i <= 3; i++)
    {
        cout << "Masukan sembarang bilangan =" << endl;
        cin >> bil;
    }
    for (i = 1; i <= 3; i++)
    {
        cout << "Bilangan yang diinput adalah " << endl;
        cout << bil << endl;
    }
    return 0;
}
