#include <iostream>
int cnt = 0;
void recurs(int i, int n)
{

    std::cout << n << std::endl;

    if (n < i)
    {
        return;
    }

    recurs(i, n - 1);
}

int main()
{
    int n;
    int i =0;
    std::cin >> n;
    recurs(i, n);
}