#include <iostream>
using namespace std;
int main(){
      // Write your code here
    int n = 27;
    for(int i = 2 ; i<n;i++){
        if(i%(n) == 0){
            cout<< "fasle"<<endl;
        }
        else{
            cout<<"true"<<endl;
        }
    }
}