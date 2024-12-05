class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        map<int, pair<bool, int>> mp; 
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            auto find1 = mp[arr[i] * 2];
            pair<bool, int> find2;

            if (arr[i] % 2 == 0) find2 = mp[arr[i] / 2];
            if (find1.first == true && find1.second != i) 
                return true;
            if (arr[i] % 2 == 0)
            {
                if (find2.first == true && find2.second != i)       
                    return true;
            }
            mp[arr[i]] = {true, i};
        }    

        return false;
    }
};