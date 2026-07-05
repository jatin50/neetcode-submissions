class Solution {
public:
    bool isValid(string s) {
    std:: stack<char> stack1;
    unordered_map<char,char> closeToOpen = {
        {')','('},
        {'}','{'},
        {']','['}
    };
    for(char c:s){
        if(closeToOpen.count(c)){
            if(!stack1.empty()&&stack1.top()==closeToOpen[c]){
                stack1.pop();
            }else{
                return false;
            }
    }
    else{
        stack1.push(c);
    }
    }
    return stack1.empty();
    }
};
