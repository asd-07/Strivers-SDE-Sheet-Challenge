#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int,int>mp;
	for(auto it : arr) mp[it]++;
	for(auto it : mp){
		if(it.second>=2) return it.first;
	}
}

// approach 2
// #include <bits/stdc++.h> 
// int findDuplicate(vector<int> &arr, int n){

// 	sort(arr.begin(),arr.end());
// 	for(int i=1;i<=n;i++){
// 		if(arr[i] == arr[i-1]){
// 			return arr[i];
// 		}
// 	}
// }
