#include <iostream>
#include <math.h>
using namespace std;


int kadanes(int n,int arr[]){
    int maxsum = 0;
    int a = 0;
    for(int i =0;i<n;i++){
        a+=arr[i];








        


        maxsum=max(maxsum,a);
        if(a<0) a = 0;
    }
    return maxsum;
}


int main(){
    int n =9;
    //int arr[6] = {1,2,3,4,5,6};
    //int arr[7] = {3,-4,5,4,-1,7,-8};
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int maxsum = INT_MIN;
    int a=0;

    for(int st = 0;st<n; st++){
        int cursum = 0;
        for(int end= st;end<n;end++){
            
            cursum += arr[end];
            maxsum = max(cursum,maxsum);
            

        }

        
    }
    cout<<"by regular method : "<<maxsum<<endl;
    cout <<"By kadanes algo : "<< kadanes(n,arr)<<endl;
}