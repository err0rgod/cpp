#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;

    string b;

    cin >> a;

    cin >> b;

    // int x,y;

    int lena = a.size();

    int lenb = b.size();

    string c = a + b;

    char anot = a[0];
    char bnot = b[0];
    // anot = a[0];
    // bnot = b[0];

    string anew;
    string bnew;

    bnew = b;
    anew = a;

    anew[0] = b[0];
    bnew[0] = a[0];

    cout << lena << " " << lenb << endl;
    cout << c << endl;
    cout << anew << " " << bnew << endl;

    return 0;
}
