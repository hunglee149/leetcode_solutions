class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        string res;
        int it = 0;
        int sz = s.size();

        for (int i = 0; i < sz; i++)
        {
            if (it < spaces.size() && i == spaces[it])
            {
                res.push_back(' ');
                ++it;
            }
            res.push_back(s[i]);
        }

        return res;
    }
};