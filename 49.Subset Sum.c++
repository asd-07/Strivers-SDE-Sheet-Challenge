#include <bits/stdc++.h> 
void subsetSum(int ind , int sum , vector<int> &a, vector<int> &ans){

    //BASE CASE
    if(ind == a.size()){
        ans.push_back(sum);
        return;
    }

    //PICK 
    subsetSum(ind+1, sum + a[ind], a, ans);
    //NOT PICK
    subsetSum(ind+1, sum, a, ans);
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    
    vector<int> ans;

    subsetSum(0, 0, num, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
