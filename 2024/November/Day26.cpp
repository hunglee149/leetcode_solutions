class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) 
    {
        long long sum = 0;
        long long minAbs = INT_MAX;

        int cntNegative = 0;

        for (auto row: matrix)
        {
            for (auto x: row)
            {
                sum += 1ll*(abs(x));
                if (x < 0) ++cntNegative;  

                minAbs = min(minAbs, 1ll*abs(x));
            }
        }    

        if (cntNegative % 2 == 0) return sum;
        return sum - 2*minAbs;
    }
};