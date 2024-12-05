class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {
        int i = 0, j = 0, sz1 = str1.size(), sz2 = str2.size();

        while (i < sz1 && j < sz2)
        {   
            if (str1[i] == str2[j] || 
                str1[i] - str2[j] == -1 ||
                str1[i] - str2[j] == 25) ++j;
            ++i;
        }

        return (j == sz2);
    }
};