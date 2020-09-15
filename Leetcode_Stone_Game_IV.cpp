class Solution {
public:
    bool winnerSquareGame(int n) {
        /*  finding if a position is winning or losing     
                 7(L)
             /       \
             3(W)       6(W)
            /         /   \
            2(L)      2(L)  5(L) 
            /               /   \
            1(w)           4(W)  1(W)

             */

        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=0;
            for(int j=1;i-(j*j)>=0;j++)
            {
                if(dp[i-j*j]==0)
                    dp[i]=1;
            }
        }
        return dp[n];
    }
};