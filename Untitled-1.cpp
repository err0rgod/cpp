#include <iostream>
using namespace std;

int main()
{   
    int age;
    cout << " tell me your age : " << '\n';
    cin>> age;
    cout << " tell me your name : " << '\n';
    string name;
    getline(cin >> ws, name);
    cout << name << " " << age;
    return 0;
}