void rec(vector<string> &v, string s, int i)
{
    if (i == s.length() - 1)
    {
        v.push_back(s);
        return;
    }
    for (int in = i; in < s.length(); in++)
    {
        swap(s[i], s[in]);
        rec(v, s, i + 1);
        swap(s[in], s[i]);
    }
}
vector<string> find_permutation(string S)
{
    vector<string> v;
    rec(v, S, 0);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    return v;
}