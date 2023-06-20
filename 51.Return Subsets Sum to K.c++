void f(int ind,vector<int>& arr,int n,int target,vector<vector<int>>& ans,vector<int>&ds){
    if(ind >= n){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    //picking the element
    ds.push_back(arr[ind]);
    f(ind+1, arr, n, target-arr[ind], ans, ds);
    ds.pop_back();

    //not picking the element
    f(ind+1, arr, n, target, ans, ds);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int>ds;
    f(0, arr, n, k, ans, ds);
    return ans;
}
