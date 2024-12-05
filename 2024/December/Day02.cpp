class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        map<string, set<int>> mp;
        int cnt = 1;

        int res = 0;
        stringstream ss(sentence);
        string word;
        while (ss >> word)
        {
            mp[word].insert(cnt++); 
        }

        for (auto it: mp)
        {
            cout << it.first << ": ";
            for (auto x: it.second) cout << x << " ";
            cout << endl;
        }

        for (auto it: mp)
        {
            string check = it.first.substr(0, searchWord.size());
            if (check == searchWord) 
            if (res == 0) res = *(it.second).begin();
            else res = min(res, *(it.second).begin());
        }
        if (res == 0) return -1;
        return res;
    }
};