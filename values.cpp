#include <iostream>
using namespace std;
int main(){

    // int array; // Removed to avoid conflict with string array

    int a;
    cin>>a;

    string array[5] = {"zero","one","two","three","four"};

    for(int i = 0 ; i<5;  i++){

        if (array[i] == a){
            cout<< array[i];
        }

    }


    



}