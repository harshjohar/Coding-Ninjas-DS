double geometricSum(int k) {
    // Write your code here
    if(k==0) {
        return 1;
    }
    // cout<<"h"<<endl;
    return geometricSum(k-1) + 1/pow(2, k);
}

