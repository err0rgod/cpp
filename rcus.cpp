#include<iostream>
int cnt = 0;
void recurs(){
    

    std::cout<<cnt<<std::endl;

    cnt++;

    recurs();
}


int main(){
    recurs();
}