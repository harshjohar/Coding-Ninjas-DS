#include <string>
using namespace std;

string returnString(int n) {
    string s[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return s[n-2];
}

int keypad(int num, string output[]) {
    if(num==0) {
        output[0]="";
        return 1;
    }
    int small = keypad(num/10, output);
    int len = output->size();
    string str = returnString(num%10);
    int strLen = str.size();

    for(int i=1; i<strLen; i++) {
        for(int j=0; j<small; j++) {
            output[j+i*small]=output[j];
        }
    }
    for(int i=0; i<strLen; i++) {
        char add = str[i];
        for(int j=0; j<small; j++) {
            output[j+i*small]+=add;
        }
    }
    return small*strLen;
}