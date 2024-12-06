class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) 
    {
        set<int> se;
        map<int, int> mp;
        for(auto& it: banned) mp[it]++;

        for (int i = 1; i <= n && i < maxSum; i++)
        {
            if (!mp[i]) se.insert(i);
        }       

        for (auto it: se) cout << it << " ";

        int curSum = 0, cnt = 0;
        for (auto it: se)
        {
            if (curSum + it > maxSum) return cnt;
            curSum += it;
            ++cnt;
        }

        return cnt;
    }
};
