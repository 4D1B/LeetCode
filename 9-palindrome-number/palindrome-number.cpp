class Solution {
public:
    bool isPalindrome(int x) {
        string s  = to_string(x);
        bool uiisTrue = false;;
        // if(s[0] == '-'){
        //     s .erase(0,1);
        // }
        for(int i = 0 ;i< s.length() ;i++){
            cout << i ;
            if( s[i] == s[s.length() -i-1]){
                cout << s;
                uiisTrue = true;
            }else{
                cout << i <<  s[i] << s[s.length() -i-1] ;
                return false;
            }
        }
        return uiisTrue ;
    }
};