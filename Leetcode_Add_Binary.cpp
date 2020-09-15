class Solution {
public:
    string addBinary(string a, string b) {
        
        string res="";
        int i=a.length()-1,j=b.length()-1;
        int c=0;
        while(i>=0 && j>=0)
        {
            if(c==0)
            {
                if(a[i]=='1' && b[j]=='1')
                {
                    c=1;
                    res='0'+res;
                }
                else if((a[i]=='1' && b[j]=='0')||(a[i]=='0' && b[j]=='1'))
                {
                    c=0;
                    res='1'+res;
                }
                else
                    res='0'+res;
            }
            else
            {
                if(a[i]=='1' && b[j]=='1')
                {
                    c=1;
                    res='1'+res;
                }
                else if((a[i]=='1' && b[j]=='0')||(a[i]=='0' && b[j]=='1'))
                {
                    c=1;
                    res='0'+res;
                }
                else
                {
                    res='1'+res;
                    c=0;
                }
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            if(c==1)
            {
                if(a[i]=='1')
                {
                    res='0'+res;
                    c=1;
                }
                else 
                {
                    res='1'+res;
                    c=0;
                }
            }
            else
            {
                if(a[i]=='1')
                    res='1'+res;
                else
                    res='0'+res;
            }
            i--;
        }
         while(j>=0)
        {
            if(c==1)
            {
                if(b[j]=='1')
                {
                    res='0'+res;
                    c=1;
                }
                else 
                {
                    res='1'+res;
                    c=0;
                }
            }
            else
            {
                if(b[j]=='1')
                    res='1'+res;
                else
                    res='0'+res;
            }
             j--;
        }
        if(c==1)
            res='1'+res;
        return res;
    }
};