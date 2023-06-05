
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;

    unordered_map<int,int>mp;
    for(auto it : arr) mp[it]++;
    int k=floor(arr.size()/3);


    for(auto it : mp){
        if(it.second>k){
            ans.push_back(it.first);
        }
    }
    return ans;

}
