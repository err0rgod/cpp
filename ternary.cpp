#include <iostream>

using namespace std;

int main(){

    bool value;

    int v;

    cout << "Enter value" << endl;
    cin >> v;

    if(v == 1){
        value = true;

    }
    else{
        value = false;
    }

    value ? (cout << "missing") : (cout << "lying");
}