#include <iostream>
#include <bits/stdc++.h>
int main(){
        vector<int> nums = {10,5,2,6};
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++){
            if(nums[i] < k) ans.push_back({nums[i]});
            for(int j = i+1; j < n ; j++){
                if(nums[i]+nums[j] < k ) ans.push_back({nums[i],nums[j]});
                for(int k = j+1; k<n; k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum < k ) ans.push_back({nums[i],nums[j],nums[k]});
                }
            }
        }
        for(vector<int> ch : ans){
            std::cout<<ch<<" "<<std::endl;
        }
}