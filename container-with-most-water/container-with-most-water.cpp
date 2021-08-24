class Solution {
public:
    int maxArea(vector<int>& h ) {
      int area =0,j=1;
       int l = h.size()-1;
        int a = 0;
        
        while(a<l)
        {
            area = max(area,min(h[a],h[l])*(l-a));
         
                
                if(h[a]<h[l])
                    a++;
            else l--;
            
            
        }
        
return area;    }
};