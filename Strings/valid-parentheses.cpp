class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        st.push('0');
        if(s.length()<2) return false;
        for(int i=0; i<s.length(); i++)
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                st.push(s[i]);
            else
                if (((s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[') || (s[i]==')' && st.top()=='(')) == true) st.pop();
                else
                    return false;
        if(st.size()==1)    return true;
        return false;
    }
    
};
