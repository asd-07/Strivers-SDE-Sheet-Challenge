#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  //aprroach 2;
  int n = arr.size();
  int ans=0, sum =0;
  
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++){
    sum += arr[i];
    if(sum == 0) ans = i+1;
    else{
      if(mp.find(sum) != mp.end()){
      ans=max(ans,i-mp[sum]);
       }
      else{
        mp[sum]=i;
      }
    }
  }
  return ans;
}

//////////////////approach 1//////////////
#include <bits/stdc++.h>
//sawal number ::: 22.Longest Subarray Zero Sum
int LongestSubsetWithZeroSum(vector<int> arr) {
  
  int ans =0;
  
  for(int i=0;i<arr.size();i++){
    int sum =0;
    for(int j=i;j<arr.size();j++){
      sum += arr[j];
      if(sum == 0){
        ans = max(ans, j-i+1);
      }
    }
  
  }
  return ans;
}
