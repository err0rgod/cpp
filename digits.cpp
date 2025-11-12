#include <iostream>

using namespace std;

int main(){
    int n= 384683;
    int w=n;
    int s ;

    if (n == 0) s = 1;
    n = abs(n); // handle negative numbers

    while (n > 0) {
        n /= 10;
        s++;
    }
    for(int i=s;i<0;i++){

        int q = w%10;
        int w = w/10;
        cout<< q;

    }
    cout<<n/10;
}