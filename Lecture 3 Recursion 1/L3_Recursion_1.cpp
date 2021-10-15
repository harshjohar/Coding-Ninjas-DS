#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n==1 or n==0) {
        return 1;
    }
    return n*factorial(n-1);
}

int fib(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

bool isSorted(int arr[], int sz) {
    if(sz==1 or sz==0) {
        return true;
    }
    if(arr[0]>arr[1]) {
        return false;
    }
    return isSorted(arr+1, sz-1);
}

int main() {
    cout<<factorial(3)<<endl;
    cout<<fib(10)<<endl;
    int arr[] = {0, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 5, 6, 3, 7};
    cout<<isSorted(arr, 5)<<" "<<isSorted(arr2, 5)<<endl;
    return 0;
}