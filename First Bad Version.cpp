// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int ans=-1;
        int l=1,h=n;
        while(l<=h)
        {
            int mid=l+((h-l)/2);
            if(isBadVersion(mid))
            {
                ans=mid; 
                h=mid-1;  //mid version bad implies all to the right are bad so either it is first bad or 
                          //we may find the first bad version to its left
            }
            else
                l=mid+1;  //mid version not bad implies fisrt bad version must be to right 
        }
        return ans;
    }
};
