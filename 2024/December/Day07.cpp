class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) 
    {
        int l = 1, r = *max_element(nums.begin(), nums.end());

        while (l < r)
        {
            int mid = (l + r) / 2;

            if (valid(nums, mid, maxOperations))
            {
                r = mid;
            }
            else l = mid + 1;
        }    

        return l;
    }

private:
    bool valid(vector<int> nums, int maxPerBag, int maxOpr)
    {
        int cnt = 0;
        for (auto it: nums)
        {
            int opr = ceil(it / (1.0*maxPerBag)) - 1;
            cnt += opr;

            if (cnt > maxOpr) return false;
        }
        return true;
    }
};