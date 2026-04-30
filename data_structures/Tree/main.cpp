#include <iostream>
#include <vector>
#define cout std::cout

class entity{
private:
    int name = 0;
    mutable int cnt = 0;
public:
    int getname() const{
        cnt++;
        cout<<cnt<<std::endl;
        return name;
    }
};


int main(){
    entity e;
    void* ptr = &e;
    cout << ptr<<std::endl;
}