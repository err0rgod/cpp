#include <iostream>
using namespace std;


void pattern(int x){

    for (int i=0;i<x;i++){
        for (int j = 0 ; j<x-i-1; j++){
            cout<< "   " ;
        }
        for (int j = 0 ; j<i*2+1;j++){
            cout<<" * ";
        }
        for (int j = 0 ; j<x-i-1; j++){
            cout<< "   " ;
        }
        cout <<endl;
    }


}


int main(){
    int t;
    cout << "enter the no of row: ";
    cin>>t;
    pattern(t);
    //cin>>t;

   // for(int i =0 ; i<t;i++){
     //   int n;
       // cin>>n;
        //pattern(n);
    //}
}