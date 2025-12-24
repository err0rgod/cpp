#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &nums)
{
    set<int> set1;
    for (int i = 0; i < nums.size(); i++)
    {
        set1.insert(nums[i]);
    }
    for (auto it : set1)
    {
        cout << it << endl;
    }
}

int main()
{
    vector<int> test = {1, 1, 2};
    removeDuplicates(test);
}