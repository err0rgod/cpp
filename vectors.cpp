#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 4;
    if (n < 2)
    {
        cout << "not prime\n";
        return 0;
    }

    bool isPrime = true;
    int limit = static_cast<int>(sqrt(n));
    for (int i = 2; i <= limit; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "prime\n" : "not prime\n");
    return 0;
}
