#include<stack>
bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> S;
    int n = expression.length();
    
    for(char ch : expression) {
        if(ch=='(') {
            S.push(ch);
        }
        else {
            if(!S.empty())
                if(S.top()=='(') {
                    S.pop();
                } else {
                    S.push(')');
                }
            else {
                return false;
            }
        }
    }
    if(S.empty()) {
        return true;
    } return false;
}