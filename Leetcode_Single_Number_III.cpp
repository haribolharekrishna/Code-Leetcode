class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xorall=0;
        for(int i=0;i<n;i++)
        {
            xorall^=nums[i];
            //xor of all gives xor of a and b
        }
        //in xor of a and b a bit is set because either it is set in a or in b
        vector<int> v;
        int a=0,b=0;
        int set_bitno=xorall & ~(xorall-1);
        //imp- n & ~(n-1) gives rightmost set bit notice the compliment
        for(int i=0;i<n;i++)
        {
            if(nums[i]&set_bitno)
                a^=nums[i];
            else
                b^=nums[i];
        }
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};