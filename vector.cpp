#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(5,95,4,3,3,5,5,2,1,2,4,5,9);
    vector<int>::iterator itr = v.begin();
    itr++;
    cout<<*(itr);
}