class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string matchesStr = "";
        
        for(int i =0; i< strs.size() ;i++ ){
            if(i == 0){
                matchesStr= strs[i];
            }else{
                string newStr = strs[i];
                string finalStr = "";
                int j =0;
                while(j< newStr.length() || j < matchesStr.length()){
                    if(newStr[j] ==  matchesStr[j]){
                        finalStr += matchesStr[j];
                    }else {
                        break;
                    }
                    j++;
                }
                matchesStr = finalStr;
            }
        }
        return matchesStr;
        
    }
};