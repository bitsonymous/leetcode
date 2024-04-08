class Solution {
public:
    string getSmallestString(string s, int k) {
        string ans="";
        int t=k;
        int  i = 0;
        while(i<s.size()){
            int x = min((s[i] - 'a') , 26 - s[i] + 'a');
            if(x<=t){
                ans+='a';
                t-=x;
            }else{
                ans+=s[i]-t;
                t = 0;
            }
            i++;
        }
        return ans;
    }
};