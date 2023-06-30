void solve(int id, int sum, vector<int> arr, vector<int> &ans)
{
    if (id == arr.size())
    {
        ans.push_back(sum);
        return;
    }
    solve(id + 1, sum + arr[id], arr, ans);
    solve(id + 1, sum, arr, ans);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    // Write Your Code here
    vector<int> ans;
    solve(0, 0, arr, ans);
    return ans;
}