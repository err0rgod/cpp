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
    int x;

    cout <<"Enter the Number of rows and Colummns: " << endl;

    cin >> x;


    pattern(x);

}