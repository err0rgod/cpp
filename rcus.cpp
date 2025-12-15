#include <iostream>
using namespace std;

void recurs(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    recurs(i - 1, sum + i);
}
int main()
{
    int n;
    std::cin >> n;
    recurs(n, 0);
}