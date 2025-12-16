#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n[5] = {1, 35, 2, 5, 6};


int main()
{
   
    
    unordered_map<int, int> mpp;
    int arr[5] = {2,5,2,1,4};
    for(int i = 0; i<5; i++){
        
        mpp[arr[i]++];

    }

    
    int maxf = INT_MIN , minf = INT_MAX;

    int maxelem= -1, minelem = -1 ;

    for(auto &p : mpp){
        int num = p.first;
        int count  = p.second;

        if(count > maxf){
            maxf = count;
            maxelem = num;

        }
        if(count < minf){
            minf = count;
            minelem = num;

        }

    }
    cout<<"High freq element is : "<< maxelem << " and freq is : " << maxf<<endl;
    cout<<"lowest one is : " << minelem << " and freq is : "<< minf<<endl;

}