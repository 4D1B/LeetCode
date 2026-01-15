class Solution {
public:
    bool isValid(string s) {
        stack<int> validStack ;

        for(int i = 0; i< (s.length()); i++){
            if(validStack.empty()){
                validStack.push(s[i]);
            }else if(validStack.top() == '('  && s[i] == ')'){
                validStack.pop();
            }else if(validStack.top() == '{'  && s[i] == '}'){
                validStack.pop();
            }else if(validStack.top()== '['  && s[i] == ']'){
                validStack.pop();
            }else{
                validStack.push(s[i]);
            }
        }

        if(!validStack.empty()){
            return false;
        }else{
            return true;
        }

    }
};