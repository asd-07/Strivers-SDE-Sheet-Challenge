void dfs(int i, int j, vector<vector<int>> &image, vector<vector<int>> &ans, int newColor, int iniColor){
    int n = image.size();
    int m = image[0].size();
    if(i<0 || i>=n || j<0 || j>=m || image[i][j] != iniColor || ans[i][j] == newColor){
        return;
    }

    ans[i][j] = newColor;
    dfs(i+1, j, image, ans, newColor, iniColor);
    dfs(i-1, j, image, ans, newColor, iniColor);
    dfs(i, j+1, image, ans, newColor, iniColor);
    dfs(i, j-1, image, ans, newColor, iniColor);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    int iniColor = image[x][y];
    vector<vector<int>> ans = image;
    dfs(x, y, image, ans, newColor, iniColor);
    return ans;
}
