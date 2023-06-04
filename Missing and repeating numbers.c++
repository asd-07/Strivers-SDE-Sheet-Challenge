#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	//duplicate
	int x=-1;
	sort(arr.begin(),arr.end());

        for(int i=0;i<n;i++){
            if(arr[i] == arr[i+1]){
                x = arr[i];
            }
        }
        
		//missing number 
		set<int> s;
		for(auto it : arr){
			s.insert(it);
		} 
		int i=1;
		int y=0;
		while(i<=n){
			if(s.find(i) != s.end()){
				i++;
			}
			else{
				y=i;
				i++;
			}
		}

		return {y,x};
}
