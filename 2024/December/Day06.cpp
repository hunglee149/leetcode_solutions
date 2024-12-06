class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) 
    {
        set<int> bannedNums(banned.begin(), banned.end());

        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            if (bannedNums.count(i)) continue;
            if (maxSum - i < 0) return cnt;
            
            maxSum -= i;
            ++cnt;
        }

        return cnt;
    }
};
