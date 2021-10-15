#include<bits/stdc++.h>
using namespace std;

void increment(int n) {
    n++;
}

void increment1(int &n) {
    n++;
}

inline int max(int a, int b) {
    return (a>b)?a:b;
}

int main() {
    int i=65;
    char c = i;
    cout<<c<<endl;

    int* pi = &i;
    // char* pc = p; --invalid syntax
    char* pc = (char*)pi;
    cout<<pi<<endl;
    cout<<*pi<<endl;
    cout<<pc<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;    // NULL
    cout<<*(pc+2)<<endl;    // NULL
    cout<<*(pc+3)<<endl;    // NULL

    int h=10;
    int k=h;
    h++;
    cout<<k<<endl;

    int &kr = h; // reference variable
    cout<<kr<<endl;
    h++;
    cout<<kr<<endl;
    kr = 100;
    cout<<h<<endl;

    increment(h);
    cout<<h<<endl;

    increment1(h);
    cout<<h<<endl;

    // dynamic allocation
    int *p = new int;
    *p = 10;
    cout<<*p<<endl;

    // array
    int* pa = new int[50];
    pa[0]=6;
    pa[1]=9;

    // 2D array
    int** p2  = new int*[10];
    for(int q=0;q<10; q++) {
        p2[q] = new int[20];
    }
    // array of 10 x 20

    for(int q=0; q<10; q++) {
        delete [] p2[q];
    }
    delete [] p2;

    // ternery operator
    int a=10, b=2;
    int ci = (a>b) ? a:b;
    cout<<ci<<endl;
    return 0;
}