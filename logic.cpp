#include <iostream>
using namespace std;


void pattern(int x){

    for (int i=x;i>=0;--i){
        for (int j = 0 ; j<=i; j++){
            cout<< " * ";
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