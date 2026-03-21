#include <iostream>

bool fib(int arr[],int n ){
    if(n==1) return true;
    if(arr[n-2] <= arr[n-1]){
        return fib(arr,n-1);
    }else {
        return false;
    }
    return false;
}
int main(){
    int arr[5] = {1,3,5,6,9};
    int n = 5;
    if(fib(arr,n)){
        std::cout <<"balle balle"<<std::endl;
    }
}               