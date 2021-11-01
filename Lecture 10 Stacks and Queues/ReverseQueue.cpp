#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.empty()) {
        return;
    }
    int f = input.front();
    input.pop();
    reverseQueue(input);
    input.push(f);
}