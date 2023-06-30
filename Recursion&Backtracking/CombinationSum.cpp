void solve(int ind, int target, vector<int> A, vector<vector<int>> &ans, vector<int> &ds)
{
    if (ind == A.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    // pick
    if (A[ind] <= target)
    {
        ds.push_back(A[ind]);
        solve(ind, target - A[ind], A, ans, ds);
        ds.pop_back();
    }
    solve(ind + 1, target, A, ans, ds);
}
vector<vector<int>> combinationSum(vector<int> &A, int B)
{
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0, B, A, ans, ds);
    // Your code here
}