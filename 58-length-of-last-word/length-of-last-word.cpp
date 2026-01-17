class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() ==1) {return 1;}
        int firstChar = 0;
        int charWithoutSpace = 0;
        for (int j=s.length()-1 ;j>0 ;j-- ) {
            if (std::isalpha(s[j])) {
                firstChar = j;
                break; 
            }
        }
        charWithoutSpace = firstChar;
        while(firstChar>=0 && s[firstChar] != ' '  ){
            firstChar--;
        }  
        return charWithoutSpace-firstChar;
    }
};