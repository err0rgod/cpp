#include <iostream>
using namespace std;
int n[5] = {1, 35, 2, 5, 6};

int recurs(int n)
{

    if (n<=1) return n;

    int last = recurs(n-1);
    int slast = recurs(n-2);
    
    return last + slast;
}
int main()
{
    int n;
    cin>>n;
    cout<<recurs(n)<<endl;
}