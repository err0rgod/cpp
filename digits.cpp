#include <iostream>

using namespace std;

int main(){
    int n= 384683;
 

    while(n>0){
        int q=n%10;
        cout<<q;
        n=n/n;

   }
}