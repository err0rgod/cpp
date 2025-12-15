#include <iostream>
using namespace std;

int recurs(int sum)
{
    
    
    if (sum == 0)
    {
        return 1;     
    }
    return sum * recurs(sum-1);
}
int main()
{
    int n;
    std::cin >> n;
    int x = recurs(n);

    cout<<x<<endl;
}