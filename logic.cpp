#include <iostream>
using namespace std;


void pattern(int x){

    int i,j,k;
    k=1;

    for(i=0;i<x;i++){
        
        for(j=0;j<k;j++){
            cout<<" * ";

        }

        cout<<endl;
        k++;
    }
}

int main(){
    int x;

    cout <<"Enter the Number of rows and Colummns: " << endl;

    cin >> x;


    pattern(x);

}