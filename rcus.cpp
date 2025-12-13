#include <iostream>
int cnt = 0;
void recurs(int i, int n)
{

    if (n < i)
    {
        return;
    }
    std::cout << n << std::endl;
    recurs(i, n - 1);
}

int main()
{
    int n;
    int i = 1;
    std::cin >> n;
    recurs(i, n);
}