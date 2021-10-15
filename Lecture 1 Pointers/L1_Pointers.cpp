#include<bits/stdc++.h>
using namespace std;

void print(int *p) {
    cout<<*p<<endl;
}

// pass by value
void increment_pointer(int* p){
    p++;
}

void increment(int* p) {
    (*p)++;
}

void increment1(int** p) {
    (p)++;
}

void increment2(int** p){
    (*p)++;
}

// finally this one works
void increment3(int** p) {
    (**p)++;
}
 
int sum(int* arr, int size) {
    int ans=0;
    for(int i=0; i<size; i++) {
        ans+=arr[i];
    }
    return ans;
}

int main() {
    int i=5;
    cout<<&i<<endl;

    int *ptr = &i;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    // basically no fun
    // *ptr can be treated same as i

    int *ptr2 = ptr;    // now ptr2 also points to i

    int *p = 0; // null ptr
    cout<<p<<endl;

    cout<<ptr<<endl;
    ptr=ptr+1;  // goes to next integer in memory
    cout<<ptr<<endl;
    ptr=&i;

    // arrays
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    a[0]=5;
    cout<<*a<<endl;

    a[1]=10;
    cout<<a+1<<endl;
    cout<<*(a+1)<<endl;

    char b[] = "abc";
    cout<<b<<endl;

    char *c = &b[0];
    cout<<c<<endl;

    char c1 = 'a';
    char* pc = &c1;
    cout<<c1<<endl;
    cout<<pc<<endl;
    cout<<*pc<<endl;

    char str[] = "abcde";
    // char *pstr = "abcde"; //wrong

    int *ptri = &i;
    print(ptri);
    
    cout<<ptri<<endl;
    increment_pointer(ptri);
    cout<<ptri<<endl;
    
    cout<<*ptri<<endl;
    increment(ptri);
    cout<<*ptri<<endl;

    // double pointer
    int** p2 = &ptri;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;
    return 0;
}