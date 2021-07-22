class Solution {
public:
    void reverseString(vector<char>& s) {
       // cout<<s[s.size()-1];
        for(int i=0;i<s.size()/2;i++)
        {
            char a = s[i];
           // cout<<a;
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i] = a;
            
        }
    }
};