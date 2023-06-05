#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++) mp[arr[i]]++;

	int ans=-1;
	int k = n/2;
	for(auto it  :mp){
		if(it.second > k){
			ans=it.first;
			break;
		}
	}
	
	return ans;
}
