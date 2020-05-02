class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        set<char> mp;
        int c=0;
        int n=J.length();
        for(int i=0;i<n;i++)
            mp.insert(J[i]);
        int m=S.length();
        for(int i=0;i<m;i++)
        {
            if(mp.find(S[i])!=mp.end())
                c++;
        }
        return c;
    }
};
