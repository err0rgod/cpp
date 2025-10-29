#include <iostream>
using namespace std;


void pattern(int x,int y){

    int i,j;


    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cout<<" * ";

        }

        cout<<endl;
    }
}

int main(){
    int x,y;

    cout <<"Enter the Number of rows and Colummns: " << endl;

    cin >> x;
    cin >> y;

    pattern(x,y);

}