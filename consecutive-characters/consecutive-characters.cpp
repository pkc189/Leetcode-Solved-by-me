class Solution {
public:
    int maxPower(string s) {
        int l =0,count=0,max1=0;
        int r=1;
        if(s.length()==1)
            return 1;
      while(l<r && r<=s.length())
      {
          if(s[l]==s[r])
          {
              count++;
              r++;
             l++;
          }
          
          else{
              l++;
              r++;
              count++;
              max1 = max(max1,count);
              count=0;
          }
          
      }
        return max1;
    }
};