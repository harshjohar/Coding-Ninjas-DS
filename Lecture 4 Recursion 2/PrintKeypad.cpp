#include <iostream>
#include <string>
using namespace std;

void printKrdePls(int num, string output, string options[10]) {
    if(num==0) {
        cout<<output<<endl;
        return;
    }
    int digit = num%10;
    int i=0;
    while(i<options[digit].length()) {
        printKrdePls(num/10, options[digit][i]+output, options);
        i++;
    }
    return;
}


void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string options[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    printKrdePls(num, "", options);
    return;
}
