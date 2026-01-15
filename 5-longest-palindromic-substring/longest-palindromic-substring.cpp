class Solution {
public:
    string longestPalindrome(string s) {
        int highestCount = 0;
        int prevStart =0;
        for(int i =0 ;i< s.length() ;i++){
            int prev= i ;
            int next = i;
            while(prev >= 0 && next <s.length() && s[prev] == s[next]){
                prev--;
                next++;
            }
            if(highestCount < (next - prev - 1) ){
                prevStart = prev+1;
                highestCount = (next - prev - 1);
            }

            prev= i;
            next = i+1;
            while(prev >=0 && next < s.length() && s[prev] == s[next]){
                prev--;
                next++;
            }
            if(highestCount < (next - prev - 1) ){
                prevStart = prev+1;
                highestCount = (next - prev - 1);
            }

        }
        cout <<  prevStart ;
        return s.substr(prevStart , highestCount);
    }
};