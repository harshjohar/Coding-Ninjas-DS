int pairSum(int *arr, int n, int num,int idx)
{
    //Write your code here
    // sort(arr, arr + n);
    int cnt = 0;
    int i = 0, j = n - 1;
    if(i==idx)i++;
    if(j==idx)j--;
    while (i < j)
    {
        if(i==idx){
            i++;
            continue;
        }
        if(j==idx){
            j--;
            continue;
        }
        if (arr[i] + arr[j] == num)
        {
            int x = arr[i], y = arr[j];
            if (x == y)
            {
                int c2 = 0;
                while (i < n && arr[i] == x)
                {
                    if(i==idx){
                        i++;
                        continue;}
                    c2++;
                    i++;
                }
                // cout<<c2<<" "<<c2 * (c2 - 1) / 2<<endl;
                return cnt + c2 * (c2 - 1) / 2;
            }
            else
            {
                int c1 = 0, c2 = 0;

                while (arr[i] == x)
                {
                    if(i==idx){
                        i++;
                        continue;}
                    c1++;
                    i++;
                }
                while (arr[j] == y)
                {
                    if(j==idx){
                        j--;
                        
                        continue;
                    }
                    c2++;
                    j--;
                }
                cnt += c1 * c2;
            }
            // cnt++;
        }
       
        else if (arr[i] + arr[j] > num){
            
            j--;
                        
        }
        else {
            i++;
        }
    }
    return cnt;
}
int tripletSum(int *arr, int n, int num)
{
    //Write your code here
    sort(arr,arr+n);
    int sum=0;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<=num){
            sum+=pairSum(arr,n,num-arr[i],i);
        }
    }
    return sum/3;
}