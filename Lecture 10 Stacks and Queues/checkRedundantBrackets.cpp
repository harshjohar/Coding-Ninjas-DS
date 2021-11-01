#include<stack>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> S;
    for(char ch : expression) {
        if(ch!=')') {
            S.push(ch);
        }
        else {
            char top = S.top();
            S.pop();
            
            bool flag = true;
            
            while(!S.empty() and top!='(') {
                if(top=='+' or top=='-' or top=='*' or top=='/') {
                    flag=false;
                }
                top=S.top();
                S.pop();
            }
            if(flag) {
                return true;
            }
        }
    }
    return false;
}