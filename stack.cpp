#include <iostream>
#include <vector>
using namespace std;
struct stack{

    int start =0;
    int end = 0;
    vector<int> hash;
    void push(int n){
        hash.push_back(n);
        end++;
    }
    void pop(){
        hash.pop_back();
        end--;
    }
    void top(){
       cout<< hash[end-1]<< endl; 
       
    }
    void size(){
        cout << end-start<<endl;
    }
    bool empty(){
        if(start == end) return true;
        return false;
    }
};

int main(){
    stack s;
    

    s.size();
    s.empty()?cout<< "YEs": cout<<"NO";

}