#include <iostream>
using namespace std;


void pattern(int x){

    for (int i=0;i<=x;i++){
        for (int j = 1 ; j<=i; j++){
            cout<< j;
        }
        cout<<endl;
    }


}


int main(){
    int t;

    cin>>t;

    for(int i =0 ; i<t;i++){
        int n;
        cin>>n;
        pattern(n);
    }
}