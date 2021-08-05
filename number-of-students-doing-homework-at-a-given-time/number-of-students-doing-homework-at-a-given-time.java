class Solution {
    public int busyStudent(int[] s, int[] e, int q) {
        int count=0;
        for(int i = 0;i<s.length;i++)
        {
            if(s[i]<=q && q<=e[i])
            {
                count++;
            }
        }
        return count;
    }
}