void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    while(!input.empty()) {
        int p = input.top();
        input.pop();
        extra.push(p);
    }
    input=extra;
}